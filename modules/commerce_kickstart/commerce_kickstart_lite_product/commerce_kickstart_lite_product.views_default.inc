<?php
/**
 * @file
 * commerce_kickstart_lite_product.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function commerce_kickstart_lite_product_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'audio_samples';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Audio samples';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Audio samples';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Audio samples */
  $handler->display->display_options['fields']['field_audio_samples']['id'] = 'field_audio_samples';
  $handler->display->display_options['fields']['field_audio_samples']['table'] = 'field_data_field_audio_samples';
  $handler->display->display_options['fields']['field_audio_samples']['field'] = 'field_audio_samples';
  $handler->display->display_options['fields']['field_audio_samples']['label'] = '';
  $handler->display->display_options['fields']['field_audio_samples']['element_type'] = '0';
  $handler->display->display_options['fields']['field_audio_samples']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_samples']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_audio_samples']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_samples']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_samples']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_audio_samples']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_audio_samples']['field_api_classes'] = TRUE;
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['audio_samples'] = $view;

  $view = new view();
  $view->name = 'product_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Product: Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Feature Image */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_type'] = '0';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'colorbox_node_style' => 'product_feature_image',
    'colorbox_image_style' => 'product_colorbox_image',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_images']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Click below to preview the score';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Preview images */
  $handler->display->display_options['fields']['field_preview_images']['id'] = 'field_preview_images';
  $handler->display->display_options['fields']['field_preview_images']['table'] = 'field_data_field_preview_images';
  $handler->display->display_options['fields']['field_preview_images']['field'] = 'field_preview_images';
  $handler->display->display_options['fields']['field_preview_images']['label'] = '';
  $handler->display->display_options['fields']['field_preview_images']['element_type'] = '0';
  $handler->display->display_options['fields']['field_preview_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_preview_images']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_preview_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_preview_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_preview_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_preview_images']['settings'] = array(
    'colorbox_node_style' => 'product_preview_images',
    'colorbox_image_style' => 'product_colorbox_image',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_preview_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_preview_images']['field_api_classes'] = TRUE;

  /* Display: Sidebar */
  $handler = $view->new_display('block', 'Sidebar', 'block');
  $export['product_images'] = $view;

  return $export;
}
