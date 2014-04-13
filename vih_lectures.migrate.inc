<?php

/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */

class VIHLecturesProduct extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import lectures from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'vih_lecture')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_lectures') . '/import/lectures_product.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'vih_lecture');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');
    $this->addFieldMapping('commerce_stock', 'stock_quantity');
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('price', 'Price');
    $columns[3] = array('stock_status', 'Stock status');
    $columns[4] = array('stock_quantity', 'Stock quantity');

    return $columns;
  }

  function prepareRow($row) {
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class VIHLecturesNode extends VIHMigration {

  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Import lecture nodes.');
    $this->dependencies = array('VIHLecturesProduct');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_lectures') . '/import/lectures.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('vih_lecture');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');
    $this->addFieldMapping('field_location', 'location');
    $this->addFieldMapping('field_speaker', 'speaker');
    $this->addFieldMapping('field_date', 'date_from');
    $this->addFieldMapping('field_date:to', 'date_to');
    $this->addFieldMapping('field_open_registration', 'open');

    // Featured image
    $this->addFieldMapping('field_picture', 'featured_image');
    $this->addFieldMapping('field_picture:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_picture:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_lectures') . '/import/images');

    // Connect the products
    $this->addFieldMapping('field_product', 'skus');
  }

  public function prepareRow($row) {
    $products = array();
    foreach(explode(', ', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('body', 'Body');
    $columns[3] = array('speaker', 'Speaker');
    $columns[4] = array('date_from', 'Date From');
    $columns[5] = array('date_to', 'Date To');
    $columns[6] = array('location', 'Location');
    //$columns[5] = array('product', 'Product');
    $columns[7] = array('featured_image', 'Picture');
    $columns[8] = array('open', 'Open');
    $columns[9] = array('sku', 'SKU');
    return $columns;
  }
}
