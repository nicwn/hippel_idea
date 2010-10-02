<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function hippel_idea_user_default_permissions() {
  $permissions = array();

  // Exported permission: create idea content
  $permissions['create idea content'] = array(
    'name' => 'create idea content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own idea content
  $permissions['edit own idea content'] = array(
    'name' => 'edit own idea content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: see vote up/down node stats
  $permissions['see vote up/down node stats'] = array(
    'name' => 'see vote up/down node stats',
    'roles' => array(),
  );

  // Exported permission: use vote up/down
  $permissions['use vote up/down'] = array(
    'name' => 'use vote up/down',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: use vote up/down on nodes
  $permissions['use vote up/down on nodes'] = array(
    'name' => 'use vote up/down on nodes',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view vote up/down count on nodes
  $permissions['view vote up/down count on nodes'] = array(
    'name' => 'view vote up/down count on nodes',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
