<?php
/**
 * @file
 * commerce_kickstart_lite_product.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function commerce_kickstart_lite_product_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_product|product|default';
  $ds_fieldsetting->entity_type = 'commerce_product';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_written_for' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Written for ',
          'lb-el' => 'span',
          'lb-cl' => 'subhead',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'subhead',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_audio_samples' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Audio Samples',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['commerce_product|product|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function commerce_kickstart_lite_product_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'audio_samples_view';
  $ds_field->label = 'Audio samples view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|audio_samples-block',
    'block_render' => '1',
  );
  $export['audio_samples_view'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function commerce_kickstart_lite_product_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|product|default';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'sku',
        1 => 'commerce_price',
        2 => 'field_images',
        3 => 'title_field',
        4 => 'field_written_for',
        5 => 'field_year_written',
        6 => 'field_format',
        7 => 'field_product_type',
        8 => 'field_length',
        9 => 'field_scored_for',
        10 => 'field_preview_images',
        11 => 'field_description',
        12 => 'field_audio_samples',
      ),
    ),
    'fields' => array(
      'sku' => 'middle',
      'commerce_price' => 'middle',
      'field_images' => 'middle',
      'title_field' => 'middle',
      'field_written_for' => 'middle',
      'field_year_written' => 'middle',
      'field_format' => 'middle',
      'field_product_type' => 'middle',
      'field_length' => 'middle',
      'field_scored_for' => 'middle',
      'field_preview_images' => 'middle',
      'field_description' => 'middle',
      'field_audio_samples' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_sidebars' => 0,
  );
  $export['commerce_product|product|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'title_field',
        1 => 'product:field_written_for',
        2 => 'product:commerce_price',
        3 => 'field_description_display',
        4 => 'product:field_description',
        5 => 'product:field_year_written',
        6 => 'product:field_format',
        7 => 'product:field_length',
        8 => 'product:field_scored_for',
      ),
      'right' => array(
        9 => 'group_add',
        10 => 'product:field_audio_samples',
        11 => 'field_product',
      ),
    ),
    'fields' => array(
      'title_field' => 'middle',
      'product:field_written_for' => 'middle',
      'product:commerce_price' => 'middle',
      'field_description_display' => 'middle',
      'product:field_description' => 'middle',
      'product:field_year_written' => 'middle',
      'product:field_format' => 'middle',
      'product:field_length' => 'middle',
      'product:field_scored_for' => 'middle',
      'group_add' => 'right',
      'product:field_audio_samples' => 'right',
      'field_product' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|product_display|default'] = $ds_layout;

  return $export;
}
