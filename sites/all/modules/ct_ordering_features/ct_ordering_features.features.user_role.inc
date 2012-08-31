<?php
/**
 * @file
 * ct_ordering_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ct_ordering_features_user_default_roles() {
  $roles = array();

  // Exported role: 系统管理员.
  $roles['系统管理员'] = array(
    'name' => '系统管理员',
    'weight' => '2',
  );

  return $roles;
}
