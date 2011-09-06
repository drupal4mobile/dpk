<?php
// $Id$
/**
 * @file
 * Contains the highcharts style plugin.
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

    $options['format']['contains']['title']['contains']['text']['contains'] = array(
      'value' => array('default' => 'Test Title'),
      'format' => array('default' => 'text'),
    );
    $options['format']['contains']['subtitle']['contains']['text']['contains'] = array(
      'value' => array('default' => 'Test Subtitle'),
      'format' => array('default' => 'text'),
    );
    $options['format']['contains']['chart']['contains']['type']['contains'] = array(
      'value' => array('default' => 'spline'),
      'format' => array('default' => 'text'),
    );
    $options['format']['contains']['yAxis']['contains']['title']['contains']['text']['contains'] = array(
      'value' => array('default' => 'Test Y-axis Title'),
      'format' => array('default' => 'text'),
    );
    $options['format']['contains']['tooltip']['contains']['formatter']['contains'] = array(
      'value' => array('default' => "'<b>'+this.series.name+'</b><br/>'+this.x+': '+this.y"),
      'format' => array('default' => 'function'),
    );

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
    $form['format']['chart']['type']['value'] = array(
      '#title' => t('Chart Type'),
      '#type' => 'select',
      '#options' => array( 'area' => 'Area', 'areaspline' => 'Area Spline', 'bar' => 'Bar', 'column' => 'Column', 'line' => 'Line',  'pie' => 'Pie', 'spline' => 'Spline' ),
      '#multiple' => FALSE,
      '#required' => TRUE,
      '#default_value' => $this->options['format']['chart']['type']['value'],
    );

    $form['format']['title']['text']['value'] = array(
      '#title' => t('Chart Title'),
      '#type' => 'textfield',
      '#default_value' => $this->options['format']['title']['text']['value'],
    );

    $form['format']['subtitle']['text']['value'] = array(
      '#title' => t('Chart SubTitle'),
      '#type' => 'textfield',
      '#default_value' => $this->options['format']['subtitle']['text']['value'],
    );

    $form['format']['yAxis']['title']['text']['value'] = array(
      '#title' => t('Y-Axis Title'),
      '#type' => 'textfield',
      '#default_value' => $this->options['format']['yAxis']['title']['text']['value'],
    );

    $form['format']['yAxis']['title']['align']['value'] = array(
      '#title' => t('Y-Axis Title Align'),
      '#type' => 'select',
      '#options' => array( 'low' => 'Low', 'middle' => 'Middle', 'high'=> 'High' ),
      '#multiple' => FALSE,
      '#required' => TRUE,
      '#default_value' => $this->options['format']['yAxis']['title']['align']['value'],
    );

    $form['format']['tooltip']['formatter']['value'] = array(
      '#title' => t('Tool Tip Formatter'),
      '#type' => 'textarea',
      '#required' => TRUE,
      '#default_value' => $this->options['format']['tooltip']['formatter']['value'],
    );

    $highcharts_handlers = $this->display->handler->get_handlers('field');
    $highcharts_fields = array();
    foreach ($highcharts_handlers as $key => $value) {
      //Check if the field is numeric.
      //D7: Use field api function to get field info.
      $field_info = field_info_field($key);
      $numeric_types = array('number_integer', 'number_float', 'float');
      if (in_array($field_info['type'], $numeric_types) || in_array($field_info['data_type'], $numeric_types)) {
        $field_numeric = TRUE;
      }
      else {
        $field_numeric = FALSE;
      }

      //Build array of label and data handlers.
      $field_label = $value->options['ui_name'] ? $value->options['ui_name'] : $value->options['field'];
      $highcharts_label_fields[$key] = $field_label;
      if ($field_numeric) {
        $highcharts_data_fields[$key] = $field_label;
      }
    }

    $form['dataset']['label'] = array(
      '#title' => t('Data Labels Column'),
      '#type' => 'radios',
      '#options' => $highcharts_label_fields,
      '#required' => TRUE,
      '#default_value' => $this->options['dataset']['label'],
    );

    $form['dataset']['data'] = array(
      '#title' => t('Data Column(s)'),
      '#type' => 'checkboxes',
      '#options' => $highcharts_data_fields,
      '#required' => TRUE,
      '#default_value' => $this->options['dataset']['data'],
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

  function views_highcharts_get_skins() {}
}

