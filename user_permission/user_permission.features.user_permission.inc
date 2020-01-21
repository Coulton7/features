<?php
/**
 * @file
 * user_permission.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_permission_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'accept translation jobs'.
  $permissions['accept translation jobs'] = array(
    'name' => 'accept translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access library reports'.
  $permissions['access library reports'] = array(
    'name' => 'access library reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'libraries',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access search_api_page'.
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access search_page search_api_page'.
  $permissions['access search_page search_api_page'] = array(
    'name' => 'access search_page search_api_page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workflow summary views'.
  $permissions['access workflow summary views'] = array(
    'name' => 'access workflow summary views',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'workflow_views',
  );

  // Exported permission: 'admin httpbl'.
  $permissions['admin httpbl'] = array(
    'name' => 'admin httpbl',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'httpbl',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'administrator' => 'administrator',
      'translator user' => 'translator user',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer google tag manager'.
  $permissions['administer google tag manager'] = array(
    'name' => 'administer google tag manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_tag',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer own redirects'.
  $permissions['administer own redirects'] = array(
    'name' => 'administer own redirects',
    'roles' => array(),
    'module' => 'redirect',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rh_file'.
  $permissions['administer rh_file'] = array(
    'name' => 'administer rh_file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rh_node'.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rh_taxonomy'.
  $permissions['administer rh_taxonomy'] = array(
    'name' => 'administer rh_taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer robots.txt'.
  $permissions['administer robots.txt'] = array(
    'name' => 'administer robots.txt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'robotstxt',
  );

  // Exported permission: 'administer rrssb'.
  $permissions['administer rrssb'] = array(
    'name' => 'administer rrssb',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rrssb',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer social content'.
  $permissions['administer social content'] = array(
    'name' => 'administer social content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'social_content',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer taxonomy views integrator'.
  $permissions['administer taxonomy views integrator'] = array(
    'name' => 'administer taxonomy views integrator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tmgmt'.
  $permissions['administer tmgmt'] = array(
    'name' => 'administer tmgmt',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'administer translation tasks'.
  $permissions['administer translation tasks'] = array(
    'name' => 'administer translation tasks',
    'roles' => array(
      'administrator' => 'administrator',
      'translator user' => 'translator user',
    ),
    'module' => 'tmgmt_local',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user locations'.
  $permissions['administer user locations'] = array(
    'name' => 'administer user locations',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workflow'.
  $permissions['administer workflow'] = array(
    'name' => 'administer workflow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workflow_admin_ui',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'allow CKFinder file uploads'.
  $permissions['allow CKFinder file uploads'] = array(
    'name' => 'allow CKFinder file uploads',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'boost flush pages'.
  $permissions['boost flush pages'] = array(
    'name' => 'boost flush pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'boost',
  );

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advagg',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rh_file'.
  $permissions['bypass rh_file'] = array(
    'name' => 'bypass rh_file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rh_node'.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rh_taxonomy'.
  $permissions['bypass rh_taxonomy'] = array(
    'name' => 'bypass rh_taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear csv_importer feeds'.
  $permissions['clear csv_importer feeds'] = array(
    'name' => 'clear csv_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear location_importer feeds'.
  $permissions['clear location_importer feeds'] = array(
    'name' => 'clear location_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear rss_importer feeds'.
  $permissions['clear rss_importer feeds'] = array(
    'name' => 'clear rss_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create case_studies content'.
  $permissions['create case_studies content'] = array(
    'name' => 'create case_studies content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create instagram content'.
  $permissions['create instagram content'] = array(
    'name' => 'create instagram content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create job_vacancies content'.
  $permissions['create job_vacancies content'] = array(
    'name' => 'create job_vacancies content',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create linkedin content'.
  $permissions['create linkedin content'] = array(
    'name' => 'create linkedin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create locations content'.
  $permissions['create locations content'] = array(
    'name' => 'create locations content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create media content'.
  $permissions['create media content'] = array(
    'name' => 'create media content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create product_range content'.
  $permissions['create product_range content'] = array(
    'name' => 'create product_range content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create success_stories content'.
  $permissions['create success_stories content'] = array(
    'name' => 'create success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create training_events content'.
  $permissions['create training_events content'] = array(
    'name' => 'create training_events content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create translation jobs'.
  $permissions['create translation jobs'] = array(
    'name' => 'create translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'create tweet content'.
  $permissions['create tweet content'] = array(
    'name' => 'create tweet content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'define view for terms in continent'.
  $permissions['define view for terms in continent'] = array(
    'name' => 'define view for terms in continent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in industry'.
  $permissions['define view for terms in industry'] = array(
    'name' => 'define view for terms in industry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in product'.
  $permissions['define view for terms in product'] = array(
    'name' => 'define view for terms in product',
    'roles' => array(),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in product_range'.
  $permissions['define view for terms in product_range'] = array(
    'name' => 'define view for terms in product_range',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in tags'.
  $permissions['define view for terms in tags'] = array(
    'name' => 'define view for terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in training_courses'.
  $permissions['define view for terms in training_courses'] = array(
    'name' => 'define view for terms in training_courses',
    'roles' => array(),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary continent'.
  $permissions['define view for vocabulary continent'] = array(
    'name' => 'define view for vocabulary continent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary industry'.
  $permissions['define view for vocabulary industry'] = array(
    'name' => 'define view for vocabulary industry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary product'.
  $permissions['define view for vocabulary product'] = array(
    'name' => 'define view for vocabulary product',
    'roles' => array(),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary product_range'.
  $permissions['define view for vocabulary product_range'] = array(
    'name' => 'define view for vocabulary product_range',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary tags'.
  $permissions['define view for vocabulary tags'] = array(
    'name' => 'define view for vocabulary tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary training_courses'.
  $permissions['define view for vocabulary training_courses'] = array(
    'name' => 'define view for vocabulary training_courses',
    'roles' => array(),
    'module' => 'tvi',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any case_studies content'.
  $permissions['delete any case_studies content'] = array(
    'name' => 'delete any case_studies content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any instagram content'.
  $permissions['delete any instagram content'] = array(
    'name' => 'delete any instagram content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_vacancies content'.
  $permissions['delete any job_vacancies content'] = array(
    'name' => 'delete any job_vacancies content',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any linkedin content'.
  $permissions['delete any linkedin content'] = array(
    'name' => 'delete any linkedin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any locations content'.
  $permissions['delete any locations content'] = array(
    'name' => 'delete any locations content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any media content'.
  $permissions['delete any media content'] = array(
    'name' => 'delete any media content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_range content'.
  $permissions['delete any product_range content'] = array(
    'name' => 'delete any product_range content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any success_stories content'.
  $permissions['delete any success_stories content'] = array(
    'name' => 'delete any success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training_events content'.
  $permissions['delete any training_events content'] = array(
    'name' => 'delete any training_events content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any tweet content'.
  $permissions['delete any tweet content'] = array(
    'name' => 'delete any tweet content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own case_studies content'.
  $permissions['delete own case_studies content'] = array(
    'name' => 'delete own case_studies content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own instagram content'.
  $permissions['delete own instagram content'] = array(
    'name' => 'delete own instagram content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_vacancies content'.
  $permissions['delete own job_vacancies content'] = array(
    'name' => 'delete own job_vacancies content',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own linkedin content'.
  $permissions['delete own linkedin content'] = array(
    'name' => 'delete own linkedin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own locations content'.
  $permissions['delete own locations content'] = array(
    'name' => 'delete own locations content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own media content'.
  $permissions['delete own media content'] = array(
    'name' => 'delete own media content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_range content'.
  $permissions['delete own product_range content'] = array(
    'name' => 'delete own product_range content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own success_stories content'.
  $permissions['delete own success_stories content'] = array(
    'name' => 'delete own success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own training_events content'.
  $permissions['delete own training_events content'] = array(
    'name' => 'delete own training_events content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own tweet content'.
  $permissions['delete own tweet content'] = array(
    'name' => 'delete own tweet content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in continent'.
  $permissions['delete terms in continent'] = array(
    'name' => 'delete terms in continent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in industry'.
  $permissions['delete terms in industry'] = array(
    'name' => 'delete terms in industry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in product'.
  $permissions['delete terms in product'] = array(
    'name' => 'delete terms in product',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in product_range'.
  $permissions['delete terms in product_range'] = array(
    'name' => 'delete terms in product_range',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in training_courses'.
  $permissions['delete terms in training_courses'] = array(
    'name' => 'delete terms in training_courses',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any case_studies content'.
  $permissions['edit any case_studies content'] = array(
    'name' => 'edit any case_studies content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any instagram content'.
  $permissions['edit any instagram content'] = array(
    'name' => 'edit any instagram content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_vacancies content'.
  $permissions['edit any job_vacancies content'] = array(
    'name' => 'edit any job_vacancies content',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any linkedin content'.
  $permissions['edit any linkedin content'] = array(
    'name' => 'edit any linkedin content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any locations content'.
  $permissions['edit any locations content'] = array(
    'name' => 'edit any locations content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any media content'.
  $permissions['edit any media content'] = array(
    'name' => 'edit any media content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_range content'.
  $permissions['edit any product_range content'] = array(
    'name' => 'edit any product_range content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any success_stories content'.
  $permissions['edit any success_stories content'] = array(
    'name' => 'edit any success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any training_events content'.
  $permissions['edit any training_events content'] = array(
    'name' => 'edit any training_events content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any tweet content'.
  $permissions['edit any tweet content'] = array(
    'name' => 'edit any tweet content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own case_studies content'.
  $permissions['edit own case_studies content'] = array(
    'name' => 'edit own case_studies content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor user' => 'editor user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own instagram content'.
  $permissions['edit own instagram content'] = array(
    'name' => 'edit own instagram content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_vacancies content'.
  $permissions['edit own job_vacancies content'] = array(
    'name' => 'edit own job_vacancies content',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own linkedin content'.
  $permissions['edit own linkedin content'] = array(
    'name' => 'edit own linkedin content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own locations content'.
  $permissions['edit own locations content'] = array(
    'name' => 'edit own locations content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own media content'.
  $permissions['edit own media content'] = array(
    'name' => 'edit own media content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_range content'.
  $permissions['edit own product_range content'] = array(
    'name' => 'edit own product_range content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own success_stories content'.
  $permissions['edit own success_stories content'] = array(
    'name' => 'edit own success_stories content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own training_events content'.
  $permissions['edit own training_events content'] = array(
    'name' => 'edit own training_events content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own tweet content'.
  $permissions['edit own tweet content'] = array(
    'name' => 'edit own tweet content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in continent'.
  $permissions['edit terms in continent'] = array(
    'name' => 'edit terms in continent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in industry'.
  $permissions['edit terms in industry'] = array(
    'name' => 'edit terms in industry',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in product'.
  $permissions['edit terms in product'] = array(
    'name' => 'edit terms in product',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in product_range'.
  $permissions['edit terms in product_range'] = array(
    'name' => 'edit terms in product_range',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in training_courses'.
  $permissions['edit terms in training_courses'] = array(
    'name' => 'edit terms in training_courses',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit workflow comment'.
  $permissions['edit workflow comment'] = array(
    'name' => 'edit workflow comment',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'field hidden administer'.
  $permissions['field hidden administer'] = array(
    'name' => 'field hidden administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_hidden',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import csv_importer feeds'.
  $permissions['import csv_importer feeds'] = array(
    'name' => 'import csv_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import location_importer feeds'.
  $permissions['import location_importer feeds'] = array(
    'name' => 'import location_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import rss_importer feeds'.
  $permissions['import rss_importer feeds'] = array(
    'name' => 'import rss_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'php redirect rh_file'.
  $permissions['php redirect rh_file'] = array(
    'name' => 'php redirect rh_file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'php redirect rh_node'.
  $permissions['php redirect rh_node'] = array(
    'name' => 'php redirect rh_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'php redirect rh_taxonomy'.
  $permissions['php redirect rh_taxonomy'] = array(
    'name' => 'php redirect rh_taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'provide translation services'.
  $permissions['provide translation services'] = array(
    'name' => 'provide translation services',
    'roles' => array(
      'administrator' => 'administrator',
      'translator user' => 'translator user',
    ),
    'module' => 'tmgmt_local',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'report httpbl'.
  $permissions['report httpbl'] = array(
    'name' => 'report httpbl',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'httpbl',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule workflow transitions'.
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor user' => 'editor user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set own user location'.
  $permissions['set own user location'] = array(
    'name' => 'set own user location',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'submit translation jobs'.
  $permissions['submit translation jobs'] = array(
    'name' => 'submit translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'tamper csv_importer'.
  $permissions['tamper csv_importer'] = array(
    'name' => 'tamper csv_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper location_importer'.
  $permissions['tamper location_importer'] = array(
    'name' => 'tamper location_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper rss_importer'.
  $permissions['tamper rss_importer'] = array(
    'name' => 'tamper rss_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'administrator' => 'administrator',
      'translator user' => 'translator user',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'administrator' => 'administrator',
      'translator user' => 'translator user',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'administrator' => 'administrator',
      'translator user' => 'translator user',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'administrator' => 'administrator',
      'translator user' => 'translator user',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user entities'.
  $permissions['translate user entities'] = array(
    'name' => 'translate user entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock csv_importer feeds'.
  $permissions['unlock csv_importer feeds'] = array(
    'name' => 'unlock csv_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock location_importer feeds'.
  $permissions['unlock location_importer feeds'] = array(
    'name' => 'unlock location_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock rss_importer feeds'.
  $permissions['unlock rss_importer feeds'] = array(
    'name' => 'unlock rss_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher user' => 'publisher user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format ck_editor'.
  $permissions['use text format ck_editor'] = array(
    'name' => 'use text format ck_editor',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format tweet'.
  $permissions['use text format tweet'] = array(
    'name' => 'use text format tweet',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use xmlsitemap'.
  $permissions['use xmlsitemap'] = array(
    'name' => 'use xmlsitemap',
    'roles' => array(),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'view all user locations'.
  $permissions['view all user locations'] = array(
    'name' => 'view all user locations',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node map'.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view overridden file entities in wysiwyg'.
  $permissions['view overridden file entities in wysiwyg'] = array(
    'name' => 'view overridden file entities in wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'media_ckeditor',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'editor user' => 'editor user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'HR user' => 'HR user',
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own user location'.
  $permissions['view own user location'] = array(
    'name' => 'view own user location',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user location details'.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view user map'.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'workflow notify'.
  $permissions['workflow notify'] = array(
    'name' => 'workflow notify',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor user' => 'contributor user',
      'editor user' => 'editor user',
      'moderator user' => 'moderator user',
      'publisher user' => 'publisher user',
      'translator user' => 'translator user',
    ),
    'module' => 'workflow_notify',
  );

  return $permissions;
}
