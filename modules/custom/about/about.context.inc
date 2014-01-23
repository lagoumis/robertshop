<?php
/**
 * @file
 * about.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function about_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/2' => 'node/2',
        'node/37' => 'node/37',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-about-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-about-menu',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-about_headshot' => array(
          'module' => 'boxes',
          'delta' => 'about_headshot',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-about_anecdote' => array(
          'module' => 'boxes',
          'delta' => 'about_anecdote',
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
  $export['about'] = $context;

  return $export;
}
