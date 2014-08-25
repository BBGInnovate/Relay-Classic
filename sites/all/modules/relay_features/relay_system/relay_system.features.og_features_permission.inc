<?php
/**
 * @file
 * relay_system.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function relay_system_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:event:add user'
  $permissions['node:event:add user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:event:administer group'
  $permissions['node:event:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:event:approve and deny subscription'
  $permissions['node:event:approve and deny subscription'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:event:create card content'
  $permissions['node:event:create card content'] = array(
    'roles' => array(
      'Editor' => 'Editor',
      'Managing Reporter' => 'Managing Reporter',
      'Reporter' => 'Reporter',
    ),
  );

  // Exported og permission: 'node:event:delete any card content'
  $permissions['node:event:delete any card content'] = array(
    'roles' => array(
      'Editor' => 'Editor',
      'Managing Reporter' => 'Managing Reporter',
    ),
  );

  // Exported og permission: 'node:event:delete own card content'
  $permissions['node:event:delete own card content'] = array(
    'roles' => array(
      'Editor' => 'Editor',
      'Managing Reporter' => 'Managing Reporter',
      'Reporter' => 'Reporter',
    ),
  );

  // Exported og permission: 'node:event:manage members'
  $permissions['node:event:manage members'] = array(
    'roles' => array(
      'Editor' => 'Editor',
    ),
  );

  // Exported og permission: 'node:event:manage permissions'
  $permissions['node:event:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:event:manage roles'
  $permissions['node:event:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:event:subscribe'
  $permissions['node:event:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:event:subscribe without approval'
  $permissions['node:event:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:event:unsubscribe'
  $permissions['node:event:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:event:update any card content'
  $permissions['node:event:update any card content'] = array(
    'roles' => array(
      'Editor' => 'Editor',
    ),
  );

  // Exported og permission: 'node:event:update group'
  $permissions['node:event:update group'] = array(
    'roles' => array(
      'Editor' => 'Editor',
      'Managing Reporter' => 'Managing Reporter',
    ),
  );

  // Exported og permission: 'node:event:update own card content'
  $permissions['node:event:update own card content'] = array(
    'roles' => array(
      'Editor' => 'Editor',
      'Managing Reporter' => 'Managing Reporter',
      'Reporter' => 'Reporter',
    ),
  );

  return $permissions;
}
