<?php
/**
 * @file
 * firestick_grant_manager.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function firestick_grant_manager_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'foundation_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'redhen/org/*' => 'redhen/org/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-organization_page-block_1' => array(
          'module' => 'views',
          'delta' => 'organization_page-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['foundation_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'grant_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'grant' => 'grant',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-organization_page-block_2' => array(
          'module' => 'views',
          'delta' => 'organization_page-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-grants-block_1' => array(
          'module' => 'views',
          'delta' => 'grants-block_1',
          'region' => 'sidebar_second',
          'weight' => '-11',
        ),
        'views-grants-block_2' => array(
          'module' => 'views',
          'delta' => 'grants-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['grant_page'] = $context;

  return $export;
}
