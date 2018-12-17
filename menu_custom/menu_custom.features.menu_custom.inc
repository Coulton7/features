<?php
/**
 * @file
 * menu_custom.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_custom_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-about-us.
  $menus['menu-about-us'] = array(
    'menu_name' => 'menu-about-us',
    'title' => 'Our Company - Sub Section Menu',
    'description' => 'Used for the sub sections in core pages, this menu is the coloured strip at the base of the node.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-action-menu.
  $menus['menu-action-menu'] = array(
    'menu_name' => 'menu-action-menu',
    'title' => 'Action Menu',
    'description' => 'Used for the action menu which is located under the main navigation',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-global-product-range.
  $menus['menu-global-product-range'] = array(
    'menu_name' => 'menu-global-product-range',
    'title' => 'Global Product Range',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-locations.
  $menus['menu-locations'] = array(
    'menu_name' => 'menu-locations',
    'title' => 'Location - Sub Section Menu',
    'description' => 'Used for the sub sections in core pages, this menu is the coloured strip at the base of the node.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-national-product-range-menu.
  $menus['menu-national-product-range-menu'] = array(
    'menu_name' => 'menu-national-product-range-menu',
    'title' => 'National Product Range',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-products.
  $menus['menu-products'] = array(
    'menu_name' => 'menu-products',
    'title' => 'Products - Sub Section Menu',
    'description' => 'Used for the sub sections in core pages, this menu is the coloured strip at the base of the node.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-solutions.
  $menus['menu-solutions'] = array(
    'menu_name' => 'menu-solutions',
    'title' => 'Solutions - Sub Section Menu',
    'description' => 'Used for the sub sections in core pages, this menu is the coloured strip at the base of the node.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Action Menu');
  t('Features');
  t('Global Product Range');
  t('Location - Sub Section Menu');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('National Product Range');
  t('Navigation');
  t('Our Company - Sub Section Menu');
  t('Products - Sub Section Menu');
  t('Solutions - Sub Section Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('Used for the action menu which is located under the main navigation');
  t('Used for the sub sections in core pages, this menu is the coloured strip at the base of the node.');
  t('User menu');

  return $menus;
}
