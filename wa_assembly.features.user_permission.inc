<?php
/**
 * @file
 * wa_assembly.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wa_assembly_user_default_permissions() {
  $permissions = array();

  // Exported permission: create assembly content
  $permissions['create assembly content'] = array(
    'name' => 'create assembly content',
    'roles' => array(),
  );

  // Exported permission: delete any assembly content
  $permissions['delete any assembly content'] = array(
    'name' => 'delete any assembly content',
    'roles' => array(),
  );

  // Exported permission: delete own assembly content
  $permissions['delete own assembly content'] = array(
    'name' => 'delete own assembly content',
    'roles' => array(),
  );

  // Exported permission: edit any assembly content
  $permissions['edit any assembly content'] = array(
    'name' => 'edit any assembly content',
    'roles' => array(),
  );

  // Exported permission: edit own assembly content
  $permissions['edit own assembly content'] = array(
    'name' => 'edit own assembly content',
    'roles' => array(),
  );

  return $permissions;
}
