<?php
/**
 * @file
 * contact_page.box.inc
 */

/**
 * Implements hook_default_box().
 */
function contact_page_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_details_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact details box';
  $box->options = array(
    'body' => array(
      'value' => '<div class="small-header"><p>Contact details</p></div>
<div class="text-area">
<h4>Robert Sims</h4><p class="subhead">Based in Melbourne</p>

<img src="/profiles/commerce_kickstart/themes/omega_kickstart/my-images/email-icon.png" width="44px" height="38px"/><p class="text">Preferred form of contact</p><p class="small-sans-11 margin-bottom-20">Fill out your details in the contact form to email Rob</p>

<img src="/profiles/commerce_kickstart/themes/omega_kickstart/my-images/phone-icon.png" width="47px" height="38px"/><p class="text">Currently not available</p><p class="small-sans-11">If you prefer to talk over the phone, please email me your number and I will call you</p>

</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['contact_details_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'friends_rob';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Friends of rob';
  $box->options = array(
    'body' => array(
      'value' => '<div class="small-header"><p>Friends of Rob</p></div>
<div class="text-area">
<h6 class="no-margin"><a href="http://www.ericklay.com/">Eric Klay</a></h6><p class="margin-bottom-20 small-sans-11">Musician (trumpet player)</p><h6 class="no-margin"><a href="http://www.move.com.au/artist/anthony-pope">Anthony Pope</a></h6 class="no-margin"><p class="margin-bottom-20 small-sans-11">Musician (trumpet player)</p><h6 class="no-margin"><a href="http://www.mso.com.au/">MSO</a></h6><p class="margin-bottom-20 small-sans-11">Melbourne symphony orchestra</p></div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['friends_rob'] = $box;

  return $export;
}
