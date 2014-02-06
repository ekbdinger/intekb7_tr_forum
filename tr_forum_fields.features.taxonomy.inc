<?php
/**
 * @file
 * tr_forum_fields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tr_forum_fields_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_12' => array(
      'name' => 'Forums',
      'machine_name' => 'vocabulary_12',
      'description' => NULL,
      'hierarchy' => 1,
      'module' => 'forum',
      'weight' => -10,
    ),
  );
}
