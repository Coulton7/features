<?php
/**
 * @file
 * menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_article-1:node/5.
  $menu_links['main-menu_article-1:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Article 1',
    'options' => array(
      'node_type' => 'article',
      'alter' => TRUE,
      'identifier' => 'main-menu_article-1:node/5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news:news',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_key-branches:location/key-branches.
  $menu_links['main-menu_key-branches:location/key-branches'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Key Branches',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_key-branches:location/key-branches',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_location:node/6325.
  $menu_links['main-menu_location:node/6325'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6325',
    'router_path' => 'node/%',
    'link_title' => 'Location',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Locations',
      ),
      'identifier' => 'main-menu_location:node/6325',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_lsung:node/6461.
  $menu_links['main-menu_lsung:node/6461'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6461',
    'router_path' => 'node/%',
    'link_title' => 'Lösung',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Lösung',
      ),
      'identifier' => 'main-menu_lsung:node/6461',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_news:news.
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_our-company:node/2.
  $menu_links['main-menu_our-company:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Our Company',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_our-company:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_product-range:product-range.
  $menu_links['main-menu_product-range:product-range'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product-range',
    'router_path' => 'product-range',
    'link_title' => 'Product Range',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Product Range',
      ),
      'identifier' => 'main-menu_product-range:product-range',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_solutions:node/3.
  $menu_links['main-menu_solutions:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Solutions',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Solutions',
      ),
      'identifier' => 'main-menu_solutions:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_unser-unternehmen:node/6460.
  $menu_links['main-menu_unser-unternehmen:node/6460'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6460',
    'router_path' => 'node/%',
    'link_title' => 'Unser Unternehmen',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Unser Unternehmen',
      ),
      'identifier' => 'main-menu_unser-unternehmen:node/6460',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_auszeichnungen:node/6342.
  $menu_links['menu-about-us_auszeichnungen:node/6342'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/6342',
    'router_path' => 'node/%',
    'link_title' => 'Auszeichnungen',
    'options' => array(
      'attributes' => array(
        'title' => 'Auszeichnungen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_auszeichnungen:node/6342',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_awards:node/6342.
  $menu_links['menu-about-us_awards:node/6342'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/6342',
    'router_path' => 'node/%',
    'link_title' => 'Awards',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Awards',
      ),
      'identifier' => 'menu-about-us_awards:node/6342',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_careers:node/6341.
  $menu_links['menu-about-us_careers:node/6341'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/6341',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Careers',
      ),
      'identifier' => 'menu-about-us_careers:node/6341',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_community:node/6344.
  $menu_links['menu-about-us_community:node/6344'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/6344',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Community',
      ),
      'identifier' => 'menu-about-us_community:node/6344',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_gemeinschaft:node/6478.
  $menu_links['menu-about-us_gemeinschaft:node/6478'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/6478',
    'router_path' => 'node/%',
    'link_title' => 'Gemeinschaft',
    'options' => array(
      'attributes' => array(
        'title' => 'Gemeinschaft',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'menu-about-us_gemeinschaft:node/6478',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_karriere:node/6341.
  $menu_links['menu-about-us_karriere:node/6341'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/6341',
    'router_path' => 'node/%',
    'link_title' => 'Karriere',
    'options' => array(
      'attributes' => array(
        'title' => 'Karriere',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_karriere:node/6341',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-global-product-range_product-range:product-range.
  $menu_links['menu-global-product-range_product-range:product-range'] = array(
    'menu_name' => 'menu-global-product-range',
    'link_path' => 'product-range',
    'router_path' => 'product-range',
    'link_title' => 'Product Range',
    'options' => array(
      'attributes' => array(
        'title' => 'Product Range',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-global-product-range_product-range:product-range',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-global-product-range_produktprogramm:product-range.
  $menu_links['menu-global-product-range_produktprogramm:product-range'] = array(
    'menu_name' => 'menu-global-product-range',
    'link_path' => 'product-range',
    'router_path' => 'product-range',
    'link_title' => 'Produktprogramm',
    'options' => array(
      'attributes' => array(
        'title' => 'Produktprogramm',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-global-product-range_produktprogramm:product-range',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_environment:node/6448.
  $menu_links['menu-locations_environment:node/6448'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/6448',
    'router_path' => 'node/%',
    'link_title' => 'Environment',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Environment',
      ),
      'identifier' => 'menu-locations_environment:node/6448',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_key-branches:location/key-branches.
  $menu_links['menu-locations_key-branches:location/key-branches'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Key Branches',
    'options' => array(
      'attributes' => array(
        'title' => 'Key Branches',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_key-branches:location/key-branches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_schlssel-zweige:location/key-branches.
  $menu_links['menu-locations_schlssel-zweige:location/key-branches'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Schlüssel Zweige',
    'options' => array(
      'attributes' => array(
        'title' => 'Schlüssel Zweige',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_schlssel-zweige:location/key-branches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_umwelt:node/6477.
  $menu_links['menu-locations_umwelt:node/6477'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/6477',
    'router_path' => 'node/%',
    'link_title' => 'Umwelt',
    'options' => array(
      'attributes' => array(
        'title' => 'Umwelt',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'menu-locations_umwelt:node/6477',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-national-product-range-menu_ckd:node/6469.
  $menu_links['menu-national-product-range-menu_ckd:node/6469'] = array(
    'menu_name' => 'menu-national-product-range-menu',
    'link_path' => 'node/6469',
    'router_path' => 'node/%',
    'link_title' => 'CKD',
    'options' => array(
      'node_type' => 'product_range',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'CKD',
      ),
      'identifier' => 'menu-national-product-range-menu_ckd:node/6469',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-national-product-range-menu_ckd:node/6497.
  $menu_links['menu-national-product-range-menu_ckd:node/6497'] = array(
    'menu_name' => 'menu-national-product-range-menu',
    'link_path' => 'node/6497',
    'router_path' => 'node/%',
    'link_title' => 'CKD',
    'options' => array(
      'attributes' => array(
        'title' => 'CKD',
      ),
      'alter' => TRUE,
      'node_type' => 'product_range',
      'identifier' => 'menu-national-product-range-menu_ckd:node/6497',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-products_anwendungen:node/6464.
  $menu_links['menu-products_anwendungen:node/6464'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/6464',
    'router_path' => 'node/%',
    'link_title' => 'Anwendungen',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'menu-products_anwendungen:node/6464',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-products_applications:node/4.
  $menu_links['menu-products_applications:node/4'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Applications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-products_applications:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-products_performance:node/6449.
  $menu_links['menu-products_performance:node/6449'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/6449',
    'router_path' => 'node/%',
    'link_title' => 'Performance',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-products_performance:node/6449',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_anwendungen:node/6464.
  $menu_links['menu-solutions_anwendungen:node/6464'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/6464',
    'router_path' => 'node/%',
    'link_title' => 'Anwendungen',
    'options' => array(
      'attributes' => array(
        'title' => 'Anwendungen',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-solutions_anwendungen:node/6464',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_applications:node/4.
  $menu_links['menu-solutions_applications:node/4'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Applications',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Applications',
      ),
      'identifier' => 'menu-solutions_applications:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_ausbildung:node/6502.
  $menu_links['menu-solutions_ausbildung:node/6502'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/6502',
    'router_path' => 'node/%',
    'link_title' => 'Ausbildung',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Ausbildung',
      ),
      'identifier' => 'menu-solutions_ausbildung:node/6502',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_innovation:node/6323.
  $menu_links['menu-solutions_innovation:node/6323'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/6323',
    'router_path' => 'node/%',
    'link_title' => 'Innovation',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Innovation',
      ),
      'identifier' => 'menu-solutions_innovation:node/6323',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_innovation:node/6465.
  $menu_links['menu-solutions_innovation:node/6465'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/6465',
    'router_path' => 'node/%',
    'link_title' => 'Innovation',
    'options' => array(
      'attributes' => array(
        'title' => 'Innovation',
      ),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'menu-solutions_innovation:node/6465',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_training:node/6446.
  $menu_links['menu-solutions_training:node/6446'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/6446',
    'router_path' => 'node/%',
    'link_title' => 'Training',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Training',
      ),
      'identifier' => 'menu-solutions_training:node/6446',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Anwendungen');
  t('Applications');
  t('Article 1');
  t('Ausbildung');
  t('Auszeichnungen');
  t('Awards');
  t('CKD');
  t('Careers');
  t('Community');
  t('Environment');
  t('Gemeinschaft');
  t('Home');
  t('Innovation');
  t('Karriere');
  t('Key Branches');
  t('Location');
  t('Lösung');
  t('News');
  t('Our Company');
  t('Performance');
  t('Product Range');
  t('Produktprogramm');
  t('Schlüssel Zweige');
  t('Solutions');
  t('Training');
  t('Umwelt');
  t('Unser Unternehmen');

  return $menu_links;
}
