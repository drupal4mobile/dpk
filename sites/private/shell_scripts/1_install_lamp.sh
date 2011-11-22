#!/bin/bash -ex

logger -t RightScale "\n\nStarting Script..."
/usr/bin/apt-get update

logger -t RightScale "\n\nApt-Get Update..."
/usr/bin/apt-get -y -q upgrade

logger -t RightScale "\n\nAutoremove/Autoclean..."
/usr/bin/apt-get autoremove
/usr/bin/apt-get autoclean

logger -t RightScale "\n\nInstalling Apache..."
/usr/bin/apt-get -y -q install imagemagick  apache2 apache2-mpm-prefork 

logger -t RightScale "\n\nInstalling MySQL..."
/usr/bin/apt-get -y -q install  mysql-client-5.1 mysql-server-5.1  

logger -t RightScale "\n\nInstalling PHP..."
/usr/bin/apt-get -y -q install php5 php5-cli php5-mysql libapache2-mod-php5 php5-mcrypt php5-curl php5-gd php-pear
/usr/sbin/service apache2 restart
/usr/bin/pear upgrade

logger -t RightScale "\n\nInstalling Drush..."
/usr/bin/pear channel-discover pear.drush.org
/usr/bin/pear install drush/drush
/usr/bin/pear install console_table

logger -t RightScale "\n\nDrush installed..."