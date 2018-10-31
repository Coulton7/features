<?php
/**
 * @file
 * search_api_server.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function search_api_server_default_search_api_server() {
  $items = array();
  $items['local_search_nodes'] = entity_import('search_api_server', '{
    "name" : "local-search-nodes",
    "machine_name" : "local_search_nodes",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "node_index" : {
          "title" : {
            "table" : "search_api_db_node_index_text",
            "type" : "text",
            "boost" : "2.0"
          },
          "url" : {
            "table" : "search_api_db_node_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_node_index_text",
            "type" : "text",
            "boost" : "0.5"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
