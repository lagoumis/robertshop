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
<div class="text-area"><h6>Rob general knowledge</h6><p>Avid supporter of Western bulldogs (despite knowing better)</p><p>I HATE yoghurt and bagpipes</p><p>Everyone has a price. Mine is a bucket of chips and a cold beer</p><p>I played the trumpet professionally, but secretly I wished that I had picked the violin.  Its way better :P</p></div>',
      'format' => 'php_code',
    ),
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
      'value' => '<img  src="/profiles/robsims/themes/custom/robsims_theme/images/headshot.png" width="220px" height="220px"/><p class="quote">Music expresses that which cannot be said and on which it is impossible to be silent.</p><p><em>Victor Hugo</em></p>',
      'format' => 'php_code',
    ),
  );
  $export['about_headshot'] = $box;

  return $export;
}
