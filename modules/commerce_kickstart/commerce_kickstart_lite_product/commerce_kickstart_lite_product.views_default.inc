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
  $view->name = 'digital_music_listing_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Digital music listing page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Written for */
  $handler->display->display_options['fields']['field_written_for']['id'] = 'field_written_for';
  $handler->display->display_options['fields']['field_written_for']['table'] = 'field_data_field_written_for';
  $handler->display->display_options['fields']['field_written_for']['field'] = 'field_written_for';
  $handler->display->display_options['fields']['field_written_for']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_written_for']['label'] = '';
  $handler->display->display_options['fields']['field_written_for']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_written_for']['element_class'] = 'subhead';
  $handler->display->display_options['fields']['field_written_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_written_for']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_written_for']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_written_for']['field_api_classes'] = TRUE;
  /* Field: Commerce Product: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'more-link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Details...';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Product display */
  $handler->display->display_options['filters']['is_product_display']['id'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['table'] = 'node';
  $handler->display->display_options['filters']['is_product_display']['field'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['value'] = '1';

  /* Display: Listing */
  $handler = $view->new_display('block', 'Listing', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Written for */
  $handler->display->display_options['fields']['field_written_for']['id'] = 'field_written_for';
  $handler->display->display_options['fields']['field_written_for']['table'] = 'field_data_field_written_for';
  $handler->display->display_options['fields']['field_written_for']['field'] = 'field_written_for';
  $handler->display->display_options['fields']['field_written_for']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_written_for']['label'] = '';
  $handler->display->display_options['fields']['field_written_for']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_written_for']['alter']['text'] = '<div class="subhead">Written for [field_written_for]</div>';
  $handler->display->display_options['fields']['field_written_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_written_for']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_written_for']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_written_for']['field_api_classes'] = TRUE;
  /* Field: Commerce Product: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_description']['element_class'] = 'no-margin';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'more-link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Details...';

  /* Display: Header */
  $handler = $view->new_display('block', 'Header', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Feature Image */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_type'] = '0';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'music_listing_feature_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_images']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="small-header"><p>Latest Music</p></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Written for */
  $handler->display->display_options['fields']['field_written_for']['id'] = 'field_written_for';
  $handler->display->display_options['fields']['field_written_for']['table'] = 'field_data_field_written_for';
  $handler->display->display_options['fields']['field_written_for']['field'] = 'field_written_for';
  $handler->display->display_options['fields']['field_written_for']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_written_for']['label'] = '';
  $handler->display->display_options['fields']['field_written_for']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_written_for']['alter']['text'] = '<div class="subhead">Written for [field_written_for]</div>';
  $handler->display->display_options['fields']['field_written_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_written_for']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_written_for']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_written_for']['field_api_classes'] = TRUE;
  /* Field: Commerce Product: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="form-submit">[view_node]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Details';
  $export['digital_music_listing_page'] = $view;

  $view = new view();
  $view->name = 'filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Category */
  $handler = $view->new_display('block', 'Category', 'block');
  $export['filters'] = $view;

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
  /* Field: Field: Feature Image */
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="no-margin">Click below to preview the score</p>';
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
