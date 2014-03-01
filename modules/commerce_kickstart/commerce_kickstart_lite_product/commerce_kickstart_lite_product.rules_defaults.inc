<?php
/**
 * @file
 * commerce_kickstart_lite_product.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_kickstart_lite_product_default_rules_configuration() {
  $items = array();
  $items['rules_send_cart_product_files_'] = entity_import('rules_config', '{ "rules_send_cart_product_files_" : {
      "LABEL" : "Send cart product files.",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "php", "mimemail", "commerce_checkout" ],
      "ON" : [ "commerce_checkout_complete" ],
      "DO" : [
        { "mimemail" : {
            "to" : [ "commerce-order:mail" ],
            "subject" : "This is a test email!",
            "body" : "Thanks for the order! Please find your files attached.",
            "attachments" : "\\u003C?php \\r\\nforeach($commerce_order-\\u003Ecommerce_line_items[\\u0027und\\u0027] as $line) {\\r\\n   $line_item = commerce_line_item_load($line[\\u0027line_item_id\\u0027]);\\r\\n   $product_id = $line_item-\\u003Ecommerce_product;\\r\\n  $product = commerce_product_load($product_id[\\u0027und\\u0027][0][\\u0027product_id\\u0027]);\\r\\n  $uri = $product-\\u003Efield_product_pdf[\\u0027und\\u0027][0][\\u0027uri\\u0027];\\r\\n  $url = drupal_realpath($uri);\\r\\n  print $url . \\u0022\\\\n\\u0022;\\r\\n}\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
