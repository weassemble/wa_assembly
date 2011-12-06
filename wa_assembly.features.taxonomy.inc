<?php
/**
 * @file
 * wa_assembly.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wa_assembly_taxonomy_default_vocabularies() {
  return array(
    'province' => array(
      'name' => 'Province',
      'machine_name' => 'province',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
