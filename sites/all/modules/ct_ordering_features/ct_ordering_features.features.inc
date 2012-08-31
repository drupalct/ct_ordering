<?php
/**
 * @file
 * ct_ordering_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_ordering_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ct_ordering_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ct_ordering_features_image_default_styles() {
  $styles = array();

  // Exported image style: food_thumbnail.
  $styles['food_thumbnail'] = array(
    'name' => 'food_thumbnail',
    'effects' => array(
      1 => array(
        'label' => '比例缩放并裁切',
        'help' => '比例缩放将会保持原始图片的宽高比，然后裁切最大边。这通常对创建不拉伸的完美的方形缩略图是最有用的。',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '140',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ct_ordering_features_node_info() {
  $items = array(
    'ct_ordering_customer' => array(
      'name' => t('客户信息'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('姓名/称谓'),
      'help' => '',
    ),
    'ct_ordering_food' => array(
      'name' => t('菜单信息'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('食品名称'),
      'help' => '',
    ),
    'ct_ordering_order' => array(
      'name' => t('订单信息'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('订单号'),
      'help' => '',
    ),
  );
  return $items;
}
