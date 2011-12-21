<?php
/**
 * @file
 * wa_assembly.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wa_assembly_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_assembly_form_social_media|node|assembly|form';
  $field_group->group_name = 'group_assembly_form_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assembly';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media Links',
    'weight' => '8',
    'children' => array(
      0 => 'field_assembly_livestream',
      1 => 'field_assembly_facebook',
      2 => 'field_assembly_youtube',
      3 => 'field_assembly_google',
      4 => 'field_assembly_flickr',
      5 => 'field_assembly_twitter_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_assembly_form_social_media|node|assembly|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media_links|node|assembly|default';
  $field_group->group_name = 'group_social_media_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assembly';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media Links',
    'weight' => '2',
    'children' => array(
      0 => 'field_assembly_livestream',
      1 => 'field_assembly_facebook',
      2 => 'field_assembly_youtube',
      3 => 'field_assembly_google',
      4 => 'field_assembly_flickr',
      5 => 'field_assembly_twitter_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social Media Links',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_social_media_links|node|assembly|default'] = $field_group;

  return $export;
}
