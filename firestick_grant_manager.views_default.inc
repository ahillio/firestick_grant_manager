<?php
/**
 * @file
 * firestick_grant_manager.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function firestick_grant_manager_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'grants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Grants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Grants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Application Info (field_grant_application_info) */
  $handler->display->display_options['relationships']['field_grant_application_info_value']['id'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['table'] = 'field_data_field_grant_application_info';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['field'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'grant' => 'grant',
  );
  /* Filter criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['operator_id'] = 'field_fundraising_deadline_value_op';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['label'] = 'Due date (field_fundraising_deadline)';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['operator'] = 'field_fundraising_deadline_value_op';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['identifier'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Amount Available */
  $handler->display->display_options['fields']['field_funds_available']['id'] = 'field_funds_available';
  $handler->display->display_options['fields']['field_funds_available']['table'] = 'field_data_field_funds_available';
  $handler->display->display_options['fields']['field_funds_available']['field'] = 'field_funds_available';
  $handler->display->display_options['fields']['field_funds_available']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_funds_available']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Due date */
  $handler->display->display_options['fields']['field_fundraising_deadline']['id'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['field'] = 'field_fundraising_deadline';
  $handler->display->display_options['fields']['field_fundraising_deadline']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_fundraising_deadline']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_grant_application_info::field_grant_status' => 'field_grant_application_info::field_grant_status',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Amount Available (field_funds_available) */
  $handler->display->display_options['sorts']['field_funds_available_value']['id'] = 'field_funds_available_value';
  $handler->display->display_options['sorts']['field_funds_available_value']['table'] = 'field_data_field_funds_available';
  $handler->display->display_options['sorts']['field_funds_available_value']['field'] = 'field_funds_available_value';
  $handler->display->display_options['sorts']['field_funds_available_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['sorts']['field_funds_available_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_funds_available_value']['expose']['label'] = 'Amount Available (field_funds_available)';
  /* Sort criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_fundraising_deadline_value']['expose']['label'] = 'Due date (field_fundraising_deadline)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'grant' => 'grant',
  );
  /* Filter criterion: Field collection item: Due date (field_fundraising_deadline) */
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['id'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['table'] = 'field_data_field_fundraising_deadline';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['field'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['operator_id'] = 'field_fundraising_deadline_value_op';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['label'] = 'Due date (field_fundraising_deadline)';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['operator'] = 'field_fundraising_deadline_value_op';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['identifier'] = 'field_fundraising_deadline_value';
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_fundraising_deadline_value']['form_type'] = 'date_popup';
  /* Filter criterion: Field collection item: Status (field_grant_status) */
  $handler->display->display_options['filters']['field_grant_status_value']['id'] = 'field_grant_status_value';
  $handler->display->display_options['filters']['field_grant_status_value']['table'] = 'field_data_field_grant_status';
  $handler->display->display_options['filters']['field_grant_status_value']['field'] = 'field_grant_status_value';
  $handler->display->display_options['filters']['field_grant_status_value']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['filters']['field_grant_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['operator_id'] = 'field_grant_status_value_op';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['label'] = 'Status (field_grant_status)';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['operator'] = 'field_grant_status_value_op';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['identifier'] = 'field_grant_status_value';
  $handler->display->display_options['filters']['field_grant_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'grants';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Grants';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'grants-chart-export';
  $export['grants'] = $view;

  return $export;
}
