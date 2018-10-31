<?php
/**
 * @file
 * search_api_page_fe.features.inc
 */

/**
 * Implements hook_default_search_api_page().
 */
function search_api_page_fe_default_search_api_page() {
  $items = array();
  $items['search_page'] = entity_import('search_api_page', '{
    "index_id" : "node_index",
    "path" : "search",
    "name" : "Search Page",
    "machine_name" : "search_page",
    "description" : "Search our pages for national based news, case studies and exclusive products",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_api_page_result",
      "language_filter" : { "current" : "current" },
      "empty_behavior" : ""
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
