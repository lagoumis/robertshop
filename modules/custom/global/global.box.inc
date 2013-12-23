<?php
/**
 * @file
 * global.box.inc
 */

/**
 * Implements hook_default_box().
 */
function global_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'copyright_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Copyright box';
  $box->options = array(
    'body' => array(
      'value' => '<span class="symbol">©</span><span class="text">Copyright 2013 by Rob Sims</span>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['copyright_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'logo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Logo box';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/profiles/commerce_kickstart/themes/omega_kickstart/my-images/dad-logo.png" width="408px" height="50px" />',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['logo'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'my_account';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'My account header link';
  $box->options = array(
    'body' => array(
      'value' => '<a href="/user">My Account</a>',
      'format' => 'php_code',
    ),
  );
  $export['my_account'] = $box;

  return $export;
}
