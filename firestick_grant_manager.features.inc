<?php
/**
 * @file
 * firestick_grant_manager.features.inc
 */

/**
 * Implements hook_node_info().
 */
function firestick_grant_manager_node_info() {
  $items = array(
    'grant' => array(
      'name' => t('Grant'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function firestick_grant_manager_default_redhen_contact_type() {
  $items = array();
  $items['person'] = entity_import('redhen_contact_type', '{
    "name" : "person",
    "label" : "Person",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_org_type().
 */
function firestick_grant_manager_default_redhen_org_type() {
  $items = array();
  $items['foundation'] = entity_import('redhen_org_type', '{
    "name" : "foundation",
    "label" : "Foundation",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
