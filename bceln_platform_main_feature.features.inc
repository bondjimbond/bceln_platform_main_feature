<?php

/**
 * @file
 * bceln_platform_main_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bceln_platform_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bceln_platform_main_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
