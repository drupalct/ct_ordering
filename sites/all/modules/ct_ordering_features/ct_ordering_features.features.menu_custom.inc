<?php
/**
 * @file
 * ct_ordering_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ct_ordering_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ordering-admin.
  $menus['menu-ordering-admin'] = array(
    'menu_name' => 'menu-ordering-admin',
    'title' => '订餐系统',
    'description' => '订餐系统管理导航菜单',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('订餐系统');
  t('订餐系统管理导航菜单');


  return $menus;
}
