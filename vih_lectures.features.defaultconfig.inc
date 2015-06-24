<?php
/**
 * @file
 * vih_lectures.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_lectures_defaultconfig_features() {
  return array(
    'vih_lectures' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_lectures_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle vih_lecture'.
  $permissions['create commerce_product entities of bundle vih_lecture'] = array(
    'name' => 'create commerce_product entities of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create vih_lecture content'.
  $permissions['create vih_lecture content'] = array(
    'name' => 'create vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_lectures content'.
  $permissions['create vih_lectures content'] = array(
    'name' => 'create vih_lectures content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_lecture content'.
  $permissions['delete any vih_lecture content'] = array(
    'name' => 'delete any vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_lectures content'.
  $permissions['delete any vih_lectures content'] = array(
    'name' => 'delete any vih_lectures content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_lecture content'.
  $permissions['delete own vih_lecture content'] = array(
    'name' => 'delete own vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_lectures content'.
  $permissions['delete own vih_lectures content'] = array(
    'name' => 'delete own vih_lectures content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_lecture'.
  $permissions['edit any commerce_product entity of bundle vih_lecture'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any vih_lecture content'.
  $permissions['edit any vih_lecture content'] = array(
    'name' => 'edit any vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_lectures content'.
  $permissions['edit any vih_lectures content'] = array(
    'name' => 'edit any vih_lectures content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_lecture'.
  $permissions['edit own commerce_product entities of bundle vih_lecture'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own vih_lecture content'.
  $permissions['edit own vih_lecture content'] = array(
    'name' => 'edit own vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_lectures content'.
  $permissions['edit own vih_lectures content'] = array(
    'name' => 'edit own vih_lectures content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_lecture'.
  $permissions['view any commerce_product entity of bundle vih_lecture'] = array(
    'name' => 'view any commerce_product entity of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_lecture'.
  $permissions['view own commerce_product entities of bundle vih_lecture'] = array(
    'name' => 'view own commerce_product entities of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
