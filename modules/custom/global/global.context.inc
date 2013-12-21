<?php
/**
 * @file
 * global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-login-and-logout' => array(
          'module' => 'menu',
          'delta' => 'menu-login-and-logout',
          'region' => 'branding',
          'weight' => '-34',
        ),
        'views-shopping_cart-block' => array(
          'module' => 'views',
          'delta' => 'shopping_cart-block',
          'region' => 'branding',
          'weight' => '-33',
        ),
        'boxes-logo' => array(
          'module' => 'boxes',
          'delta' => 'logo',
          'region' => 'branding',
          'weight' => '-32',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'header_first',
          'weight' => '-9',
        ),
        'boxes-copyright_box' => array(
          'module' => 'boxes',
          'delta' => 'copyright_box',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['global'] = $context;

  return $export;
}
