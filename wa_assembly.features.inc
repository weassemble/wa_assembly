<?php
/**
 * @file
 * wa_assembly.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wa_assembly_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wa_assembly_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function wa_assembly_node_info() {
  $items = array(
    'assembly' => array(
      'name' => t('Assembly'),
      'base' => 'node_content',
      'description' => t('An Assembly some(where)? in Canada.'),
      'has_title' => '1',
      'title_label' => t('Assembly Name'),
      'help' => '',
    ),
  );
  return $items;
}
