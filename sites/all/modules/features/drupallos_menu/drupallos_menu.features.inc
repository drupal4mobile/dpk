<?php
/**
 * @file
 * drupallos_menu.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function drupallos_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function drupallos_menu_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function drupallos_menu_node_info() {
  $items = array(
    'menu_item' => array(
      'name' => t('Menu Item'),
      'base' => 'node_content',
      'description' => t('Standard Menu Item, Single price'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'menu_item_group' => array(
      'name' => t('Menu Item Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pizza' => array(
      'name' => t('Pizza'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sandwich' => array(
      'name' => t('Sandwich'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'soup' => array(
      'name' => t('Soup'),
      'base' => 'node_content',
      'description' => t('Priced by Cup or Bowl'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
