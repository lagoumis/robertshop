<?php
/**
 * @file
 * about.box.inc
 */

/**
 * Implements hook_default_box().
 */
function about_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'about_anecdote';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'About anecdote ';
  $box->options = array(
    'body' => array(
      'value' => '<div class="small-header"><p>Fun facts</p></div>
<div class="text-area"><h5>Rob trivia</h5><p class="small-sans-11">Avid supporter of Western bulldogs (despite knowing better)</p><p class="small-sans-11">If everyone has a price, mine is a bucket of chips and a cold beer</p><p class="small-sans-11">Will find any excuse to be outside watering my garden.</p><p class="small-sans-11">What\'s the difference between a viola and a trampoline?<br>You take your shoes off to jump on a trampoline.</p></div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['about_anecdote'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'about_headshot';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'About headshot box';
  $box->options = array(
    'body' => array(
      'value' => '<img  src="/profiles/commerce_kickstart/themes/omega_kickstart/my-images/about-image.jpg" width="220px" height="220px"/><p class="quote">Music expresses that which cannot be said and on which it is impossible to be silent.</p><p><em>～ Victor Hugo</em></p>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['about_headshot'] = $box;

  return $export;
}
