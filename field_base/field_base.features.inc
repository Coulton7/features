<?php
/**
 * @file
 * field_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function field_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}
