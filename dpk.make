core = 7.x
api = 2

;core
projects[drupal][type] = "core"
projects[drupal][download][type] = "git"
projects[drupal][download][tag] = "7.0"
projects[drupal][download][url] = "http://git.drupal.org/project/drupal.git"

;Contrib projects 
projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][version] = 1
projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = 1.1
projects[context][subdir] = "contrib"
projects[context][version] = 3
projects[ctools][subdir] = "contrib"
projects[ctools][version] = 1
projects[diff][subdir] = 'contrib'
projects[diff][version] = 2
projects[domain][subdir] = "contrib"
projects[domain][version] = 2
projects[domain_ctools][subdir] = "contrib"
projects[domain_ctools][version] = 1
projects[domain_views][subdir] = "contrib"
projects[domain_views][version] = 1
projects[ds][subdir] = "contrib"
projects[ds][version] = 1
projects[entity][subdir] = "contrib"
projects[entity][version] = 1
projects[features][subdir] = 'contrib'
projects[features][version] = 2
projects[footermap][subdir] = 'contrib'
projects[footermap][version] = 2
projects[gmap][subdir] = "contrib"
projects[gmap][version] = 1
projects[imagemagick][subdir] = 'contrib'
projects[imagemagick][version] = 2
projects[jquery_update][subdir] = 'contrib'
projects[jquery_update][version] = 2
projects[libraries][subdir] = "contrib"
projects[libraries][version] = 1
projects[location][subdir] = "contrib"
projects[location][version] = 3
projects[media][subdir] = "contrib"
projects[media][version] = 1
projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] = 1
projects[metatags_quick][subdir] = "contrib"
projects[metatags_quick][version] = 1.7
projects[node_export][subdir] = 'contrib'
projects[node_export][version] = 3
projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = 1
projects[references][subdir] = "contrib"
projects[references][version] = 2
projects[strongarm][subdir] = 'contrib'
projects[strongarm][version] = 2
projects[styles][subdir] = "contrib"
projects[styles][version] = 2
projects[token][subdir] = "contrib"
projects[token][version] = 1
projects[views][subdir] = "contrib"
projects[views][version] = 3
projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = 3
projects[webform][subdir] = "contrib"
projects[webform][version] = 3










; Libraries
libraries[jquery_cycle][download][type] = "get"
libraries[jquery_cycle][download][url] = "http://www.malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.86"
libraries[jquery_cycle][directory_name] = "jquery.cycle"
libraries[jquery_cycle][destination] = "libraries"

libraries[json2][download][type] = 'git'
libraries[json2][download][url] = "https://github.com/douglascrockford/JSON-js"
libraries[json2][directory_name] = "json2"
libraries[json2][destination] = "libraries"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6/ckeditor_3.6.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

