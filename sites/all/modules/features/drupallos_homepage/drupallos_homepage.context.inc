<?php
/**
 * @file
 * drupallos_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupallos_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Home Page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-home-block_1' => array(
          'module' => 'views',
          'delta' => 'home-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-home-block_2' => array(
          'module' => 'views',
          'delta' => 'home-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['Home Page'] = $context;

  return $export;
}
