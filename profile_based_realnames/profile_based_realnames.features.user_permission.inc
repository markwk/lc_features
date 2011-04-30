<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function profile_based_realnames_user_default_permissions() {
  $permissions = array();

  // Exported permission: use realname
  $permissions['use realname'] = array(
    'name' => 'use realname',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
