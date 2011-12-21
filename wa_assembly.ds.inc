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
      'left' => array(
        0 => 'field_assembly_link_primary',
        1 => 'field_assembly_location',
        2 => 'group_social_media_links',
        3 => 'field_assembly_links_internal',
        4 => 'field_assembly_twitter_links',
        5 => 'field_assembly_facebook',
        6 => 'field_assembly_livestream',
        7 => 'field_assembly_youtube',
        8 => 'field_assembly_google',
        9 => 'field_assembly_flickr',
      ),
      'middle' => array(
        0 => 'field_assembly_about',
      ),
      'right' => array(
        0 => 'field_assembly_contact_us',
        1 => 'field_assembly_twitter_hashtag',
        2 => 'field_assembly_links_external',
      ),
    ),
    'fields' => array(
      'field_assembly_link_primary' => 'left',
      'field_assembly_location' => 'left',
      'group_social_media_links' => 'left',
      'field_assembly_links_internal' => 'left',
      'field_assembly_about' => 'middle',
      'field_assembly_contact_us' => 'right',
      'field_assembly_twitter_hashtag' => 'right',
      'field_assembly_links_external' => 'right',
      'field_assembly_twitter_links' => 'left',
      'field_assembly_facebook' => 'left',
      'field_assembly_livestream' => 'left',
      'field_assembly_youtube' => 'left',
      'field_assembly_google' => 'left',
      'field_assembly_flickr' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|assembly|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|assembly|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'assembly';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_form';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => FALSE,
    'regions' => array(
      'footer' => array(
        0 => 'pathauto',
        1 => 'name',
        2 => 'date',
        3 => 'revision',
        4 => 'status',
        5 => 'alias',
        6 => 'promote',
        7 => 'sticky',
        8 => 'log',
        9 => 'submit',
        10 => 'preview',
        11 => 'actions',
        12 => 'additional_settings',
        13 => 'revision_information',
        14 => 'path',
        15 => 'author',
        16 => 'options',
      ),
      'left' => array(
        0 => 'title',
        1 => 'field_assembly_type',
        2 => 'field_assembly_location',
        3 => 'field_assembly_link_primary',
        4 => 'field_assembly_twitter_hashtag',
        5 => 'field_assembly_links_internal',
        6 => 'field_assembly_about',
        7 => 'field_assembly_contact_us',
        8 => 'group_assembly_form_social_media',
        9 => 'field_assembly_links_external',
        10 => 'field_assembly_twitter_links',
        11 => 'field_assembly_facebook',
        12 => 'field_assembly_livestream',
        13 => 'field_assembly_youtube',
        14 => 'field_assembly_flickr',
        15 => 'field_assembly_google',
        16 => 'field_assembly_location_map',
      ),
    ),
    'fields' => array(
      'pathauto' => 'footer',
      'name' => 'footer',
      'date' => 'footer',
      'title' => 'left',
      'revision' => 'footer',
      'status' => 'footer',
      'alias' => 'footer',
      'promote' => 'footer',
      'field_assembly_type' => 'left',
      'field_assembly_location' => 'left',
      'sticky' => 'footer',
      'log' => 'footer',
      'field_assembly_link_primary' => 'left',
      'field_assembly_twitter_hashtag' => 'left',
      'field_assembly_links_internal' => 'left',
      'submit' => 'footer',
      'field_assembly_about' => 'left',
      'field_assembly_contact_us' => 'left',
      'group_assembly_form_social_media' => 'left',
      'field_assembly_links_external' => 'left',
      'field_assembly_twitter_links' => 'left',
      'field_assembly_facebook' => 'left',
      'preview' => 'footer',
      'actions' => 'footer',
      'additional_settings' => 'footer',
      'field_assembly_livestream' => 'left',
      'field_assembly_youtube' => 'left',
      'field_assembly_flickr' => 'left',
      'field_assembly_google' => 'left',
      'revision_information' => 'footer',
      'path' => 'footer',
      'author' => 'footer',
      'options' => 'footer',
      'field_assembly_location_map' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|assembly|form'] = $ds_layout;

  return $export;
}
