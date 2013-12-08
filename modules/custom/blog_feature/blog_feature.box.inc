<?php
/**
 * @file
 * blog_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function blog_feature_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'filter';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Filter Header';
  $box->options = array(
    'body' => array(
      'value' => '<div class="small-header"><p>Filters</p></div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['filter'] = $box;

  return $export;
}
