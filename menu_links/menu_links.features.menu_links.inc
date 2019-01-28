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
  // Exported menu link: main-menu_emplacement:node/9865.
  $menu_links['main-menu_emplacement:node/9865'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9865',
    'router_path' => 'node/%',
    'link_title' => 'Emplacement',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_emplacement:node/9865',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
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
  // Exported menu link: main-menu_irketimiz:node/9917.
  $menu_links['main-menu_irketimiz:node/9917'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9917',
    'router_path' => 'node/%',
    'link_title' => 'Şirketimiz',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_irketimiz:node/9917',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'tr',
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
  // Exported menu link: main-menu_konum:node/9915.
  $menu_links['main-menu_konum:node/9915'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9915',
    'router_path' => 'node/%',
    'link_title' => 'Konum',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_konum:node/9915',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'tr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_la-nostra-azienda:node/9895.
  $menu_links['main-menu_la-nostra-azienda:node/9895'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9895',
    'router_path' => 'node/%',
    'link_title' => 'La nostra azienda',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_la-nostra-azienda:node/9895',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'it',
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
  // Exported menu link: main-menu_lsningar:node/9887.
  $menu_links['main-menu_lsningar:node/9887'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9887',
    'router_path' => 'node/%',
    'link_title' => 'lösningar',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_lsningar:node/9887',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'sv',
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
  // Exported menu link: main-menu_notre-compagnie:node/9857.
  $menu_links['main-menu_notre-compagnie:node/9857'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9857',
    'router_path' => 'node/%',
    'link_title' => 'Notre compagnie',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_notre-compagnie:node/9857',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_nuestra-compaa:node/9872.
  $menu_links['main-menu_nuestra-compaa:node/9872'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9872',
    'router_path' => 'node/%',
    'link_title' => 'Nuestra compañía',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_nuestra-compaa:node/9872',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
    'language' => 'es',
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
  // Exported menu link: main-menu_plats:node/9901.
  $menu_links['main-menu_plats:node/9901'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9901',
    'router_path' => 'node/%',
    'link_title' => 'Plats',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_plats:node/9901',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'sv',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_posizione:node/9898.
  $menu_links['main-menu_posizione:node/9898'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9898',
    'router_path' => 'node/%',
    'link_title' => 'Posizione',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_posizione:node/9898',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'it',
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
  // Exported menu link: main-menu_soluciones:node/9871.
  $menu_links['main-menu_soluciones:node/9871'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9871',
    'router_path' => 'node/%',
    'link_title' => 'Soluciones',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_soluciones:node/9871',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
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
  // Exported menu link: main-menu_solutions:node/9856.
  $menu_links['main-menu_solutions:node/9856'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9856',
    'router_path' => 'node/%',
    'link_title' => 'Solutions',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_solutions:node/9856',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_soluzioni:node/9892.
  $menu_links['main-menu_soluzioni:node/9892'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9892',
    'router_path' => 'node/%',
    'link_title' => 'Soluzioni',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_soluzioni:node/9892',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'it',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_standort:node/9866.
  $menu_links['main-menu_standort:node/9866'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9866',
    'router_path' => 'node/%',
    'link_title' => 'Standort',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'main-menu_standort:node/9866',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_ubicacin:node/9873.
  $menu_links['main-menu_ubicacin:node/9873'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9873',
    'router_path' => 'node/%',
    'link_title' => 'Ubicación',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_ubicacin:node/9873',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
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
    'weight' => 4,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_vrt-fretag:node/9890.
  $menu_links['main-menu_vrt-fretag:node/9890'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9890',
    'router_path' => 'node/%',
    'link_title' => 'Vårt företag',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_vrt-fretag:node/9890',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'sv',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_zmler:node/9912.
  $menu_links['main-menu_zmler:node/9912'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9912',
    'router_path' => 'node/%',
    'link_title' => 'Çözümler',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_zmler:node/9912',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'tr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_auszeichnungen:node/9869.
  $menu_links['menu-about-us_auszeichnungen:node/9869'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9869',
    'router_path' => 'node/%',
    'link_title' => 'Auszeichnungen',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_auszeichnungen:node/9869',
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
  // Exported menu link: menu-about-us_awards:node/9891.
  $menu_links['menu-about-us_awards:node/9891'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9891',
    'router_path' => 'node/%',
    'link_title' => 'Awards',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_awards:node/9891',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'sv',
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
  // Exported menu link: menu-about-us_carrires:node/9867.
  $menu_links['menu-about-us_carrires:node/9867'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9867',
    'router_path' => 'node/%',
    'link_title' => 'Carrières',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_carrires:node/9867',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_communaut:node/9858.
  $menu_links['menu-about-us_communaut:node/9858'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9858',
    'router_path' => 'node/%',
    'link_title' => 'Communauté',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_communaut:node/9858',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
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
  // Exported menu link: menu-about-us_comunidad:node/9877.
  $menu_links['menu-about-us_comunidad:node/9877'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9877',
    'router_path' => 'node/%',
    'link_title' => 'Comunidad',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_comunidad:node/9877',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_comunit:node/9897.
  $menu_links['menu-about-us_comunit:node/9897'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9897',
    'router_path' => 'node/%',
    'link_title' => 'Comunità',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_comunit:node/9897',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'it',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_dller:node/9919.
  $menu_links['menu-about-us_dller:node/9919'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9919',
    'router_path' => 'node/%',
    'link_title' => 'Ödüller',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_dller:node/9919',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'tr',
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
  // Exported menu link: menu-about-us_karriere:node/9868.
  $menu_links['menu-about-us_karriere:node/9868'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9868',
    'router_path' => 'node/%',
    'link_title' => 'Karriere',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_karriere:node/9868',
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
  // Exported menu link: menu-about-us_premi:node/9896.
  $menu_links['menu-about-us_premi:node/9896'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9896',
    'router_path' => 'node/%',
    'link_title' => 'Premi',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_premi:node/9896',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'it',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_premios:node/9878.
  $menu_links['menu-about-us_premios:node/9878'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9878',
    'router_path' => 'node/%',
    'link_title' => 'Premios',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_premios:node/9878',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_rcompenses:node/9860.
  $menu_links['menu-about-us_rcompenses:node/9860'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9860',
    'router_path' => 'node/%',
    'link_title' => 'Récompenses',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_rcompenses:node/9860',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_topluluk:node/9918.
  $menu_links['menu-about-us_topluluk:node/9918'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9918',
    'router_path' => 'node/%',
    'link_title' => 'Topluluk',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_topluluk:node/9918',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'tr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_trabajos:node/9879.
  $menu_links['menu-about-us_trabajos:node/9879'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9879',
    'router_path' => 'node/%',
    'link_title' => 'Trabajos',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_trabajos:node/9879',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
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
  // Exported menu link: menu-locations_ambiente:node/9899.
  $menu_links['menu-locations_ambiente:node/9899'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/9899',
    'router_path' => 'node/%',
    'link_title' => 'Ambiente',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_ambiente:node/9899',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'it',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_anahtar-ubeler:location/key-branches.
  $menu_links['menu-locations_anahtar-ubeler:location/key-branches'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Anahtar Şubeler',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_anahtar-ubeler:location/key-branches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'tr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_branches-cls:location/key-branches.
  $menu_links['menu-locations_branches-cls:location/key-branches'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Branches clés',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_branches-cls:location/key-branches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
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
  // Exported menu link: menu-locations_environnement:node/9861.
  $menu_links['menu-locations_environnement:node/9861'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/9861',
    'router_path' => 'node/%',
    'link_title' => 'Environnement',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_environnement:node/9861',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_evre:node/9916.
  $menu_links['menu-locations_evre:node/9916'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/9916',
    'router_path' => 'node/%',
    'link_title' => 'Çevre',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_evre:node/9916',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'tr',
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
  // Exported menu link: menu-locations_medioambiente:node/9874.
  $menu_links['menu-locations_medioambiente:node/9874'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/9874',
    'router_path' => 'node/%',
    'link_title' => 'Medioambiente',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_medioambiente:node/9874',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_nyckelgrenar:location/key-branches.
  $menu_links['menu-locations_nyckelgrenar:location/key-branches'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Nyckelgrenar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_nyckelgrenar:location/key-branches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'sv',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_ramas-clave:location/key-branches.
  $menu_links['menu-locations_ramas-clave:location/key-branches'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Ramas clave',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_ramas-clave:location/key-branches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-locations_rami-chiave:location/key-branches.
  $menu_links['menu-locations_rami-chiave:location/key-branches'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'location/key-branches',
    'router_path' => 'location/key-branches',
    'link_title' => 'Rami chiave',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_rami-chiave:location/key-branches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'it',
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
  // Exported menu link: menu-products_aplicaciones:node/9875.
  $menu_links['menu-products_aplicaciones:node/9875'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9875',
    'router_path' => 'node/%',
    'link_title' => 'Aplicaciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-products_aplicaciones:node/9875',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
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
  // Exported menu link: menu-products_applications:node/9862.
  $menu_links['menu-products_applications:node/9862'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9862',
    'router_path' => 'node/%',
    'link_title' => 'Applications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-products_applications:node/9862',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-products_applicazioni:node/9893.
  $menu_links['menu-products_applicazioni:node/9893'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9893',
    'router_path' => 'node/%',
    'link_title' => 'Applicazioni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-products_applicazioni:node/9893',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'it',
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
  // Exported menu link: menu-solutions_aplicaciones:node/9875.
  $menu_links['menu-solutions_aplicaciones:node/9875'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9875',
    'router_path' => 'node/%',
    'link_title' => 'Aplicaciones',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_aplicaciones:node/9875',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
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
  // Exported menu link: menu-solutions_applications:node/9862.
  $menu_links['menu-solutions_applications:node/9862'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9862',
    'router_path' => 'node/%',
    'link_title' => 'Applications',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_applications:node/9862',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_applicazioni:node/9893.
  $menu_links['menu-solutions_applicazioni:node/9893'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9893',
    'router_path' => 'node/%',
    'link_title' => 'Applicazioni',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_applicazioni:node/9893',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'it',
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
  // Exported menu link: menu-solutions_innovacin:node/9876.
  $menu_links['menu-solutions_innovacin:node/9876'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9876',
    'router_path' => 'node/%',
    'link_title' => 'Innovación',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_innovacin:node/9876',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
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
  // Exported menu link: menu-solutions_innovation:node/9863.
  $menu_links['menu-solutions_innovation:node/9863'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9863',
    'router_path' => 'node/%',
    'link_title' => 'Innovation',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_innovation:node/9863',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_innovation:node/9889.
  $menu_links['menu-solutions_innovation:node/9889'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9889',
    'router_path' => 'node/%',
    'link_title' => 'Innovation',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_innovation:node/9889',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'sv',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_innovazione:node/9894.
  $menu_links['menu-solutions_innovazione:node/9894'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9894',
    'router_path' => 'node/%',
    'link_title' => 'Innovazione',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_innovazione:node/9894',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'it',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_tillmpningar:node/9888.
  $menu_links['menu-solutions_tillmpningar:node/9888'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9888',
    'router_path' => 'node/%',
    'link_title' => 'tillämpningar',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_tillmpningar:node/9888',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'sv',
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
  // Exported menu link: menu-solutions_uygulamalar:node/9913.
  $menu_links['menu-solutions_uygulamalar:node/9913'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9913',
    'router_path' => 'node/%',
    'link_title' => 'Uygulamalar',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_uygulamalar:node/9913',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'tr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_yenilik:node/9914.
  $menu_links['menu-solutions_yenilik:node/9914'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9914',
    'router_path' => 'node/%',
    'link_title' => 'Yenilik',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_yenilik:node/9914',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'tr',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ambiente');
  t('Anahtar Şubeler');
  t('Anwendungen');
  t('Aplicaciones');
  t('Applications');
  t('Applicazioni');
  t('Article 1');
  t('Ausbildung');
  t('Auszeichnungen');
  t('Awards');
  t('Branches clés');
  t('CKD');
  t('Careers');
  t('Carrières');
  t('Communauté');
  t('Community');
  t('Comunidad');
  t('Comunità');
  t('Emplacement');
  t('Environment');
  t('Environnement');
  t('Gemeinschaft');
  t('Home');
  t('Innovación');
  t('Innovation');
  t('Innovazione');
  t('Karriere');
  t('Key Branches');
  t('Konum');
  t('La nostra azienda');
  t('Location');
  t('Lösung');
  t('Medioambiente');
  t('News');
  t('Notre compagnie');
  t('Nuestra compañía');
  t('Nyckelgrenar');
  t('Our Company');
  t('Performance');
  t('Plats');
  t('Posizione');
  t('Premi');
  t('Premios');
  t('Product Range');
  t('Produktprogramm');
  t('Ramas clave');
  t('Rami chiave');
  t('Récompenses');
  t('Schlüssel Zweige');
  t('Soluciones');
  t('Solutions');
  t('Soluzioni');
  t('Standort');
  t('Topluluk');
  t('Trabajos');
  t('Training');
  t('Ubicación');
  t('Umwelt');
  t('Unser Unternehmen');
  t('Uygulamalar');
  t('Vårt företag');
  t('Yenilik');
  t('lösningar');
  t('tillämpningar');
  t('Çevre');
  t('Çözümler');
  t('Ödüller');
  t('Şirketimiz');

  return $menu_links;
}
