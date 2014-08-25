<?php
/**
 * @file
 * relay_system.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function relay_system_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 6,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 5,
  );

  // Exported role: Managing Reporter.
  $roles['Managing Reporter'] = array(
    'name' => 'Managing Reporter',
    'weight' => 4,
  );

  // Exported role: Registered.
  $roles['Registered'] = array(
    'name' => 'Registered',
    'weight' => 2,
  );

  // Exported role: Reporter.
  $roles['Reporter'] = array(
    'name' => 'Reporter',
    'weight' => 3,
  );

  return $roles;
}
