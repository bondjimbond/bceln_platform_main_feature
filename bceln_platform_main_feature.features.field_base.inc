<?php

/**
 * @file
 * bceln_platform_main_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bceln_platform_main_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sort_order'.
  $field_bases['field_sort_order'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sort_order',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
