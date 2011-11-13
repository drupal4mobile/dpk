<?php
/**
 * @file
 * close2u.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function close2u_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'marker';
  $ds_view_mode->label = 'Marker';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['marker'] = $ds_view_mode;

  return $export;
}
