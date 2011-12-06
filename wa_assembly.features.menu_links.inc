<?php
/**
 * @file
 * wa_assembly.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wa_assembly_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:assemblies
  $menu_links['main-menu:assemblies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'assemblies',
    'router_path' => 'assemblies',
    'link_title' => 'Assemblies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assemblies');


  return $menu_links;
}
