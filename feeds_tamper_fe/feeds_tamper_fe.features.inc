<?php
/**
 * @file
 * feeds_tamper_fe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feeds_tamper_fe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}
