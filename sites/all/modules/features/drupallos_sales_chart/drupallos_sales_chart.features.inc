<?php
/**
 * @file
 * drupallos_sales_chart.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupallos_sales_chart_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupallos_sales_chart_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function drupallos_sales_chart_node_info() {
  $items = array(
    'pizza_sales' => array(
      'name' => t('Pizza Sales'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
