<?php
/**
 * @file
 * bceln_platform_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bceln_platform_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bceln_platform_content_types_node_info() {
  $items = array(
    'image_block' => array(
      'name' => t('Image Block'),
      'base' => 'node_content',
      'description' => t('Images to be contained within blocks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Contains information about Arca member institutions.'),
      'has_title' => '1',
      'title_label' => t('Institution Name'),
      'help' => '',
    ),
    'islandora_autocomplete_fields' => array(
      'name' => t('Islandora Autocomplete Fields'),
      'base' => 'node_content',
      'description' => t('Sets up taxonomies for autocomplete textfields in Islandora ingest forms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
