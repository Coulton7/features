<?php
/**
 * @file
 * user_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_role_user_default_roles() {
  $roles = array();

  // Exported role: HR user.
  $roles['HR user'] = array(
    'name' => 'HR user',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 8,
  );

  // Exported role: contributor user.
  $roles['contributor user'] = array(
    'name' => 'contributor user',
    'weight' => 4,
  );

  // Exported role: editor user.
  $roles['editor user'] = array(
    'name' => 'editor user',
    'weight' => 6,
  );

  // Exported role: moderator user.
  $roles['moderator user'] = array(
    'name' => 'moderator user',
    'weight' => 5,
  );

  // Exported role: publisher user.
  $roles['publisher user'] = array(
    'name' => 'publisher user',
    'weight' => 7,
  );

  // Exported role: translator user.
  $roles['translator user'] = array(
    'name' => 'translator user',
    'weight' => 3,
  );

  return $roles;
}
