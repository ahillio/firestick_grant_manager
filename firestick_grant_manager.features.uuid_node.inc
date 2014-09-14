<?php
/**
 * @file
 * firestick_grant_manager.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function firestick_grant_manager_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'grant6',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '76a394b7-65c6-44a3-9f48-317b91e389d8',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386894542,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2fe1d377-4db0-41fd-995e-474992df5f3d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. In posuere fringilla nulla sed tincidunt. Morbi in sollicitudin tortor. Nam eu ipsum enim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Proin faucibus nulla eu pulvinar fringilla. Quisque elementum et magna eget pretium.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. In posuere fringilla nulla sed tincidunt. Morbi in sollicitudin tortor. Nam eu ipsum enim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Proin faucibus nulla eu pulvinar fringilla. Quisque elementum et magna eget pretium.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 3,
      ),
    ),
  ),
  'field_grant_contacts' => array(),
  'field_grant_web_page' => array(),
  'field_grant_how_to_apply' => array(),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 8,
        'revision_id' => 8,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 2,
      ),
      1 => array(
        'tid' => 4,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 15,
      ),
      2 => array(
        'tid' => 14,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-12 19:29:02 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'another grant',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '516bb16a-8786-4017-af3c-4f6a0f54a7fb',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386868366,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '559e4c03-d976-4c1b-b4b8-fb6f73ec71ba',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'here is the description of the grant',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>here is the description of the grant</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
  ),
  'field_grant_contacts' => array(
    'und' => array(
      0 => array(
        'target_id' => 3,
      ),
    ),
  ),
  'field_grant_web_page' => array(
    'und' => array(
      0 => array(
        'url' => 'www.example.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_grant_how_to_apply' => array(
    'und' => array(
      0 => array(
        'value' => 'apply online',
        'format' => NULL,
        'safe_value' => 'apply online',
      ),
    ),
  ),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 2,
        'revision_id' => 2,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 2,
      ),
      2 => array(
        'tid' => 5,
      ),
      3 => array(
        'tid' => 7,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-12 12:12:46 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'grant4',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a064d1e2-dac5-4e2f-b4e9-cc70031d09ce',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386894433,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5b015b4d-63c6-4263-8486-f097a69e83f5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. In posuere fringilla nulla sed tincidunt. Morbi in sollicitudin tortor. Nam eu ipsum enim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Proin faucibus nulla eu pulvinar fringilla. Quisque elementum et magna eget pretium.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. In posuere fringilla nulla sed tincidunt. Morbi in sollicitudin tortor. Nam eu ipsum enim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Proin faucibus nulla eu pulvinar fringilla. Quisque elementum et magna eget pretium.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 2,
      ),
    ),
  ),
  'field_grant_contacts' => array(
    'und' => array(
      0 => array(
        'target_id' => 6,
      ),
    ),
  ),
  'field_grant_web_page' => array(
    'und' => array(
      0 => array(
        'url' => 'example.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_grant_how_to_apply' => array(),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 6,
        'revision_id' => 6,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 4,
      ),
      1 => array(
        'tid' => 8,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 9,
      ),
      1 => array(
        'tid' => 12,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-12 19:27:13 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'grant for good people',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1e506e14-38c7-439e-8b5d-42ac530ebc2c',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386896206,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5d31d2a1-a523-4cfd-af90-8e128da32fe8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'no description available',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>no description available</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 11,
      ),
    ),
  ),
  'field_grant_contacts' => array(),
  'field_grant_web_page' => array(),
  'field_grant_how_to_apply' => array(),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 10,
        'revision_id' => 10,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 2,
      ),
      1 => array(
        'tid' => 5,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 10,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-12 19:56:46 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'a great grant',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '41e3342f-4ed9-4ff7-bb9e-9162ed696c7e',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386880477,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9a01d81c-d5b1-4919-a95c-64443f66aa89',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce vel purus felis. Nullam tincidunt consequat odio non sollicitudin. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce vel purus felis. Nullam tincidunt consequat odio non sollicitudin.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 3,
      ),
    ),
  ),
  'field_grant_contacts' => array(),
  'field_grant_web_page' => array(
    'und' => array(
      0 => array(
        'url' => 'greatgrant.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_grant_how_to_apply' => array(
    'und' => array(
      0 => array(
        'value' => 'online',
        'format' => NULL,
        'safe_value' => 'online',
      ),
    ),
  ),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 5,
        'revision_id' => 5,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 3,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-12 15:34:37 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'grant5',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '06f406cb-71cd-4cae-ae6c-6668a1362664',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386894502,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a337428e-2711-415d-8a99-ad8851bea72a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. In posuere fringilla nulla sed tincidunt. Morbi in sollicitudin tortor. Nam eu ipsum enim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Proin faucibus nulla eu pulvinar fringilla. Quisque elementum et magna eget pretium.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. In posuere fringilla nulla sed tincidunt. Morbi in sollicitudin tortor. Nam eu ipsum enim. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Proin faucibus nulla eu pulvinar fringilla. Quisque elementum et magna eget pretium.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 2,
      ),
    ),
  ),
  'field_grant_contacts' => array(),
  'field_grant_web_page' => array(),
  'field_grant_how_to_apply' => array(),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 7,
        'revision_id' => 7,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 6,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-12 19:28:22 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'grant for bad people',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6db488d4-dc47-4b5a-88ba-b06bba813689',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386896245,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c2918f50-32e3-46c1-b436-bb5041c9ff92',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'no description available',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>no description available</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 11,
      ),
    ),
  ),
  'field_grant_contacts' => array(),
  'field_grant_web_page' => array(),
  'field_grant_how_to_apply' => array(),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 11,
        'revision_id' => 11,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 8,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-12 19:57:25 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Sample Grant',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b3beb0c7-1114-4663-a4c7-9838169555ec',
  'type' => 'grant',
  'language' => 'und',
  'created' => 1386819683,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e3c7ebf5-f8e9-47a1-9a02-80830e290abd',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi accumsan, massa non gravida commodo, dolor nisl tempus lectus, cursus pharetra libero lacus quis augue. Duis volutpat ipsum tortor, placerat porta urna mollis et. Morbi faucibus non elit a adipiscing. Proin felis erat, fermentum vitae nulla id, sollicitudin molestie mauris. Maecenas eget sem vel dolor semper porttitor. Phasellus aliquam pulvinar metus eget gravida. Morbi commodo leo vitae est pellentesque faucibus. Aliquam erat volutpat. Suspendisse potenti. Donec erat mauris, rutrum ut pellentesque et, ullamcorper non dolor.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi accumsan, massa non gravida commodo, dolor nisl tempus lectus, cursus pharetra libero lacus quis augue. Duis volutpat ipsum tortor, placerat porta urna mollis et. Morbi faucibus non elit a adipiscing. Proin felis erat, fermentum vitae nulla id, sollicitudin molestie mauris. Maecenas eget sem vel dolor semper porttitor. Phasellus aliquam pulvinar metus eget gravida. Morbi commodo leo vitae est pellentesque faucibus. Aliquam erat volutpat. Suspendisse potenti. Donec erat mauris, rutrum ut pellentesque et, ullamcorper non dolor.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_grant_program' => array(),
  'field_grant_foundation' => array(
    'und' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
  ),
  'field_grant_contacts' => array(
    'und' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
  ),
  'field_grant_web_page' => array(
    'und' => array(
      0 => array(
        'url' => 'www.example.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_grant_how_to_apply' => array(
    'und' => array(
      0 => array(
        'value' => 'apply online',
        'format' => NULL,
        'safe_value' => 'apply online',
      ),
    ),
  ),
  'field_grant_application_info' => array(
    'und' => array(
      0 => array(
        'value' => 1,
        'revision_id' => 1,
      ),
    ),
  ),
  'field_grant_report_requirements' => array(),
  'field_grant_focus_area' => array(
    'und' => array(
      0 => array(
        'tid' => 4,
      ),
      1 => array(
        'tid' => 5,
      ),
    ),
  ),
  'field_grant_use_of_funds' => array(
    'und' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
  ),
  'field_grant_status' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'firestick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-11 22:41:23 -0500',
);
  return $nodes;
}
