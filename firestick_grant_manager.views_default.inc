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
  $handler->display->display_options['title'] = 'All Grants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Application Info (field_grant_application_info) */
  $handler->display->display_options['relationships']['field_grant_application_info_value']['id'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['table'] = 'field_data_field_grant_application_info';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['field'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['delta'] = '-1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
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
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'status' => 'status',
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
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Grant';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Amount available */
  $handler->display->display_options['fields']['field_grant_funds_available']['id'] = 'field_grant_funds_available';
  $handler->display->display_options['fields']['field_grant_funds_available']['table'] = 'field_data_field_grant_funds_available';
  $handler->display->display_options['fields']['field_grant_funds_available']['field'] = 'field_grant_funds_available';
  $handler->display->display_options['fields']['field_grant_funds_available']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_grant_funds_available']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Foundation */
  $handler->display->display_options['fields']['field_grant_foundation']['id'] = 'field_grant_foundation';
  $handler->display->display_options['fields']['field_grant_foundation']['table'] = 'field_data_field_grant_foundation';
  $handler->display->display_options['fields']['field_grant_foundation']['field'] = 'field_grant_foundation';
  $handler->display->display_options['fields']['field_grant_foundation']['settings'] = array(
    'link' => 1,
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
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_grant_status']['id'] = 'field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['table'] = 'field_data_field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['field'] = 'field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_grant_status']['click_sort_column'] = 'value';
  $handler->display->display_options['fields']['field_grant_status']['type'] = 'list_default';
  $handler->display->display_options['fields']['field_grant_status']['group_column'] = 'value';
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Master List */
  $handler = $view->new_display('page', 'Master List', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_grant_funds_available' => 'field_grant_funds_available',
    'field_grant_foundation' => 'field_grant_foundation',
    'field_grant_focus_area' => 'field_grant_focus_area',
    'field_fundraising_deadline' => 'field_fundraising_deadline',
    'field_grant_status' => 'field_grant_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grant_funds_available' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grant_foundation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grant_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fundraising_deadline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grant_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
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
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change status of selected grants',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'grant::field_grant_status' => 'grant::field_grant_status',
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
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Grant';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Amount available */
  $handler->display->display_options['fields']['field_grant_funds_available']['id'] = 'field_grant_funds_available';
  $handler->display->display_options['fields']['field_grant_funds_available']['table'] = 'field_data_field_grant_funds_available';
  $handler->display->display_options['fields']['field_grant_funds_available']['field'] = 'field_grant_funds_available';
  $handler->display->display_options['fields']['field_grant_funds_available']['relationship'] = 'field_grant_application_info_value';
  $handler->display->display_options['fields']['field_grant_funds_available']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Foundation */
  $handler->display->display_options['fields']['field_grant_foundation']['id'] = 'field_grant_foundation';
  $handler->display->display_options['fields']['field_grant_foundation']['table'] = 'field_data_field_grant_foundation';
  $handler->display->display_options['fields']['field_grant_foundation']['field'] = 'field_grant_foundation';
  $handler->display->display_options['fields']['field_grant_foundation']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Use of Funds */
  $handler->display->display_options['fields']['field_grant_use_of_funds']['id'] = 'field_grant_use_of_funds';
  $handler->display->display_options['fields']['field_grant_use_of_funds']['table'] = 'field_data_field_grant_use_of_funds';
  $handler->display->display_options['fields']['field_grant_use_of_funds']['field'] = 'field_grant_use_of_funds';
  $handler->display->display_options['fields']['field_grant_use_of_funds']['delta_offset'] = '0';
  /* Field: Content: Focus Area */
  $handler->display->display_options['fields']['field_grant_focus_area']['id'] = 'field_grant_focus_area';
  $handler->display->display_options['fields']['field_grant_focus_area']['table'] = 'field_data_field_grant_focus_area';
  $handler->display->display_options['fields']['field_grant_focus_area']['field'] = 'field_grant_focus_area';
  $handler->display->display_options['fields']['field_grant_focus_area']['delta_offset'] = '0';
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
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_grant_status']['id'] = 'field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['table'] = 'field_data_field_grant_status';
  $handler->display->display_options['fields']['field_grant_status']['field'] = 'field_grant_status';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Focus Area (field_grant_focus_area) */
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['id'] = 'field_grant_focus_area_tid';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['table'] = 'field_data_field_grant_focus_area';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['field'] = 'field_grant_focus_area_tid';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['expose']['operator_id'] = 'field_grant_focus_area_tid_op';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['expose']['label'] = 'Focus Area';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['expose']['operator'] = 'field_grant_focus_area_tid_op';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['expose']['identifier'] = 'field_grant_focus_area_tid';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_grant_focus_area_tid']['vocabulary'] = 'funding_areas';
  /* Filter criterion: Content: Use of Funds (field_grant_use_of_funds) */
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['id'] = 'field_grant_use_of_funds_tid';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['table'] = 'field_data_field_grant_use_of_funds';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['field'] = 'field_grant_use_of_funds_tid';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['expose']['operator_id'] = 'field_grant_use_of_funds_tid_op';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['expose']['label'] = 'Use of Funds';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['expose']['operator'] = 'field_grant_use_of_funds_tid_op';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['expose']['identifier'] = 'field_grant_use_of_funds_tid';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_grant_use_of_funds_tid']['vocabulary'] = 'use_of_funds';
  $handler->display->display_options['path'] = 'redhen/grants';

  /* Display: same foundation - block */
  $handler = $view->new_display('block', 'same foundation - block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other grants from this foundation';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_grant_foundation_target_id']['id'] = 'field_grant_foundation_target_id';
  $handler->display->display_options['relationships']['field_grant_foundation_target_id']['table'] = 'field_data_field_grant_foundation';
  $handler->display->display_options['relationships']['field_grant_foundation_target_id']['field'] = 'field_grant_foundation_target_id';
  $handler->display->display_options['relationships']['field_grant_foundation_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['id'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['table'] = 'redhen_org';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['field'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['relationship'] = 'field_grant_foundation_target_id';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Use of Funds */
  $handler->display->display_options['fields']['field_grant_use_of_funds']['id'] = 'field_grant_use_of_funds';
  $handler->display->display_options['fields']['field_grant_use_of_funds']['table'] = 'field_data_field_grant_use_of_funds';
  $handler->display->display_options['fields']['field_grant_use_of_funds']['field'] = 'field_grant_use_of_funds';
  $handler->display->display_options['fields']['field_grant_use_of_funds']['delta_offset'] = '0';
  /* Field: Content: Focus Area */
  $handler->display->display_options['fields']['field_grant_focus_area']['id'] = 'field_grant_focus_area';
  $handler->display->display_options['fields']['field_grant_focus_area']['table'] = 'field_data_field_grant_focus_area';
  $handler->display->display_options['fields']['field_grant_focus_area']['field'] = 'field_grant_focus_area';
  $handler->display->display_options['fields']['field_grant_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['not'] = TRUE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: all grants block */
  $handler = $view->new_display('block', 'all grants block', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['comments'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Application Info (field_grant_application_info) */
  $handler->display->display_options['relationships']['field_grant_application_info_value']['id'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['table'] = 'field_data_field_grant_application_info';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['field'] = 'field_grant_application_info_value';
  $handler->display->display_options['relationships']['field_grant_application_info_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_grant_foundation_target_id']['id'] = 'field_grant_foundation_target_id';
  $handler->display->display_options['relationships']['field_grant_foundation_target_id']['table'] = 'field_data_field_grant_foundation';
  $handler->display->display_options['relationships']['field_grant_foundation_target_id']['field'] = 'field_grant_foundation_target_id';
  $handler->display->display_options['path'] = 'redhen/grant/%/%';
  $export['grants'] = $view;

  $view = new view();
  $view->name = 'organization_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_org';
  $view->human_name = 'Organization';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="node/add/grant">Add a new grant</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['id'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['table'] = 'redhen_org';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['field'] = 'reverse_field_grant_foundation_node';
  /* Field: Organization: Organization ID */
  $handler->display->display_options['fields']['org_id']['id'] = 'org_id';
  $handler->display->display_options['fields']['org_id']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['org_id']['field'] = 'org_id';
  /* Field: Organization: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Organization: Overview */
  $handler->display->display_options['fields']['field_organization_overview']['id'] = 'field_organization_overview';
  $handler->display->display_options['fields']['field_organization_overview']['table'] = 'field_data_field_organization_overview';
  $handler->display->display_options['fields']['field_organization_overview']['field'] = 'field_organization_overview';
  $handler->display->display_options['fields']['field_organization_overview']['label'] = '';
  $handler->display->display_options['fields']['field_organization_overview']['element_label_colon'] = FALSE;
  /* Field: Organization: Phone */
  $handler->display->display_options['fields']['field_organization_phone']['id'] = 'field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['table'] = 'field_data_field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['field'] = 'field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['label'] = '';
  $handler->display->display_options['fields']['field_organization_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_phone']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_organization_phone']['delta_offset'] = '0';
  /* Field: Organization: Phone (field_organization_phone:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_organization_phone';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'redhen_org';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Organization: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_type'] = 'h1';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Organization: Overview */
  $handler->display->display_options['fields']['field_organization_overview']['id'] = 'field_organization_overview';
  $handler->display->display_options['fields']['field_organization_overview']['table'] = 'field_data_field_organization_overview';
  $handler->display->display_options['fields']['field_organization_overview']['field'] = 'field_organization_overview';
  $handler->display->display_options['fields']['field_organization_overview']['label'] = '';
  $handler->display->display_options['fields']['field_organization_overview']['element_label_colon'] = FALSE;
  /* Field: Organization: Phone */
  $handler->display->display_options['fields']['field_organization_phone']['id'] = 'field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['table'] = 'field_data_field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['field'] = 'field_organization_phone';
  $handler->display->display_options['fields']['field_organization_phone']['label'] = '';
  $handler->display->display_options['fields']['field_organization_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_phone']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_organization_phone']['delta_offset'] = '0';
  /* Field: Organization: Contact Person */
  $handler->display->display_options['fields']['field_organization_person']['id'] = 'field_organization_person';
  $handler->display->display_options['fields']['field_organization_person']['table'] = 'field_data_field_organization_person';
  $handler->display->display_options['fields']['field_organization_person']['field'] = 'field_organization_person';
  $handler->display->display_options['fields']['field_organization_person']['alter']['path'] = 'redhen/contact/[field_organization_person]';
  $handler->display->display_options['fields']['field_organization_person']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_organization_person']['delta_offset'] = '0';
  /* Field: Organization: Financials */
  $handler->display->display_options['fields']['field_foundation_financials']['id'] = 'field_foundation_financials';
  $handler->display->display_options['fields']['field_foundation_financials']['table'] = 'field_data_field_foundation_financials';
  $handler->display->display_options['fields']['field_foundation_financials']['field'] = 'field_foundation_financials';
  $handler->display->display_options['fields']['field_foundation_financials']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_foundation_financials']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'redhen_org';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'redhen/org/%';

  /* Display: Grants Block - for foundation page */
  $handler = $view->new_display('block', 'Grants Block - for foundation page', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grants';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<hr />
<a href="/node/add/grant">Add a new grant</a><br />
<a href="/redhen/grants">See all grants</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'redhen_org';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';

  /* Display: Grants Block - for grant page */
  $handler = $view->new_display('block', 'Grants Block - for grant page', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'This foundation\'s grants - foundation view';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<hr />
<a href="/node/add/grant">Add a new grant</a><br />
<a href="/redhen/grants">See all grants</a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['id'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['table'] = 'redhen_org';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['field'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['relationships']['reverse_field_grant_foundation_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_grant_foundation_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Organization: Organization ID */
  $handler->display->display_options['arguments']['org_id']['id'] = 'org_id';
  $handler->display->display_options['arguments']['org_id']['table'] = 'redhen_org';
  $handler->display->display_options['arguments']['org_id']['field'] = 'org_id';
  $handler->display->display_options['arguments']['org_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['org_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['org_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['org_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['org_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['org_id']['validate']['type'] = 'php';
  $export['organization_page'] = $view;

  return $export;
}
