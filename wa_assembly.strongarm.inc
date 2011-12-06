<?php
/**
 * @file
 * wa_assembly.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wa_assembly_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_assembly';
  $strongarm->value = 'edit-diff';
  $export['additional_settings__active_tab_assembly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_assembly';
  $strongarm->value = array();
  $export['menu_options_assembly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_assembly';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_assembly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_assembly';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_assembly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_assembly';
  $strongarm->value = '1';
  $export['node_preview_assembly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_assembly';
  $strongarm->value = 0;
  $export['node_submitted_assembly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_assembly_pattern';
  $strongarm->value = 'assemblies/[node:title]';
  $export['pathauto_node_assembly_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_assembly';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_assembly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_assembly';
  $strongarm->value = 0;
  $export['show_diff_inline_assembly'] = $strongarm;

  return $export;
}
