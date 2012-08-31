<?php
/**
 * @file
 * ct_ordering_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ct_ordering_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ct_ordering_customer content.
  $permissions['create ct_ordering_customer content'] = array(
    'name' => 'create ct_ordering_customer content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: create ct_ordering_food content.
  $permissions['create ct_ordering_food content'] = array(
    'name' => 'create ct_ordering_food content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: create ct_ordering_order content.
  $permissions['create ct_ordering_order content'] = array(
    'name' => 'create ct_ordering_order content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ct_ordering_customer content.
  $permissions['delete any ct_ordering_customer content'] = array(
    'name' => 'delete any ct_ordering_customer content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ct_ordering_food content.
  $permissions['delete any ct_ordering_food content'] = array(
    'name' => 'delete any ct_ordering_food content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ct_ordering_order content.
  $permissions['delete any ct_ordering_order content'] = array(
    'name' => 'delete any ct_ordering_order content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ct_ordering_customer content.
  $permissions['delete own ct_ordering_customer content'] = array(
    'name' => 'delete own ct_ordering_customer content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ct_ordering_food content.
  $permissions['delete own ct_ordering_food content'] = array(
    'name' => 'delete own ct_ordering_food content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ct_ordering_order content.
  $permissions['delete own ct_ordering_order content'] = array(
    'name' => 'delete own ct_ordering_order content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ct_ordering_customer content.
  $permissions['edit any ct_ordering_customer content'] = array(
    'name' => 'edit any ct_ordering_customer content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ct_ordering_food content.
  $permissions['edit any ct_ordering_food content'] = array(
    'name' => 'edit any ct_ordering_food content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ct_ordering_order content.
  $permissions['edit any ct_ordering_order content'] = array(
    'name' => 'edit any ct_ordering_order content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ct_ordering_customer content.
  $permissions['edit own ct_ordering_customer content'] = array(
    'name' => 'edit own ct_ordering_customer content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ct_ordering_food content.
  $permissions['edit own ct_ordering_food content'] = array(
    'name' => 'edit own ct_ordering_food content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ct_ordering_order content.
  $permissions['edit own ct_ordering_order content'] = array(
    'name' => 'edit own ct_ordering_order content',
    'roles' => array(
      0 => '系统管理员',
    ),
    'module' => 'node',
  );

  return $permissions;
}
