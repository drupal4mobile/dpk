core = 7.x
api = 2

;core
projects[drupal][type] = "core"
projects[drupal][download][type] = "git"
projects[drupal][download][tag] = "7.7"
projects[drupal][download][url] = "http://git.drupal.org/project/drupal.git"

;Contrib projects 
projects[backup_migrate][subdir] = "contrib"
projects[ckeditor][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[diff][subdir] = 'contrib'
projects[domain][subdir] = "contrib"
projects[domain_ctools][subdir] = "contrib"
projects[domain_ctools][version] = "1.1"
projects[domain_views][subdir] = "contrib"
projects[ds][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[features][subdir] = 'contrib'
projects[footermap][subdir] = 'contrib'
projects[gmap][subdir] = "contrib"
projects[gmap][version] = "1.x-dev"
projects[imagemagick][subdir] = 'contrib'
projects[jquery_update][subdir] = 'contrib'
projects[libraries][subdir] = "contrib"
projects[location][subdir] = "contrib"
projects[media][subdir] = "contrib"
projects[media][version] = "2.x-dev"
projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] ="1.x-dev"
projects[mediaelement][subdir] = "contrib"
projects[metatags_quick][subdir] = "contrib"
projects[node_export][subdir] = 'contrib'
projects[node_export][version] = "3.x-dev"
projects[pathauto][subdir] = "contrib"
projects[references][subdir] = "contrib"
projects[strongarm][subdir] = 'contrib'
projects[styles][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.0-alpha1"
projects[webform][subdir] = "contrib"
projects[uuid][subdir] = "contrib"


; Libraries
libraries[jquery_cycle][download][type] = "get"
libraries[jquery_cycle][download][url] = "http://www.malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.86"
libraries[jquery_cycle][directory_name] = "jquery.cycle"
libraries[jquery_cycle][destination] = "libraries"

libraries[json2][download][type] = "git"
libraries[json2][download][url] = "git://github.com/douglascrockford/JSON-js.git"
libraries[json2][directory_name] = "json2"
libraries[json2][destination] = "libraries"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6/ckeditor_3.6.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[mediaelement][download][type] = "git"
libraries[mediaelement][download][url] = 'git://github.com/johndyer/mediaelement.git'
libraries[mediaelement][directory_name] = 'mediaelement'
libraries[mediaelement][destination] = 'libraries'

libraries[highcharts][download][type] = 'get'
libraries[highcharts][download][url] = 'http://www.highcharts.com/downloads/zips/Highcharts-2.1.6.zip'
libraries[highcharts][directory_name] = 'highcharts'
libraries[highcharts][destination] = 'libraries'

