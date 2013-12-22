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
  $context->name = 'cart';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'cart' => 'cart',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-music_cart' => array(
          'module' => 'boxes',
          'delta' => 'music_cart',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['cart'] = $context;

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
        'views-preview_images-block' => array(
          'module' => 'views',
          'delta' => 'preview_images-block',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'music_listing_page';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/14' => 'node/14',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-75c4c031f413e56d99640f759fce5295' => array(
          'module' => 'views',
          'delta' => '75c4c031f413e56d99640f759fce5295',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-711324f228ef203ef2b5b2cdfb9a6bcb' => array(
          'module' => 'views',
          'delta' => '711324f228ef203ef2b5b2cdfb9a6bcb',
          'region' => 'content',
          'weight' => '-9',
        ),
        'boxes-robs_music' => array(
          'module' => 'boxes',
          'delta' => 'robs_music',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'webform-client-block-18' => array(
          'module' => 'webform',
          'delta' => 'client-block-18',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['music_listing_page'] = $context;

  return $export;
}
