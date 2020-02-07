<?php
/**
 * @file
 * hruser.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hruser_user_default_roles() {
  $roles = array();

  // Exported role: HR user.
  $roles['HR user'] = array(
    'name' => 'HR user',
    'weight' => 2,
  );

  return $roles;
}
