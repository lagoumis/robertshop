<?php
/**
 * @file
 * commerce_kickstart_lite_product.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function commerce_kickstart_lite_product_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'digital_sheet_music';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product_display' => 'product_display',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-product_images-block' => array(
          'module' => 'views',
          'delta' => 'product_images-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['digital_sheet_music'] = $context;

  return $export;
}
