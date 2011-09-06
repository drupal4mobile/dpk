<?php
/**
 * @file
 * drupallos_franchise.ds.inc
 */

/**
 * Implementation of hook_ds_field_settings_info().
 */
function drupallos_franchise_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|franchise|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'franchise';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'location_address_' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|franchise|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implementation of hook_ds_custom_fields_info().
 */
function drupallos_franchise_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'location_address_';
  $ds_field->label = 'Location (Address)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $settings = variable_get(\'location_settings_node_\' . $entity->type, array());
  if (isset($entity->locations)) {
    print drupal_render(location_display($settings, $entity->locations));
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['location_address_'] = $ds_field;

  return $export;
}

/**
 * Implementation of hook_ds_layout_settings_info().
 */
function drupallos_franchise_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|franchise|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'franchise';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_html5';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_hours',
      ),
      'middle' => array(
        0 => 'location_address_',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_hours' => 'left',
      'location_address_' => 'middle',
    ),
    'classes' => array(),
  );
  $export['node|franchise|default'] = $ds_layout;

  return $export;
}
