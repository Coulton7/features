<?php
/**
 * @file
 * field_groups_fe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function field_groups_fe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
