<?php
/**
 * @file
 * firestick_grant_manager.features.inc
 */

/**
 * Implements hook_views_api().
 */
function firestick_grant_manager_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

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
  return $items;
}
