<?php
/**
 * @file
 * ct_ordering_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_ordering_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_of_customers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Views of Customers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '客户管理';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '更多';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '应用';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重置';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '排序依据';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = '升序';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = '降序';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = '每页条目数';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- 全部 -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = '偏移量';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一页';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 前一页';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一页 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '末页 »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '姓名/称谓';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* 字段: 内容: 电话 */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  /* 字段: 内容: 上次送餐地址 */
  $handler->display->display_options['fields']['field_customer_address']['id'] = 'field_customer_address';
  $handler->display->display_options['fields']['field_customer_address']['table'] = 'field_data_field_customer_address';
  $handler->display->display_options['fields']['field_customer_address']['field'] = 'field_customer_address';
  /* 字段: 内容: 订单详情 */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '备注信息';
  /* 排序标准: 内容: 发布日期 */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_ordering_customer' => 'ct_ordering_customer',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '姓名/称谓';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* 字段: 内容: 电话 */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  /* 字段: 内容: 上次送餐地址 */
  $handler->display->display_options['fields']['field_customer_address']['id'] = 'field_customer_address';
  $handler->display->display_options['fields']['field_customer_address']['table'] = 'field_data_field_customer_address';
  $handler->display->display_options['fields']['field_customer_address']['field'] = 'field_customer_address';
  /* 字段: 内容: 订单详情 */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '备注信息';
  /* 字段: 内容: 删除链接 */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* 字段: 内容: 编辑链接 */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* 字段: 全局: 自定义文本 */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '操作';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node]    [delete_node]';
  $handler->display->display_options['path'] = 'ctadmin/customers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '顾客管理';
  $handler->display->display_options['menu']['name'] = 'menu-restaurantadmin';
  $translatables['views_of_customers'] = array(
    t('Master'),
    t('客户管理'),
    t('更多'),
    t('应用'),
    t('重置'),
    t('排序依据'),
    t('升序'),
    t('降序'),
    t('每页条目数'),
    t('- 全部 -'),
    t('偏移量'),
    t('« 第一页'),
    t('‹ 前一页'),
    t('下一页 ›'),
    t('末页 »'),
    t('姓名/称谓'),
    t('电话'),
    t('上次送餐地址'),
    t('备注信息'),
    t('Page'),
    t('操作'),
    t('[edit_node]    [delete_node]'),
  );
  $export['views_of_customers'] = $view;

  $view = new view();
  $view->name = 'views_of_foods';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Views of Foods';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '菜单';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '更多';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '应用';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重置';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '排序依据';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = '升序';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = '降序';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = '每页条目数';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- 全部 -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = '偏移量';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一页';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 前一页';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一页 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '末页 »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 图片 */
  $handler->display->display_options['fields']['field_food_image']['id'] = 'field_food_image';
  $handler->display->display_options['fields']['field_food_image']['table'] = 'field_data_field_food_image';
  $handler->display->display_options['fields']['field_food_image']['field'] = 'field_food_image';
  $handler->display->display_options['fields']['field_food_image']['label'] = '';
  $handler->display->display_options['fields']['field_food_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_food_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_food_image']['settings'] = array(
    'image_style' => 'food_thumbnail',
    'image_link' => '',
  );
  /* 字段: 内容: 价格 */
  $handler->display->display_options['fields']['field_food_price']['id'] = 'field_food_price';
  $handler->display->display_options['fields']['field_food_price']['table'] = 'field_data_field_food_price';
  $handler->display->display_options['fields']['field_food_price']['field'] = 'field_food_price';
  $handler->display->display_options['fields']['field_food_price']['label'] = '￥';
  $handler->display->display_options['fields']['field_food_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_food_price']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_food_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_food_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* 排序标准: 内容: 发布日期 */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_ordering_food' => 'ct_ordering_food',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 标题 */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '标题';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: 内容: 分类 (field_food_category)分类 (field_food_category) */
  $handler->display->display_options['filters']['field_food_category_tid']['id'] = 'field_food_category_tid';
  $handler->display->display_options['filters']['field_food_category_tid']['table'] = 'field_data_field_food_category';
  $handler->display->display_options['filters']['field_food_category_tid']['field'] = 'field_food_category_tid';
  $handler->display->display_options['filters']['field_food_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['operator_id'] = 'field_food_category_tid_op';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['label'] = '分类';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['operator'] = 'field_food_category_tid_op';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['identifier'] = 'field_food_category_tid';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_food_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_food_category_tid']['vocabulary'] = 'food_category';
  $handler->display->display_options['filters']['field_food_category_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 图片 */
  $handler->display->display_options['fields']['field_food_image']['id'] = 'field_food_image';
  $handler->display->display_options['fields']['field_food_image']['table'] = 'field_data_field_food_image';
  $handler->display->display_options['fields']['field_food_image']['field'] = 'field_food_image';
  $handler->display->display_options['fields']['field_food_image']['label'] = '';
  $handler->display->display_options['fields']['field_food_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_food_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_food_image']['settings'] = array(
    'image_style' => 'food_thumbnail',
    'image_link' => '',
  );
  /* 字段: 内容: 价格 */
  $handler->display->display_options['fields']['field_food_price']['id'] = 'field_food_price';
  $handler->display->display_options['fields']['field_food_price']['table'] = 'field_data_field_food_price';
  $handler->display->display_options['fields']['field_food_price']['field'] = 'field_food_price';
  $handler->display->display_options['fields']['field_food_price']['label'] = '￥';
  $handler->display->display_options['fields']['field_food_price']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_food_price']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_food_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_food_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* 字段: 内容: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div><span class="num-minus">-</span><span class="food-order" fid="[nid]" f_price="[field_food_price]" f_name="[title]">1</span><span class="num-plus">+</span></div>
<div class="add-to-cart">加入订单</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_ordering_food' => 'ct_ordering_food',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'foods';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Foods';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '菜单管理';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = '每页条目数';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- 全部 -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = '偏移量';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一页';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 前一页';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一页 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '末页 »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '菜名';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* 字段: 内容: 图片 */
  $handler->display->display_options['fields']['field_food_image']['id'] = 'field_food_image';
  $handler->display->display_options['fields']['field_food_image']['table'] = 'field_data_field_food_image';
  $handler->display->display_options['fields']['field_food_image']['field'] = 'field_food_image';
  $handler->display->display_options['fields']['field_food_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_food_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* 字段: 内容: 分类 */
  $handler->display->display_options['fields']['field_food_category']['id'] = 'field_food_category';
  $handler->display->display_options['fields']['field_food_category']['table'] = 'field_data_field_food_category';
  $handler->display->display_options['fields']['field_food_category']['field'] = 'field_food_category';
  $handler->display->display_options['fields']['field_food_category']['label'] = '';
  $handler->display->display_options['fields']['field_food_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_food_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_food_category']['type'] = 'taxonomy_term_reference_plain';
  /* 字段: 内容: 订单详情 */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '60',
  );
  /* 字段: 全局: 自定义文本 */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '菜品信息';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>分类：[field_food_category]</div>
<div>简介：[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* 字段: 内容: 价格 */
  $handler->display->display_options['fields']['field_food_price']['id'] = 'field_food_price';
  $handler->display->display_options['fields']['field_food_price']['table'] = 'field_data_field_food_price';
  $handler->display->display_options['fields']['field_food_price']['field'] = 'field_food_price';
  $handler->display->display_options['fields']['field_food_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* 字段: 内容: 编辑链接 */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* 字段: 内容: 删除链接 */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* 字段: 全局: 自定义文本 */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '操作';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[edit_node]    [delete_node]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_ordering_food' => 'ct_ordering_food',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 标题 */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '菜名';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: 内容: 分类 (field_food_category)分类 (field_food_category) */
  $handler->display->display_options['filters']['field_food_category_tid']['id'] = 'field_food_category_tid';
  $handler->display->display_options['filters']['field_food_category_tid']['table'] = 'field_data_field_food_category';
  $handler->display->display_options['filters']['field_food_category_tid']['field'] = 'field_food_category_tid';
  $handler->display->display_options['filters']['field_food_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['operator_id'] = 'field_food_category_tid_op';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['label'] = '分类';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['operator'] = 'field_food_category_tid_op';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['identifier'] = 'field_food_category_tid';
  $handler->display->display_options['filters']['field_food_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_food_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_food_category_tid']['vocabulary'] = 'food_category';
  $handler->display->display_options['filters']['field_food_category_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'ctadmin/foods';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '菜单管理';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-restaurantadmin';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['views_of_foods'] = array(
    t('Master'),
    t('菜单'),
    t('更多'),
    t('应用'),
    t('重置'),
    t('排序依据'),
    t('升序'),
    t('降序'),
    t('每页条目数'),
    t('- 全部 -'),
    t('偏移量'),
    t('« 第一页'),
    t('‹ 前一页'),
    t('下一页 ›'),
    t('末页 »'),
    t('￥'),
    t('标题'),
    t('分类'),
    t('Page'),
    t('<div><span class="num-minus">-</span><span class="food-order" fid="[nid]" f_price="[field_food_price]" f_name="[title]">1</span><span class="num-plus">+</span></div>
<div class="add-to-cart">加入订单</div>'),
    t('菜单管理'),
    t('菜名'),
    t('图片'),
    t('菜品信息'),
    t('<div>分类：[field_food_category]</div>
<div>简介：[body]</div>'),
    t('价格'),
    t('操作'),
    t('[edit_node]    [delete_node]'),
  );
  $export['views_of_foods'] = $view;

  $view = new view();
  $view->name = 'views_of_orders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Views of Orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '订单管理';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '更多';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '应用';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重置';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '排序依据';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = '升序';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = '降序';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = '每页条目数';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- 全部 -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = '偏移量';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一页';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 前一页';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一页 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '末页 »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* 排序标准: 内容: 发布日期 */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_ordering_order' => 'ct_ordering_order',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '订单号';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* 字段: 内容: 顾客信息 */
  $handler->display->display_options['fields']['field_order_customerinfo']['id'] = 'field_order_customerinfo';
  $handler->display->display_options['fields']['field_order_customerinfo']['table'] = 'field_data_field_order_customerinfo';
  $handler->display->display_options['fields']['field_order_customerinfo']['field'] = 'field_order_customerinfo';
  $handler->display->display_options['fields']['field_order_customerinfo']['alter']['nl2br'] = TRUE;
  /* 字段: 内容: 订单详情 */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '订单信息';
  /* 字段: 内容: 订单状态 */
  $handler->display->display_options['fields']['field_order_status']['id'] = 'field_order_status';
  $handler->display->display_options['fields']['field_order_status']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['fields']['field_order_status']['field'] = 'field_order_status';
  /* 字段: 内容: 编辑链接 */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* 字段: 内容: 删除链接 */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* 字段: 全局: 自定义文本 */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '操作';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node]    [delete_node]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_ordering_order' => 'ct_ordering_order',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 内容: 标题 */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '订单号';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: 内容: 订单状态 (field_order_status)订单状态 (field_order_status) */
  $handler->display->display_options['filters']['field_order_status_value']['id'] = 'field_order_status_value';
  $handler->display->display_options['filters']['field_order_status_value']['table'] = 'field_data_field_order_status';
  $handler->display->display_options['filters']['field_order_status_value']['field'] = 'field_order_status_value';
  $handler->display->display_options['filters']['field_order_status_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_order_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_order_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_status_value']['expose']['operator_id'] = 'field_order_status_value_op';
  $handler->display->display_options['filters']['field_order_status_value']['expose']['label'] = '订单状态';
  $handler->display->display_options['filters']['field_order_status_value']['expose']['operator'] = 'field_order_status_value_op';
  $handler->display->display_options['filters']['field_order_status_value']['expose']['identifier'] = 'field_order_status_value';
  $handler->display->display_options['filters']['field_order_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: 内容: 发布日期 */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = '订餐时间';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: 内容: 顾客信息 (field_order_customerinfo)顾客信息 (field_order_customerinfo) */
  $handler->display->display_options['filters']['field_order_customerinfo_value']['id'] = 'field_order_customerinfo_value';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['table'] = 'field_data_field_order_customerinfo';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['field'] = 'field_order_customerinfo_value';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_customerinfo_value']['expose']['operator_id'] = 'field_order_customerinfo_value_op';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['expose']['label'] = '客户信息';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['expose']['operator'] = 'field_order_customerinfo_value_op';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['expose']['identifier'] = 'field_order_customerinfo_value';
  $handler->display->display_options['filters']['field_order_customerinfo_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'ctadmin/orders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '订单管理';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-restaurantadmin';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['views_of_orders'] = array(
    t('Master'),
    t('订单管理'),
    t('更多'),
    t('应用'),
    t('重置'),
    t('排序依据'),
    t('升序'),
    t('降序'),
    t('每页条目数'),
    t('- 全部 -'),
    t('偏移量'),
    t('« 第一页'),
    t('‹ 前一页'),
    t('下一页 ›'),
    t('末页 »'),
    t('标题'),
    t('Page'),
    t('订单号'),
    t('顾客信息'),
    t('订单信息'),
    t('订单状态'),
    t('操作'),
    t('[edit_node]    [delete_node]'),
    t('订餐时间'),
    t('客户信息'),
  );
  $export['views_of_orders'] = $view;

  return $export;
}
