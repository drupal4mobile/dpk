<?php
function template_preprocess_views_highcharts(&$vars) {

  $view   = $vars['view'];
  $series = array();
  $xAxis  = array();
  $fields = $view->get_items("field");
  foreach ($vars['options']['dataset']['data'] as $key) {
		if ($key != false) {
			$vars['fields']["field_" . $key] = $fields[$key];
		}
  }
  unset($key);
  $series = array();
  $data = array();

  foreach ($view->result as $key => $result) {
    $xAxis[] = $result->node_title;
    foreach ($vars['fields'] as $key => $field) {
      $data[$key][] = (int)$result->{$key}[0]['raw']['value'];
    }
  }
  $vars['xAxis'] = json_encode($xAxis);
  unset($key);
  foreach ($vars['fields'] as $key => $field) {
    $item       = new stdClass;
    $item->name = $field['label'];
    $item->data = $data[$key];
    $series[]   = $item;
  }
  $vars["series"] = json_encode($series);
}
