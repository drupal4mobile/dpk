#!/bin/bash -ex

logger -t RightScale "\n\Adding Jenkins Proxy..."
/usr/sbin/a2enmod proxy
/usr/sbin/a2enmod proxy_http
/usr/sbin/a2enmod vhost_alias
/bin/sed -i 's/--webroot/--prefix=\/build\ --webroot/g' /etc/default/jenkins

logger -t RightScale "\n\Forcing Jenkins Reload..."

exec $(/etc/init.d/jenkins restart <&- >&- 2>&- )&

# optional service check after a sleep (to allow the detached restart to complete)
sleep 5
/etc/init.d/jenkins status

_old="<\/VirtualHost>"
_new="\n\<Proxy \*\>\nOrder deny,allow\nAllow from all\n<\/Proxy>\nProxyPreserveHost on\nProxyPass \/build http:\/\/localhost:8080\/build\n\<\/VirtualHost\>\n"
/bin/sed -i "s/$_old/$_new/g" /etc/apache2/sites-available/default
/usr/sbin/service apache2 restart
chown -R jenkins.adm /var/www

logger -t RightScale "\n\Adding Jenkins jobs..."
/bin/mkdir /var/lib/jenkins/.drush
cd /var/lib/jenkins/.drush
/usr/bin/git clone --branch 6.x-2.x http://git.drupal.org/project/drush_make.git
chown -R jenkins.nogroup /var/lib/jenkins/.drush
cd /var/lib/jenkins/jobs
git clone http://github.com/stovak/dpk.git
cp -R dpk/sites/private/jenkins/* .
rm -Rf dpk
chown -R jenkins.nogroup *

cd /var/lib/jenkins/plugins

curl -OL http://updates.jenkins-ci.org/latest/git.hpi
curl -OL http://updates.jenkins-ci.org/latest/github.hpi
curl -OL http://updates.jenkins-ci.org/latest/github-oauth.hpi
curl -OL http://updates.jenkins-ci.org/latest/growl.hpi
curl -OL http://updates.jenkins-ci.org/latest/jabber.hpi
curl -OL http://updates.jenkins-ci.org/latest/skype-notifier.hpi
curl -OL http://updates.jenkins-ci.org/latest/ec2.hpi

chown -R jenkins.nogroup *


logger -t RightScale "\n\Forcing Jenkins Reload..."
exec $(/etc/init.d/jenkins restart <&- >&- 2>&- )&

# optional service check after a sleep (to allow the detached restart to complete)
sleep 5
/etc/init.d/jenkins status

rm /var/www/index.html
echo "<?php phpinfo();" > /var/www/index.php

mkdir /var/cache/drupal
chown -R jenkins.adm /var/cache/drupal