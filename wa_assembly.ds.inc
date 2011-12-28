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
        0 => 'name',
        1 => 'pathauto',
        2 => 'date',
        3 => 'status',
        4 => 'alias',
        5 => 'revision',
        6 => 'log',
        7 => 'promote',
        8 => 'sticky',
        9 => 'additional_settings',
        10 => 'revision_information',
        11 => 'path',
        12 => 'author',
        13 => 'options',
      ),
      'header' => array(
        0 => 'actions',
        1 => 'submit',
        2 => 'preview',
        3 => 'preview_changes',
        4 => 'delete',
      ),
      'left' => array(
        0 => 'group_assembly_form_details',
        1 => 'title',
        2 => 'field_assembly_location',
        3 => 'field_assembly_location_map',
        4 => 'group_assembly_form_other',
        5 => 'field_assembly_contact_us',
        6 => 'field_assembly_contact_info',
        7 => 'field_assembly_descr_short',
        8 => 'field_assembly_descr_long',
      ),
      'right' => array(
        0 => 'group_assembly_form_top_links',
        1 => 'field_assembly_link_primary',
        2 => 'field_assembly_twitter_hashtag',
        3 => 'group_assembly_form_social_media',
        4 => 'field_assembly_livestream',
        5 => 'field_assembly_links_internal',
        6 => 'field_assembly_links_external',
        7 => 'field_assembly_twitter_links',
        8 => 'field_assembly_facebook',
        9 => 'field_assembly_youtube',
        10 => 'field_assembly_flickr',
        11 => 'field_assembly_google',
      ),
    ),
    'fields' => array(
      'name' => 'footer',
      'pathauto' => 'footer',
      'date' => 'footer',
      'status' => 'footer',
      'alias' => 'footer',
      'actions' => 'header',
      'revision' => 'footer',
      'log' => 'footer',
      'group_assembly_form_details' => 'left',
      'promote' => 'footer',
      'title' => 'left',
      'sticky' => 'footer',
      'group_assembly_form_top_links' => 'right',
      'field_assembly_link_primary' => 'right',
      'field_assembly_twitter_hashtag' => 'right',
      'group_assembly_form_social_media' => 'right',
      'additional_settings' => 'footer',
      'field_assembly_livestream' => 'right',
      'field_assembly_links_internal' => 'right',
      'submit' => 'header',
      'field_assembly_location' => 'left',
      'field_assembly_links_external' => 'right',
      'field_assembly_location_map' => 'left',
      'group_assembly_form_other' => 'left',
      'preview' => 'header',
      'preview_changes' => 'header',
      'field_assembly_contact_us' => 'left',
      'delete' => 'header',
      'field_assembly_contact_info' => 'left',
      'field_assembly_descr_short' => 'left',
      'field_assembly_twitter_links' => 'right',
      'field_assembly_facebook' => 'right',
      'field_assembly_descr_long' => 'left',
      'field_assembly_youtube' => 'right',
      'field_assembly_flickr' => 'right',
      'field_assembly_google' => 'right',
      'revision_information' => 'footer',
      'path' => 'footer',
      'author' => 'footer',
      'options' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|assembly|form'] = $ds_layout;

  return $export;
}
