<?php
/**
 * @file
 * drupallos_homepage.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function drupallos_homepage_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}
