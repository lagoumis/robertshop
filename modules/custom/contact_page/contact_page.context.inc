<?php
/**
 * @file
 * contact_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contact_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1' => 'node/1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-17' => array(
          'module' => 'webform',
          'delta' => 'client-block-17',
          'region' => 'content',
          'weight' => '10',
        ),
        'boxes-contact_details_box' => array(
          'module' => 'boxes',
          'delta' => 'contact_details_box',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-friends_rob' => array(
          'module' => 'boxes',
          'delta' => 'friends_rob',
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
  $export['contact'] = $context;

  return $export;
}
