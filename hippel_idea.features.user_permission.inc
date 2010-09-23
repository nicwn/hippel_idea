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

  // Exported permission: create image content
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create link content
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create question content
  $permissions['create question content'] = array(
    'name' => 'create question content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create suggestion content
  $permissions['create suggestion content'] = array(
    'name' => 'create suggestion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create voice content
  $permissions['create voice content'] = array(
    'name' => 'create voice content',
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

  // Exported permission: use gravatar
  $permissions['use gravatar'] = array(
    'name' => 'use gravatar',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: use share this
  $permissions['use share this'] = array(
    'name' => 'use share this',
    'roles' => array(
      '0' => 'authenticated user',
    ),
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
