<?php
/**
 * @file
 * vih_lectures.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function vih_lectures_commerce_line_item_default_types() {
  $items = array(
    'vih_foredrag' => array(
      'name' => 'VIH Foredrag',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add product');

  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function vih_lectures_commerce_product_default_types() {
  $items = array(
    'vih_lecture' => array(
      'type' => 'vih_lecture',
      'name' => 'Foredrag',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_lectures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_lectures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_lectures_node_info() {
  $items = array(
    'vih_lecture' => array(
      'name' => t('Lecture'),
      'base' => 'node_content',
      'description' => t('Use <em>lecture</em> for events where the registrant can pay online.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_lectures' => array(
      'name' => t('Lecture calendar'),
      'base' => 'node_content',
      'description' => t('Use <em>lecture calendar</em> to create a small pamphlet with all the chosen lectures.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_partner' => array(
      'name' => t('Lecture Partner'),
      'base' => 'node_content',
      'description' => t('Use <em>partner</em> to describe who we are working together with to create e.g. the lectures.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
