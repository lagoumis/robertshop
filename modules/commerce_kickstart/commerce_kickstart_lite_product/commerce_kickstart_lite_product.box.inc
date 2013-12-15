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
  $box->delta = 'robs_music';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Robs Music Information';
  $box->options = array(
    'body' => array(
      'value' => '<h4>Rob\'s Music</h4>
<p>Welcome to my music page. Take a look through all my pieces and  click on  a  work to see purchasing details.</p><p>If you have any questions please contact me via my contact form below</p>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['robs_music'] = $box;

  return $export;
}
