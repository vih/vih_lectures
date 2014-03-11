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
      'metatag_config_default' => 'metatag_config_default',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_metatag_config_default().
 */
function vih_lectures_defaultconfig_metatag_config_default() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'node';
  $config->config = array(
    'title' => array(
      'value' => '[node:title] | [site:name]',
    ),
    'description' => array(
      'value' => '[node:summary]',
    ),
    'og:title' => array(
      'value' => '[node:title]',
    ),
    'og:description' => array(
      'value' => '[node:summary]',
    ),
    'twitter:card' => array(
      'value' => 'summary',
    ),
    'twitter:description' => array(
      'value' => '[node:summary]',
    ),
    'twitter:title' => array(
      'value' => '[node:title]',
    ),
  );
  $export['node'] = $config;

  return $export;
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
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create vih_lecture content'.
  $permissions['create vih_lecture content'] = array(
    'name' => 'create vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_lecture content'.
  $permissions['delete any vih_lecture content'] = array(
    'name' => 'delete any vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_lecture content'.
  $permissions['delete own vih_lecture content'] = array(
    'name' => 'delete own vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_lecture'.
  $permissions['edit any commerce_product entity of bundle vih_lecture'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any vih_lecture content'.
  $permissions['edit any vih_lecture content'] = array(
    'name' => 'edit any vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_lecture'.
  $permissions['edit own commerce_product entities of bundle vih_lecture'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own vih_lecture content'.
  $permissions['edit own vih_lecture content'] = array(
    'name' => 'edit own vih_lecture content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_lecture'.
  $permissions['view any commerce_product entity of bundle vih_lecture'] = array(
    'name' => 'view any commerce_product entity of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_lecture'.
  $permissions['view own commerce_product entities of bundle vih_lecture'] = array(
    'name' => 'view own commerce_product entities of bundle vih_lecture',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
