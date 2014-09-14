<?php
/**
 * @file
 * firestick_grant_manager.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function firestick_grant_manager_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Elderly',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1de709ab-efc1-4e1e-8e39-4d9c96034f8a',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Administration',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '312eebc5-0b47-4191-bf04-243c70080a96',
    'vocabulary_machine_name' => 'use_of_funds',
  );
  $terms[] = array(
    'name' => 'Capacity Building',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3a16245e-4d95-49e6-bf05-a31157d3b7e5',
    'vocabulary_machine_name' => 'use_of_funds',
  );
  $terms[] = array(
    'name' => 'General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '43c84bcc-75e2-45bb-8c23-29f162004271',
    'vocabulary_machine_name' => 'use_of_funds',
  );
  $terms[] = array(
    'name' => 'Natural Sciences',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '45caac8d-8f72-4b00-951c-1b25370f2895',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Climate Change',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '676d9617-ada4-4cc5-8bbf-616fd976928c',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Submitted and Waiting',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6bebfe3c-65e9-414b-9327-cfaec93219a0',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Personnel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6dc64ee1-3bba-4956-b162-c0e8f2b6f50f',
    'vocabulary_machine_name' => 'use_of_funds',
  );
  $terms[] = array(
    'name' => 'Children',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8d69b3d4-65c8-48d9-a1b7-12ea2c82bf93',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Exploring',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a3f8211f-d130-4e36-8903-c73d84eaccbd',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Adolescents',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a85c948a-9322-423b-93fe-9dc9e22f26b6',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Declined',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'afbe1777-e676-4942-a33e-cc88a5a4835f',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Mentoring',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c71651c7-f9fc-4dbb-b662-6269023d469b',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Program Expenses',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c9b79be7-5a21-49d0-9952-b170d8825e71',
    'vocabulary_machine_name' => 'use_of_funds',
  );
  $terms[] = array(
    'name' => 'Owe Report',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ceae6d72-167e-43d6-8ecb-ff294a145a23',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Local Economies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd06fdbca-746b-4d4f-8035-328540bd6e9a',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd434f0f0-8a9e-424f-89df-bcc1bc99c7e0',
    'vocabulary_machine_name' => 'funding_areas',
  );
  $terms[] = array(
    'name' => 'Report Completed',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dbe7ea68-5d26-46bf-b89f-eb5677f24bd1',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Not Pursuing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e8b8bdb6-74ad-4d63-a374-b9d1b06d4492',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Pursuing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ebcd6ddc-e990-46a7-a39d-69499f4af462',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Approved',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'efbaa086-4150-4c29-aeba-c36fb8ce7a2f',
    'vocabulary_machine_name' => 'grant_status',
  );
  $terms[] = array(
    'name' => 'Travel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f836fad3-cc8e-4cdc-861b-1da3ac5bb7dc',
    'vocabulary_machine_name' => 'use_of_funds',
  );
  $terms[] = array(
    'name' => 'Capital Campaign',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fd5e56c6-180b-4b80-aa71-997c27f89acc',
    'vocabulary_machine_name' => 'use_of_funds',
  );
  return $terms;
}
