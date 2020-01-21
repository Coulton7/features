<?php
/**
 * @file
 * quicktabs_fe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quicktabs_fe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
