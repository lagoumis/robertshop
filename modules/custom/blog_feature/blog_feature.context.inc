<?php
/**
 * @file
 * blog_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blog_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_archive_pages';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'archive/*' => 'archive/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-filter' => array(
          'module' => 'boxes',
          'delta' => 'filter',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-latest_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'latest_blog_posts-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-blog_filter_terms-block' => array(
          'module' => 'views',
          'delta' => 'blog_filter_terms-block',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-archive-block' => array(
          'module' => 'views',
          'delta' => 'archive-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['blog_archive_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_listing_page';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/15' => 'node/15',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_listing_page-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_listing_page-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-blog_listing_page-block' => array(
          'module' => 'views',
          'delta' => 'blog_listing_page-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'boxes-filter' => array(
          'module' => 'boxes',
          'delta' => 'filter',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-latest_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'latest_blog_posts-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-blog_filter_terms-block' => array(
          'module' => 'views',
          'delta' => 'blog_filter_terms-block',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-archive-block' => array(
          'module' => 'views',
          'delta' => 'archive-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['blog_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_node';
  $context->description = '';
  $context->tag = 'Robert shop';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-filter' => array(
          'module' => 'boxes',
          'delta' => 'filter',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-latest_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'latest_blog_posts-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-blog_filter_terms-block' => array(
          'module' => 'views',
          'delta' => 'blog_filter_terms-block',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-archive-block' => array(
          'module' => 'views',
          'delta' => 'archive-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Robert shop');
  $export['blog_node'] = $context;

  return $export;
}
