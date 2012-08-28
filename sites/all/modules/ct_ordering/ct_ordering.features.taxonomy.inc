<?php
/**
 * @file
 * ct_ordering.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_ordering_taxonomy_default_vocabularies() {
  return array(
    'food_category' => array(
      'name' => '食品分类',
      'machine_name' => 'food_category',
      'description' => '食品分类',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '5',
    ),
  );
}
