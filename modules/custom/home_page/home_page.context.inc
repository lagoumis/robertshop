<?php
/**
 * @file
 * home_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/13' => 'node/13',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-home_bio_box' => array(
          'module' => 'boxes',
          'delta' => 'home_bio_box',
          'region' => 'content',
          'weight' => '-10',
        ),
        'webform-client-block-18' => array(
          'module' => 'webform',
          'delta' => 'client-block-18',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['home'] = $context;

  return $export;
}
