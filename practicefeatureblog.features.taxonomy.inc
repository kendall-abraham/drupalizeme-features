<?php
/**
 * @file
 * practicefeatureblog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function practicefeatureblog_taxonomy_default_vocabularies() {
  return array(
    'press_releases' => array(
      'name' => 'Press Releases',
      'machine_name' => 'press_releases',
      'description' => 'Press release terms',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
