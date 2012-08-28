<?php
/**
 * @file
 * ct_ordering.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ct_ordering_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_ordering_node_info() {
  $items = array(
    'ct_ordering_customer' => array(
      'name' => t('CT Ordering Customer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('姓名/称谓'),
      'help' => '',
    ),
    'ct_ordering_food' => array(
      'name' => t('CT Ordering Food'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('食品名称'),
      'help' => '',
    ),
    'ct_ordering_order' => array(
      'name' => t('CT Ordering Order'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('订单号'),
      'help' => '',
    ),
  );
  return $items;
}
