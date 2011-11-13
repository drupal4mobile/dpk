<?php
/**
 * @file
 * drupallos_sales_chart.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupallos_sales_chart_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pizza_sales';
  $strongarm->value = 0;
  $export['comment_anonymous_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pizza_sales';
  $strongarm->value = 1;
  $export['comment_default_mode_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pizza_sales';
  $strongarm->value = '50';
  $export['comment_default_per_page_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pizza_sales';
  $strongarm->value = 1;
  $export['comment_form_location_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pizza_sales';
  $strongarm->value = '1';
  $export['comment_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pizza_sales';
  $strongarm->value = '1';
  $export['comment_preview_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pizza_sales';
  $strongarm->value = 1;
  $export['comment_subject_field_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pizza_sales';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pizza_sales';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pizza_sales';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pizza_sales';
  $strongarm->value = '1';
  $export['node_preview_pizza_sales'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pizza_sales';
  $strongarm->value = 1;
  $export['node_submitted_pizza_sales'] = $strongarm;

  return $export;
}
