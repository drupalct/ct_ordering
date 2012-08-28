<?php
/**
 * @file
 * ct_ordering.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ct_ordering_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-restaurantadmin.
  $menus['menu-restaurantadmin'] = array(
    'menu_name' => 'menu-restaurantadmin',
    'title' => 'RestaurantAdmin',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('RestaurantAdmin');


  return $menus;
}
