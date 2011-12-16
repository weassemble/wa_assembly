<?php
/**
 * @file
 * wa_assembly.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function wa_assembly_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|assembly|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'assembly';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_html5';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_assembly_type',
      ),
      'left' => array(
        0 => 'group_social_media_links',
        1 => 'field_assembly_welcome',
        2 => 'field_assembly_location',
        3 => 'field_assembly_province',
        4 => 'field_assembly_links_internal',
        5 => 'field_assembly_twitter_links',
        6 => 'field_assembly_facebook',
        7 => 'field_assembly_youtube',
        8 => 'field_assembly_google',
        9 => 'field_assembly_flickr',
      ),
      'middle' => array(
        0 => 'field_assembly_about',
      ),
      'right' => array(
        0 => 'field_assembly_contact_us',
        1 => 'field_assembly_livestream',
        2 => 'field_assembly_twitter_hashtag',
        3 => 'field_assembly_links_external',
      ),
    ),
    'fields' => array(
      'field_assembly_type' => 'header',
      'group_social_media_links' => 'left',
      'field_assembly_welcome' => 'left',
      'field_assembly_location' => 'left',
      'field_assembly_province' => 'left',
      'field_assembly_links_internal' => 'left',
      'field_assembly_about' => 'middle',
      'field_assembly_contact_us' => 'right',
      'field_assembly_livestream' => 'right',
      'field_assembly_twitter_hashtag' => 'right',
      'field_assembly_links_external' => 'right',
      'field_assembly_twitter_links' => 'left',
      'field_assembly_facebook' => 'left',
      'field_assembly_youtube' => 'left',
      'field_assembly_google' => 'left',
      'field_assembly_flickr' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|assembly|default'] = $ds_layout;

  return $export;
}
