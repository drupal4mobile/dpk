#!/bin/bash -ex

# for verification on the instance, use:
# tail -f /var/log/messages /var/log/jenkins-install.log

log_file="/var/log/jenkins-install.log"

# log function, accepts stdin
# redirects direct to the log can pipe to this function, but PIPESTATUS needs to be checked for exit code
log () {
	echo "$*"
	printf "%s %s\n" "$(date)" "$*" >> "$log_file"
	logger -t RightScale-debug "$*"
}

touch "$log_file"
:> "$log_file"

# Set up the apt repo
wget -q -O - http://pkg.jenkins-ci.org/debian/jenkins-ci.org.key | apt-key add -
echo "deb http://pkg.jenkins-ci.org/debian binary/" > /etc/apt/sources.list.d/jenkins.list

if dpkg -l jenkins >> "$log_file" 2>&1; then
    if /etc/init.d/jenkins status | grep 'is running'; then
        log 'Stopping the jenkins service.'
        exec $(/etc/init.d/jenkins stop <&- >&- 2>&- )&
    fi
fi

# Install the packages
apt-get -y update
# detach and background sub-process
exec $($(apt-get -y install --reinstall jenkins >> "$log_file" 2>&1) <&- >&- 2>&- )&

# race condition here due to backgrounding
# this will loop forever if the package install failed and the service didn't start
log 'Waiting for jenkins service...'
while [ 1 ]; do 
	if file /etc/init.d/jenkins >> "$log_file" 2>&1 && /etc/init.d/jenkins status | grep 'is running'; then
		break;
	else
		echo '.'
	fi
	sleep 1
done

log 'Setting up /etc/default/jenkins.'
# Config jenkins to listen on the ip
echo 'JAVA_ARGS="-Djava.net.preferIPv4Stack=true"    # make jenkins listen on IPv4 address' >> /etc/default/jenkins     

# restart the daemon
log 'Restarting the jenkins service.'
exec $(/etc/init.d/jenkins restart <&- >&- 2>&- )&

# optional service check after a sleep (to allow the detached restart to complete)
sleep 5
/etc/init.d/jenkins status

log "== Install log ($log_file) =="
cat "$log_file"
log "===="