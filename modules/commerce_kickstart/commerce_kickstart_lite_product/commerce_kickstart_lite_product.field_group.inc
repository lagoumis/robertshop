<?php
/**
 * @file
 * commerce_kickstart_lite_product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function commerce_kickstart_lite_product_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add|node|product_display|default';
  $field_group->group_name = 'group_add';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Purchase Music',
    'weight' => '10',
    'children' => array(
      0 => 'field_product',
      1 => 'product:commerce_price',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Purchase Music',
      'instance_settings' => array(
        'classes' => 'group-add field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_add|node|product_display|default'] = $field_group;

  return $export;
}
