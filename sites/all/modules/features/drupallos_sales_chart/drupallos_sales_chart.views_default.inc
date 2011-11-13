<?php
/**
 * @file
 * drupallos_sales_chart.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupallos_sales_chart_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'sales';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pizza Sales';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pizza Sales';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '999';
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['chart']['type']['value'] = 'column';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Cheese */
  $handler->display->display_options['fields']['field_cheese']['id'] = 'field_cheese';
  $handler->display->display_options['fields']['field_cheese']['table'] = 'field_data_field_cheese';
  $handler->display->display_options['fields']['field_cheese']['field'] = 'field_cheese';
  $handler->display->display_options['fields']['field_cheese']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cheese']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cheese']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cheese']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cheese']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cheese']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cheese']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cheese']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cheese']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_cheese']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_cheese']['field_api_classes'] = 0;
  /* Field: Content: Pepperoni */
  $handler->display->display_options['fields']['field_pepperoni']['id'] = 'field_pepperoni';
  $handler->display->display_options['fields']['field_pepperoni']['table'] = 'field_data_field_pepperoni';
  $handler->display->display_options['fields']['field_pepperoni']['field'] = 'field_pepperoni';
  $handler->display->display_options['fields']['field_pepperoni']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pepperoni']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pepperoni']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pepperoni']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pepperoni']['field_api_classes'] = 0;
  /* Field: Content: Sausage */
  $handler->display->display_options['fields']['field_sausage']['id'] = 'field_sausage';
  $handler->display->display_options['fields']['field_sausage']['table'] = 'field_data_field_sausage';
  $handler->display->display_options['fields']['field_sausage']['field'] = 'field_sausage';
  $handler->display->display_options['fields']['field_sausage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sausage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sausage']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sausage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sausage']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sausage']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sausage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sausage']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sausage']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sausage']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_sausage']['field_api_classes'] = 0;
  /* Field: Content: Supreme */
  $handler->display->display_options['fields']['field_supreme']['id'] = 'field_supreme';
  $handler->display->display_options['fields']['field_supreme']['table'] = 'field_data_field_supreme';
  $handler->display->display_options['fields']['field_supreme']['field'] = 'field_supreme';
  $handler->display->display_options['fields']['field_supreme']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_supreme']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_supreme']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_supreme']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_supreme']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_supreme']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_supreme']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_supreme']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_supreme']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_supreme']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_supreme']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pizza_sales' => 'pizza_sales',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sales';
  $export['sales'] = $view;

  return $export;
}
