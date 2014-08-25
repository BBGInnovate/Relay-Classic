<?php
/**
 * @file
 * relay_system.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function relay_system_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:event:Editor'.
  $roles['node:event:Editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'event',
    'name' => 'Editor',
  );

  // Exported OG Role: 'node:event:Managing Reporter'.
  $roles['node:event:Managing Reporter'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'event',
    'name' => 'Managing Reporter',
  );

  // Exported OG Role: 'node:event:Reporter'.
  $roles['node:event:Reporter'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'event',
    'name' => 'Reporter',
  );

  return $roles;
}
