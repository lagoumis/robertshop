<?php
/**
 * @file
 * home_page.box.inc
 */

/**
 * Implements hook_default_box().
 */
function home_page_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_bio_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Home page Bio box';
  $box->options = array(
    'body' => array(
      'value' => '<div><div class="bio-info"><h4>Looking for an original work?</h4><p>Contact Rob to request a commissioned piece.</p></div><a href="node/37" class="large-button">Find out more</a>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['home_bio_box'] = $box;

  return $export;
}
