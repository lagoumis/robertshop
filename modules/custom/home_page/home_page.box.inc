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
      'value' => '<div><img src="/profiles/commerce_kickstart/themes/omega_kickstart/my-images/hat-guy.png" width="150px" height="108px"/><div class="bio-info"><h5>Musician, Teacher, Composer</h5><p>Still no idea what twitter is…</p></div><a href="/about" class="form-submit">Find out more</a>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['home_bio_box'] = $box;

  return $export;
}