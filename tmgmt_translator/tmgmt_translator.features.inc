<?php
/**
 * @file
 * tmgmt_translator.features.inc
 */

/**
 * Implements hook_default_tmgmt_translator().
 */
function tmgmt_translator_default_tmgmt_translator() {
  $items = array();
  $items['export_translator'] = entity_import('tmgmt_translator', '{
    "name" : "export_translator",
    "label" : "Export Translator",
    "description" : "To Export translations in to a XLIFF files",
    "weight" : "0",
    "plugin" : "file",
    "settings" : {
      "auto_accept" : 0,
      "export_format" : "xlf",
      "xliff_cdata" : 0,
      "xliff_processing" : 0,
      "allow_override" : 1,
      "scheme" : "public",
      "remote_languages_mappings" : { "en" : "en", "fr" : "fr", "de" : "de", "es" : "es", "sv" : "sv" }
    },
    "rdf_mapping" : []
  }');
  $items['local'] = entity_import('tmgmt_translator', '{
    "name" : "local",
    "label" : "Local Translator (auto created)",
    "description" : "Allows local users to process translation jobs.",
    "weight" : "0",
    "plugin" : "local",
    "settings" : { "auto_accept" : 0, "allow_all" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
