<?php


function template_preprocess_views_highcharts(&$vars) {
	
	$view = $vars['view'];
	$series = array();
	$xAxis = array();
	$fields = $view->get_items("field");
	foreach($fields as $key => $field) {
		if ($key == 'title') {
			unset($fields[$key]);
		} else {
			$vars['fields']["field_".$key] = $field;
		}
	}
	
	$series = array();
	$data = array();
	
	foreach($view->result as $key => $result) {
		$xAxis[] = $result->node_title;
		foreach($vars['fields'] as $key => $field){
			$data[$key][] = (int)$result->{$key}[0]['raw']['value'];
		}

	}
	$vars['xAxis'] = json_encode($xAxis);
	
	foreach($vars['fields'] as $key => $field){
		$item = new stdClass;
		$item->name = $field['label'];
		$item->data = $data[$key];
		$series[] = $item;
	}
	$vars["series"] = json_encode($series); 
}