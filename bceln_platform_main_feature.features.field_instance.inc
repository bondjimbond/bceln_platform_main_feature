<?php

/**
 * @file
 * bceln_platform_main_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bceln_platform_main_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-image_block-field_sort_order'.
  $field_instances['node-image_block-field_sort_order'] = array(
    'bundle' => 'image_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sort_order',
    'label' => 'Sort Order',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sort Order');

  return $field_instances;
}
