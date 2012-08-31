<?php
/**
 * @file
 * ct_ordering_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ct_ordering_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ordering-admin:<front>
  $menu_links['menu-ordering-admin:<front>'] = array(
    'menu_name' => 'menu-ordering-admin',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '首页',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-ordering-admin:ctadmin/customers
  $menu_links['menu-ordering-admin:ctadmin/customers'] = array(
    'menu_name' => 'menu-ordering-admin',
    'link_path' => 'ctadmin/customers',
    'router_path' => 'ctadmin/customers',
    'link_title' => '顾客管理',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-ordering-admin:ctadmin/foods
  $menu_links['menu-ordering-admin:ctadmin/foods'] = array(
    'menu_name' => 'menu-ordering-admin',
    'link_path' => 'ctadmin/foods',
    'router_path' => 'ctadmin/foods',
    'link_title' => '菜单管理',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-ordering-admin:ctadmin/orders
  $menu_links['menu-ordering-admin:ctadmin/orders'] = array(
    'menu_name' => 'menu-ordering-admin',
    'link_path' => 'ctadmin/orders',
    'router_path' => 'ctadmin/orders',
    'link_title' => '订单管理',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-ordering-admin:user/logout
  $menu_links['menu-ordering-admin:user/logout'] = array(
    'menu_name' => 'menu-ordering-admin',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => '退出',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('菜单管理');
  t('订单管理');
  t('退出');
  t('顾客管理');
  t('首页');


  return $menu_links;
}
