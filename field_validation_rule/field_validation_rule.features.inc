<?php
/**
 * @file
 * field_validation_rule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function field_validation_rule_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}
