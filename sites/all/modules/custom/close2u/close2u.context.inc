<?php
/**
 * @file
 * close2u.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function close2u_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Locations';
  $context->description = 'Locations';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'locations' => 'locations',
        'locations:page' => 'locations:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'close2u-find_node' => array(
          'module' => 'close2u',
          'delta' => 'find_node',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');
  $export['Locations'] = $context;

  return $export;
}
