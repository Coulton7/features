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
    'weight' => -23,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_gama-de-productos:gama-de-productos.
  $menu_links['main-menu_gama-de-productos:gama-de-productos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gama-de-productos',
    'router_path' => 'gama-de-productos',
    'link_title' => 'Gama De Productos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_gama-de-productos:gama-de-productos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_gamma-prodotti:gamma-prodotti.
  $menu_links['main-menu_gamma-prodotti:gamma-prodotti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gamma-prodotti',
    'router_path' => 'gamma-prodotti',
    'link_title' => 'Gamma prodotti',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_gamma-prodotti:gamma-prodotti',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'it',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_gamme-de-produits:gamme-de-produits.
  $menu_links['main-menu_gamme-de-produits:gamme-de-produits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gamme-de-produits',
    'router_path' => 'gamme-de-produits',
    'link_title' => 'Gamme de Produits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_gamme-de-produits:gamme-de-produits',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_genel-rn-katalou:genel-ürün-kataloğu.
  $menu_links['main-menu_genel-rn-katalou:genel-ürün-kataloğu'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genel-ürün-kataloğu',
    'router_path' => 'genel-ürün-kataloğu',
    'link_title' => 'Genel Ürün Kataloğu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_genel-rn-katalou:genel-ürün-kataloğu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'tr',
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
    'weight' => -49,
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
    'weight' => -20,
    'customized' => 1,
    'language' => 'tr',
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
    'weight' => -22,
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
    'weight' => -32,
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
    'weight' => -39,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_lokalizacja:node/10122.
  $menu_links['main-menu_lokalizacja:node/10122'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10122',
    'router_path' => 'node/%',
    'link_title' => 'Lokalizacja',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_lokalizacja:node/10122',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -16,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_lsningar:node/9887.
  $menu_links['main-menu_lsningar:node/9887'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9887',
    'router_path' => 'node/%',
    'link_title' => 'Lösningar',
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
    'weight' => -33,
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
    'weight' => -31,
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
    'weight' => -36,
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
    'weight' => -19,
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
    'weight' => -18,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_o-nas:node/10126.
  $menu_links['main-menu_o-nas:node/10126'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10126',
    'router_path' => 'node/%',
    'link_title' => 'O nas',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_o-nas:node/10126',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 1,
    'language' => 'pl',
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
    'weight' => -37,
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
    'weight' => -30,
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
    'weight' => -34,
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
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_produktprogramm:produktprogramm.
  $menu_links['main-menu_produktprogramm:produktprogramm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'produktprogramm',
    'router_path' => 'produktprogramm',
    'link_title' => 'Produktprogramm',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_produktprogramm:produktprogramm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_produktsortiment:produktsortiment.
  $menu_links['main-menu_produktsortiment:produktsortiment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'produktsortiment',
    'router_path' => 'produktsortiment',
    'link_title' => 'Produktsortiment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_produktsortiment:produktsortiment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'sv',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_przegld-produktw:przegląd-produktów.
  $menu_links['main-menu_przegld-produktw:przegląd-produktów'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'przegląd-produktów',
    'router_path' => 'przegląd-produktów',
    'link_title' => 'Przegląd produktów',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_przegld-produktw:przegląd-produktów',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_rozwizania:node/10125.
  $menu_links['main-menu_rozwizania:node/10125'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10125',
    'router_path' => 'node/%',
    'link_title' => 'Rozwiązania',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_rozwizania:node/10125',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -17,
    'customized' => 1,
    'language' => 'pl',
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
    'weight' => -29,
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
    'weight' => -40,
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
    'weight' => -28,
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
    'weight' => -35,
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
    'weight' => -24,
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
    'weight' => -27,
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
    'weight' => -21,
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
    'weight' => -26,
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
    'weight' => -25,
    'customized' => 1,
    'language' => 'tr',
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
  // Exported menu link: menu-about-us_customer-service:node/10150.
  $menu_links['menu-about-us_customer-service:node/10150'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/10150',
    'router_path' => 'node/%',
    'link_title' => 'Customer Service',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_customer-service:node/10150',
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
  // Exported menu link: menu-about-us_kariyer-frsatlar:node/9949.
  $menu_links['menu-about-us_kariyer-frsatlar:node/9949'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9949',
    'router_path' => 'node/%',
    'link_title' => 'Kariyer Fırsatları',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_kariyer-frsatlar:node/9949',
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
  // Exported menu link: menu-about-us_karrirer:node/9954.
  $menu_links['menu-about-us_karrirer:node/9954'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9954',
    'router_path' => 'node/%',
    'link_title' => 'Karriärer',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_karrirer:node/9954',
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
  // Exported menu link: menu-about-us_nagrody:node/10120.
  $menu_links['menu-about-us_nagrody:node/10120'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/10120',
    'router_path' => 'node/%',
    'link_title' => 'Nagrody',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_nagrody:node/10120',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_praca:node/10121.
  $menu_links['menu-about-us_praca:node/10121'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/10121',
    'router_path' => 'node/%',
    'link_title' => 'Praca',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_praca:node/10121',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-about-us_preise:node/9869.
  $menu_links['menu-about-us_preise:node/9869'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9869',
    'router_path' => 'node/%',
    'link_title' => 'Preise',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_preise:node/9869',
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
  // Exported menu link: menu-about-us_samhlle:node/9953.
  $menu_links['menu-about-us_samhlle:node/9953'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/9953',
    'router_path' => 'node/%',
    'link_title' => 'Samhälle',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_samhlle:node/9953',
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
  // Exported menu link: menu-about-us_spoeczno:node/10119.
  $menu_links['menu-about-us_spoeczno:node/10119'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/10119',
    'router_path' => 'node/%',
    'link_title' => 'Społeczność',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-about-us_spoeczno:node/10119',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
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
  // Exported menu link: menu-locations_branches-mondiales:node/10152.
  $menu_links['menu-locations_branches-mondiales:node/10152'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10152',
    'router_path' => 'node/%',
    'link_title' => 'Branches Mondiales',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_branches-mondiales:node/10152',
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
  // Exported menu link: menu-locations_global-branches:node/10151.
  $menu_links['menu-locations_global-branches:node/10151'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10151',
    'router_path' => 'node/%',
    'link_title' => 'Global Branches',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_global-branches:node/10151',
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
  // Exported menu link: menu-locations_global-grenar:node/10157.
  $menu_links['menu-locations_global-grenar:node/10157'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10157',
    'router_path' => 'node/%',
    'link_title' => 'Global Grenar',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_global-grenar:node/10157',
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
  // Exported menu link: menu-locations_global-ramas:node/10156.
  $menu_links['menu-locations_global-ramas:node/10156'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10156',
    'router_path' => 'node/%',
    'link_title' => 'Global Ramas',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_global-ramas:node/10156',
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
  // Exported menu link: menu-locations_global-ubeler:node/10158.
  $menu_links['menu-locations_global-ubeler:node/10158'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Global Şubeler',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_global-ubeler:node/10158',
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
  // Exported menu link: menu-locations_globale-rami:node/10154.
  $menu_links['menu-locations_globale-rami:node/10154'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10154',
    'router_path' => 'node/%',
    'link_title' => 'Globale Rami',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_globale-rami:node/10154',
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
  // Exported menu link: menu-locations_globale-zweige:node/10153.
  $menu_links['menu-locations_globale-zweige:node/10153'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10153',
    'router_path' => 'node/%',
    'link_title' => 'Globale Zweige',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_globale-zweige:node/10153',
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
  // Exported menu link: menu-locations_key-contacts:node/10150.
  $menu_links['menu-locations_key-contacts:node/10150'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10150',
    'router_path' => 'node/%',
    'link_title' => 'Key Contacts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-locations_key-contacts:node/10150',
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
  // Exported menu link: menu-locations_milj:node/9951.
  $menu_links['menu-locations_milj:node/9951'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/9951',
    'router_path' => 'node/%',
    'link_title' => 'Miljö',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_milj:node/9951',
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
  // Exported menu link: menu-locations_rodowisko-naturalne:node/10117.
  $menu_links['menu-locations_rodowisko-naturalne:node/10117'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10117',
    'router_path' => 'node/%',
    'link_title' => 'Środowisko naturalne',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_rodowisko-naturalne:node/10117',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
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
  // Exported menu link: menu-locations_wiatowy-gazie:node/10155.
  $menu_links['menu-locations_wiatowy-gazie:node/10155'] = array(
    'menu_name' => 'menu-locations',
    'link_path' => 'node/10155',
    'router_path' => 'node/%',
    'link_title' => 'Światowy Gałęzie',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-locations_wiatowy-gazie:node/10155',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
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
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'page',
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
  // Exported menu link: menu-products_performance:node/9989.
  $menu_links['menu-products_performance:node/9989'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9989',
    'router_path' => 'node/%',
    'link_title' => 'Performance',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-products_performance:node/9989',
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
  // Exported menu link: menu-products_performances:node/9987.
  $menu_links['menu-products_performances:node/9987'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9987',
    'router_path' => 'node/%',
    'link_title' => 'Performances',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-products_performances:node/9987',
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
  // Exported menu link: menu-products_performans:node/9947.
  $menu_links['menu-products_performans:node/9947'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9947',
    'router_path' => 'node/%',
    'link_title' => 'Performans',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-products_performans:node/9947',
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
  // Exported menu link: menu-products_prestanda:node/9950.
  $menu_links['menu-products_prestanda:node/9950'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9950',
    'router_path' => 'node/%',
    'link_title' => 'Prestanda',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-products_prestanda:node/9950',
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
  // Exported menu link: menu-products_rendimiento:node/10113.
  $menu_links['menu-products_rendimiento:node/10113'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/10113',
    'router_path' => 'node/%',
    'link_title' => 'Rendimiento',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-products_rendimiento:node/10113',
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
  // Exported menu link: menu-products_tillmpningar:node/9888.
  $menu_links['menu-products_tillmpningar:node/9888'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/9888',
    'router_path' => 'node/%',
    'link_title' => 'Tillämpningar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-products_tillmpningar:node/9888',
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
  // Exported menu link: menu-products_wyniki:node/10116.
  $menu_links['menu-products_wyniki:node/10116'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/10116',
    'router_path' => 'node/%',
    'link_title' => 'Wyniki',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-products_wyniki:node/10116',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-products_zastosowania:node/10124.
  $menu_links['menu-products_zastosowania:node/10124'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/10124',
    'router_path' => 'node/%',
    'link_title' => 'Zastosowania',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-products_zastosowania:node/10124',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
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
  // Exported menu link: menu-solutions_eitim:node/9948.
  $menu_links['menu-solutions_eitim:node/9948'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9948',
    'router_path' => 'node/%',
    'link_title' => 'Eğitim',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_eitim:node/9948',
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
  // Exported menu link: menu-solutions_formacin:node/10114.
  $menu_links['menu-solutions_formacin:node/10114'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/10114',
    'router_path' => 'node/%',
    'link_title' => 'Formación',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_formacin:node/10114',
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
  // Exported menu link: menu-solutions_formation:node/9988.
  $menu_links['menu-solutions_formation:node/9988'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9988',
    'router_path' => 'node/%',
    'link_title' => 'Formation',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_formation:node/9988',
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
  // Exported menu link: menu-solutions_innowacyjno:node/10123.
  $menu_links['menu-solutions_innowacyjno:node/10123'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/10123',
    'router_path' => 'node/%',
    'link_title' => 'Innowacyjność',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_innowacyjno:node/10123',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_schulung:node/6502.
  $menu_links['menu-solutions_schulung:node/6502'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/6502',
    'router_path' => 'node/%',
    'link_title' => 'Schulung',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Schulung',
      ),
      'identifier' => 'menu-solutions_schulung:node/6502',
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
  // Exported menu link: menu-solutions_szkolenie:node/10118.
  $menu_links['menu-solutions_szkolenie:node/10118'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/10118',
    'router_path' => 'node/%',
    'link_title' => 'Szkolenie',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_szkolenie:node/10118',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-solutions_tillmpningar:node/9888.
  $menu_links['menu-solutions_tillmpningar:node/9888'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9888',
    'router_path' => 'node/%',
    'link_title' => 'Tillämpningar',
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
  // Exported menu link: menu-solutions_utbildning:node/9952.
  $menu_links['menu-solutions_utbildning:node/9952'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/9952',
    'router_path' => 'node/%',
    'link_title' => 'Utbildning',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_utbildning:node/9952',
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
  // Exported menu link: menu-solutions_zastosowania:node/10124.
  $menu_links['menu-solutions_zastosowania:node/10124'] = array(
    'menu_name' => 'menu-solutions',
    'link_path' => 'node/10124',
    'router_path' => 'node/%',
    'link_title' => 'Zastosowania',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'menu-solutions_zastosowania:node/10124',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pl',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ambiente');
  t('Anwendungen');
  t('Aplicaciones');
  t('Applications');
  t('Applicazioni');
  t('Article 1');
  t('Awards');
  t('Branches Mondiales');
  t('CKD');
  t('Careers');
  t('Carrières');
  t('Communauté');
  t('Community');
  t('Comunidad');
  t('Comunità');
  t('Customer Service');
  t('Emplacement');
  t('Environment');
  t('Environnement');
  t('Eğitim');
  t('Formación');
  t('Formation');
  t('Gama De Productos');
  t('Gamma prodotti');
  t('Gamme de Produits');
  t('Gemeinschaft');
  t('Genel Ürün Kataloğu');
  t('Global Branches');
  t('Global Grenar');
  t('Global Ramas');
  t('Global Şubeler');
  t('Globale Rami');
  t('Globale Zweige');
  t('Home');
  t('Innovación');
  t('Innovation');
  t('Innovazione');
  t('Innowacyjność');
  t('Kariyer Fırsatları');
  t('Karriere');
  t('Karriärer');
  t('Key Contacts');
  t('Konum');
  t('La nostra azienda');
  t('Location');
  t('Lokalizacja');
  t('Lösningar');
  t('Lösung');
  t('Medioambiente');
  t('Miljö');
  t('Nagrody');
  t('News');
  t('Notre compagnie');
  t('Nuestra compañía');
  t('O nas');
  t('Our Company');
  t('Performance');
  t('Performances');
  t('Performans');
  t('Plats');
  t('Posizione');
  t('Praca');
  t('Preise');
  t('Premi');
  t('Premios');
  t('Prestanda');
  t('Product Range');
  t('Produktprogramm');
  t('Produktsortiment');
  t('Przegląd produktów');
  t('Rendimiento');
  t('Rozwiązania');
  t('Récompenses');
  t('Samhälle');
  t('Schulung');
  t('Soluciones');
  t('Solutions');
  t('Soluzioni');
  t('Społeczność');
  t('Standort');
  t('Szkolenie');
  t('Tillämpningar');
  t('Topluluk');
  t('Trabajos');
  t('Training');
  t('Ubicación');
  t('Umwelt');
  t('Unser Unternehmen');
  t('Utbildning');
  t('Uygulamalar');
  t('Vårt företag');
  t('Wyniki');
  t('Yenilik');
  t('Zastosowania');
  t('Çevre');
  t('Çözümler');
  t('Ödüller');
  t('Środowisko naturalne');
  t('Światowy Gałęzie');
  t('Şirketimiz');

  return $menu_links;
}
