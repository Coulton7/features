<?php
/**
 * @file
 * feeds_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_importer';
  $feeds_importer->config = array(
    'name' => 'CSV Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'page',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '604800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'location_importer';
  $feeds_importer->config = array(
    'name' => 'Location Importer',
    'description' => 'Takes location nodes from aesseal.com n imports - vital to keep data refreshed. Don\'t edit values here they\'ll be overwritten. ',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'https://www.aesseal.com/sites/aesseal.com/files/views_data_export/all-locations.csv',
        'accept_invalid_cert' => 0,
        'cache_http_result' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '2',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Post date',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Updated date',
            'target' => 'changed',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Location name',
            'target' => 'field_location:name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Street',
            'target' => 'field_location:street',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Additional',
            'target' => 'field_location:additional',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'City',
            'target' => 'field_location:city',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Province',
            'target' => 'field_location:province',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Postal code',
            'target' => 'field_location:postal_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Country',
            'target' => 'field_location:country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Continent',
            'target' => 'field_continent',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Phone',
            'target' => 'field_location:phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Email address',
            'target' => 'field_location:email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Latitude',
            'target' => 'field_location:locpick][user_latitude',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Longitude',
            'target' => 'field_location:locpick][user_longitude',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'location_type',
            'target' => 'field_location_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'Path',
            'target' => 'path_alias',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'Full_URL',
            'target' => 'field_external_path',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'locations',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['location_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rss_importer';
  $feeds_importer->config = array(
    'name' => 'RSS Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
        'cache_http_result' => 1,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'source:url',
            'target' => 'url',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'article',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '259200',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['rss_importer'] = $feeds_importer;

  return $export;
}
