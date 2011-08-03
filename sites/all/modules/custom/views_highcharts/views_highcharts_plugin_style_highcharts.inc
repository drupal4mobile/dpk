<?php

/**
 * @file
 * Contains the list style plugin.
 */

/**
 * Style plugin to render each item in a slideshow of an ordered or unordered list.
 *
 * @ingroup views_style_plugins
 */
class views_highcharts_plugin_style_highcharts extends views_plugin_style_list {

  // Set default options
	function option_definition() {
    $options = parent::option_definition();
    
    // Load all include files from views slideshow addons.
    module_load_all_includes('views_highcharts.inc');
    $options['skin'] = array('default' => 'gray');
    
    // call every module using hook_views_slideshow_option_definition and merge
    // it's return value with the other default options.
    return array_merge($options, module_invoke_all('views_highcharts_option_definition'));
	}

	function options_form(&$form, &$form_state) {
		module_load_all_includes('views_highcharts.inc');
	    $form['skin'] = array(
	    	'#type' => 'select', 
			'#title' => t('Skin'), 
			'#default_value' => variable_get('gray'),
			'#options' => array(
				'gray' => t('Gray'), 
			    'grid' => t('Grid'), 
			),
	    );
	
	}

	function options_validate(&$form, &$form_state) {
		module_load_all_includes('views_highcharts.inc');
	    
	}
	
	function options_submit(&$form, &$form_state) {
		module_load_all_includes('views_highcharts.inc');
		$arguments = array(
	      $form,
	      &$form_state,
	    );

	    // Call all modules that use hook_views_slideshow_options_form_submit
	    foreach (module_implements('views_highcharts_options_form_submit') as $module) {
	      $function = $module . '_views_highcharts_options_form_submit';
	      call_user_func_array($function, $arguments);
	    }
	
	
  	}

	function views_highcharts_get_skins() {
		
  	}
	
}
