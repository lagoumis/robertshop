<?php
/**
 * @file
 * commerce_kickstart_lite_product.box.inc
 */

/**
 * Implements hook_default_box().
 */
function commerce_kickstart_lite_product_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'music_cart';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Music cart information';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Music Cart</h2><p>To change a product quantity simply enter the desired amount into the input area and click the “update cart” button. When you are ready to purchase, click “checkout”.</p>',
      'format' => 'full_html',
    ),
  );
  $export['music_cart'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'robs_music';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Robs Music Information';
  $box->options = array(
    'body' => array(
      'value' => '<h4>Rob\'s Music</h4><p>Welcome to my music page. &nbsp;This is a list of all my finished pieces. &nbsp;Click on a work to see more information and purchasing details.</p><p>If you have any questions please contact me via my contact form below</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['robs_music'] = $box;

  return $export;
}
