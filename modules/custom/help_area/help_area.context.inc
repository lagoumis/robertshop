<?php
/**
 * @file
 * help_area.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function help_area_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'help';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'help_page' => 'help_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-help-topics' => array(
          'module' => 'menu',
          'delta' => 'menu-help-topics',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['help'] = $context;

  return $export;
}
