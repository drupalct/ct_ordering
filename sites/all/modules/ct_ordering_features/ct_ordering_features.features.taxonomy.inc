<?php
/**
 * @file
 * ct_ordering_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_ordering_features_taxonomy_default_vocabularies() {
  return array(
    'food_category' => array(
      'name' => '食品分类',
      'machine_name' => 'food_category',
      'description' => '食品分类',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '5',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
