<?php
// $Id$
/**
 * @file
 * Plugin Theme File
 */
function template_preprocess_views_highcharts(&$vars) {
  module_load_include("module", "libraries", "libraries");
  if ($path = libraries_get_path("highcharts")) {
    drupal_add_js($path . '/js/highcharts.js');
  }
  drupal_add_js(drupal_get_path('module', 'views_highcharts') . '/js/views_highcharts.js');
  module_load_include('inc', 'uuid', 'uuid');
  $chart_id = "views-highcharts-" . uuid_generate();
  $highcharts_config = json_decode(file_get_contents(drupal_get_path("module", "views_highcharts") . "/defaults/bar-basic.json"));
  $highcharts_config->chart->defaultSeriesType = $vars['options']['format']['chart']['type']['value'];
  $highcharts_config->title->text = $vars['options']['format']['title']['text']['value'];
  $highcharts_config->subtitle->text = $vars['options']['format']['subtitle']['text']['value'];
  $highcharts_config->yAxis->title->text = $vars['options']['format']['yAxis']['title']['text']['value'];
  $highcharts_config->yAxis->title->align = $vars['options']['format']['yAxis']['title']['align']['value'];

  $highcharts_config->chart->renderTo = $chart_id;
  $view = $vars['view'];
  $highcharts_config->series = array();
  $highcharts_config->xAxis->categories = array();
  $fields = $view->get_items("field");
  if (is_array($vars['options'])
    && is_array($vars['options']['dataset'])
    && is_array($fields)
  ) {
    foreach ($vars['options']['dataset']['data'] as $key) {
      if ($key != FALSE) {
        $vars['fields']["field_" . $key] = $fields[$key];
      }
    }
  }

  unset($key);
  $data = array();
  $highcharts_config->xAxis->categories = array();
  foreach ($view->result as $key => $result) {
    if (isset($result->node_title)) {
      $highcharts_config->xAxis->categories[] = $result->node_title;
    }
    foreach ($vars['fields'] as $key => $field) {
      $data[$key][] = (int)$result->{$key}[0]['raw']['value'];
    }
  }
  unset($key);
  $highcharts_config->series = array();
  foreach ($vars['fields'] as $key => $field) {
    $item = new stdClass;
    $item->name = $field['label'];
    $item->data = $data[$key];
    $highcharts_config->series[] = $item;
  }
  //print_r($vars['options']);
  //exit();
  $highcharts_config->tooltip->formatter = 'eval(function() {
	return ' . $vars['options']['format']['tooltip']['formatter']['value'] . '; 
	})';
  //print_r($vars['options']);
  drupal_add_js(array("views_highcharts" => array($chart_id => $highcharts_config)), "setting");
  $vars['chart_id'] = $chart_id;
}

