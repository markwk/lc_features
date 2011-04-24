<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function lc_words_user_default_permissions() {
  $permissions = array();

  // Exported permission: create word content
  $permissions['create word content'] = array(
    'name' => 'create word content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any word content
  $permissions['delete any word content'] = array(
    'name' => 'delete any word content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own word content
  $permissions['delete own word content'] = array(
    'name' => 'delete own word content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any word content
  $permissions['edit any word content'] = array(
    'name' => 'edit any word content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit field_translation
  $permissions['edit field_translation'] = array(
    'name' => 'edit field_translation',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit field_word_def
  $permissions['edit field_word_def'] = array(
    'name' => 'edit field_word_def',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit field_word_image
  $permissions['edit field_word_image'] = array(
    'name' => 'edit field_word_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit field_word_type
  $permissions['edit field_word_type'] = array(
    'name' => 'edit field_word_type',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own word content
  $permissions['edit own word content'] = array(
    'name' => 'edit own word content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: view field_translation
  $permissions['view field_translation'] = array(
    'name' => 'view field_translation',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
  );

  // Exported permission: view field_word_def
  $permissions['view field_word_def'] = array(
    'name' => 'view field_word_def',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
  );

  // Exported permission: view field_word_image
  $permissions['view field_word_image'] = array(
    'name' => 'view field_word_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
  );

  // Exported permission: view field_word_type
  $permissions['view field_word_type'] = array(
    'name' => 'view field_word_type',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
  );

  return $permissions;
}
