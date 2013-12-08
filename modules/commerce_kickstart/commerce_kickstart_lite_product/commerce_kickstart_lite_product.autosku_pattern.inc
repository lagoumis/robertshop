<?php
/**
 * @file
 * commerce_kickstart_lite_product.autosku_pattern.inc
 */

/**
 * Implements hook_default_commerce_autosku_patterns().
 */
function commerce_kickstart_lite_product_default_commerce_autosku_patterns() {
  $export = array();

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'product';
  $commerce_autosku_patterns->pattern = 'ROB[commerce-product:product-id]';
  $commerce_autosku_patterns->advanced = array(
    'update_existing' => 1,
    'hide_sku' => 1,
    'case' => '0',
  );
  $export['product'] = $commerce_autosku_patterns;

  return $export;
}
