<?php
/**
 * @file
 * node_fe.features.inc
 */

/**
 * Implements hook_node_info().
 */
function node_fe_node_info() {
  $items = array(
    'case_studies' => array(
      'name' => t('Case Studies'),
      'base' => 'node_content',
      'description' => t('For longer case studies and possibly a download for the case study'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'instagram' => array(
      'name' => t('Instagram post'),
      'base' => 'node_content',
      'description' => t('A post imported from Instagram.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'job_vacancies' => array(
      'name' => t('Job Vacancies'),
      'base' => 'node_content',
      'description' => t('Use to load up job vacancies for your area in the career feed'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'linkedin' => array(
      'name' => t('Linkedin post'),
      'base' => 'node_content',
      'description' => t('A post imported from Linkedin.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'locations' => array(
      'name' => t('Locations'),
      'base' => 'node_content',
      'description' => t('Used for location data'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use for news or press releases'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_range' => array(
      'name' => t('Product Range'),
      'base' => 'node_content',
      'description' => t('Use this ONLY for products unique in your country or region. Admins don\'t change the naming here. Product and products are reserved paths for the main site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'success_stories' => array(
      'name' => t('Success Stories'),
      'base' => 'node_content',
      'description' => t('For short example case studies (around 100 words)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tweet' => array(
      'name' => t('Tweet'),
      'base' => 'node_content',
      'description' => t('A tweet imported from Twitter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
