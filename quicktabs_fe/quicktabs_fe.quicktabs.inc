<?php
/**
 * @file
 * quicktabs_fe.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function quicktabs_fe_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'branch_contact_info';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Branch Contact Info';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'branch_contact_info',
      'display' => 'block',
      'args' => '',
      'use_title' => 0,
      'title' => 'AESSEAL DE - Kronau',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'branch_contact_info',
      'display' => 'block_1',
      'args' => '',
      'use_title' => 0,
      'title' => 'AESSEAL DE - Sauerlach',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'bootstrap_accordion';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('AESSEAL DE - Kronau');
  t('AESSEAL DE - Sauerlach');
  t('Branch Contact Info');

  $export['branch_contact_info'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'global_branches';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 3;
  $quicktabs->title = 'Branches by Continent';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'global_branches_block',
      'display' => 'block',
      'args' => '',
      'use_title' => 0,
      'title' => 'Africa',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'global_branches_block',
      'display' => 'block_1',
      'args' => '',
      'use_title' => 0,
      'title' => 'Asia',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'global_branches_block',
      'display' => 'block_2',
      'args' => '',
      'use_title' => 0,
      'title' => 'Australasia',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'global_branches_block',
      'display' => 'block_3',
      'args' => '',
      'use_title' => 0,
      'title' => 'Europe',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'global_branches_block',
      'display' => 'block_4',
      'args' => '',
      'use_title' => 0,
      'title' => 'Middle-East',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'global_branches_block',
      'display' => 'block_5',
      'args' => '',
      'use_title' => 0,
      'title' => 'North America',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'global_branches_block',
      'display' => 'block_6',
      'args' => '',
      'use_title' => 0,
      'title' => 'South America',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'bootstrap_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'tabstyle' => 'tabs',
    'tabposition' => 'basic',
    'tabeffects' => array(
      'fade' => 'fade',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Africa');
  t('Asia');
  t('Australasia');
  t('Branches by Continent');
  t('Europe');
  t('Middle-East');
  t('North America');
  t('South America');

  $export['global_branches'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'key_branch_contacts';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Key Branch Contacts';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'employees',
      'display' => 'block',
      'args' => '',
      'use_title' => 0,
      'title' => 'AESSEAL DE - Kronau',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'employees',
      'display' => 'block_1',
      'args' => '',
      'use_title' => 0,
      'title' => 'AESSEAL DE - Sauerlach',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'employees',
      'display' => 'block_2',
      'args' => '',
      'use_title' => 0,
      'title' => 'Additional Territories',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'bootstrap_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'tabstyle' => 'tabs',
    'tabposition' => 'basic',
    'tabeffects' => array(
      'fade' => 'fade',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AESSEAL DE - Kronau');
  t('AESSEAL DE - Sauerlach');
  t('Additional Territories');
  t('Key Branch Contacts');

  $export['key_branch_contacts'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'search_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Global Site Search Options';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_12',
      'hide_title' => 1,
      'title' => 'Full Site Search',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_64',
      'hide_title' => 1,
      'title' => 'Search Product Brochures',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'bootstrap_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'tabstyle' => 'tabs',
    'tabposition' => 'basic',
    'tabeffects' => array(
      'fade' => 'fade',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Full Site Search');
  t('Global Site Search Options');
  t('Search Product Brochures');

  $export['search_tabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'your_regional_branch';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Your Regional Branches';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'footer_location',
      'display' => 'block_1',
      'args' => '',
      'use_title' => 0,
      'title' => 'AESSEAL DE - Kronau',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'footer_location',
      'display' => 'block_2',
      'args' => '',
      'use_title' => 0,
      'title' => 'AESSEAL DE - Sauerlach',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'bootstrap_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'tabstyle' => 'tabs',
    'tabposition' => 'basic',
    'tabeffects' => array(
      'fade' => 'fade',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AESSEAL DE - Kronau');
  t('AESSEAL DE - Sauerlach');
  t('Your Regional Branches');

  $export['your_regional_branch'] = $quicktabs;

  return $export;
}
