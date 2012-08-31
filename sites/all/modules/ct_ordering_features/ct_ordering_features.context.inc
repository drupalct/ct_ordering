<?php
/**
 * @file
 * ct_ordering_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ct_ordering_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'food_list';
  $context->description = '';
  $context->tag = '菜单列表';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'foods' => 'foods',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ct_restaurant-ct_restaurant_order_form' => array(
          'module' => 'ct_restaurant',
          'delta' => 'ct_restaurant_order_form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('菜单列表');
  $export['food_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = '全局配置';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        '系统管理员' => '系统管理员',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-ordering-admin' => array(
          'module' => 'menu',
          'delta' => 'menu-ordering-admin',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('全局配置');
  $export['global'] = $context;

  return $export;
}
