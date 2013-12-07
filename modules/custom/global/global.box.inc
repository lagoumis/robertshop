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
      'value' => '<span class="symbol">©</span><span class="text">Copyright Rob Sims 2013</span>',
      'format' => 'php_code',
    ),
  );
  $export['copyright_box'] = $box;

  return $export;
}
