<?php
/**
 * @file
 * wa_assembly.rel.inc
 */

/**
 * Implements hook_rel_build_info().
 */
function wa_assembly_rel_build_info() {
  $export = array();

  $rel = new stdClass;
  $rel->api_version = 1;
  $rel->build_id = 'assembly_node_form';
  $rel->label = 'assembly_node_form';
  $rel->entity_type = 'node';
  $rel->bundle = 'assembly';
  $rel->view_mode = 'form';
  $rel->context = 'form';
  $rel->path = 'admin/structure/types/manage/assembly/fields';
  $rel->elements = array(
    'title' => array(
      'owner' => 'drupal',
      'label' => 'Assembly Name',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => -5,
      'element_type' => 'textfield',
    ),
    'additional_settings' => array(
      'owner' => 'rel',
      'label' => 'Additional settings',
      'parent' => '',
      'group_info' => array(
        'format_type' => 'tabs',
        'format_settings' => array(),
        'label' => 'Vertical tabs group',
        'description' => 'This fieldgroup renders child groups in its own vertical tabs wrapper.',
        'instance_settings' => array(
          'classes' => '',
        ),
      ),
      'weight' => 99,
      'element_type' => 'vertical_tabs',
    ),
    'revision_information' => array(
      'owner' => 'rel',
      'label' => 'Revision information',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'node-form-revision-information',
          ),
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertical tab',
        'description' => 'This fieldgroup renders the content in a fieldset, part of vertical tabs group.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 20,
      'element_type' => 'fieldset',
    ),
    'revision' => array(
      'owner' => 'rel',
      'label' => 'Create new revision',
      'parent' => 'revision_information',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'checkbox',
    ),
    'log' => array(
      'owner' => 'rel',
      'label' => 'Revision log message',
      'parent' => 'revision_information',
      'group_info' => FALSE,
      'weight' => 1,
      'element_type' => 'textarea',
    ),
    'author' => array(
      'owner' => 'rel',
      'label' => 'Authoring information',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'node-form-author',
          ),
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertical tab',
        'description' => 'This fieldgroup renders the content in a fieldset, part of vertical tabs group.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 90,
      'element_type' => 'fieldset',
    ),
    'name' => array(
      'owner' => 'rel',
      'label' => 'Authored by',
      'parent' => 'author',
      'group_info' => FALSE,
      'weight' => -1,
      'element_type' => 'textfield',
    ),
    'date' => array(
      'owner' => 'rel',
      'label' => 'Authored on',
      'parent' => 'author',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'textfield',
    ),
    'options' => array(
      'owner' => 'rel',
      'label' => 'Publishing options',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'node-form-options',
          ),
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertical tab',
        'description' => 'This fieldgroup renders the content in a fieldset, part of vertical tabs group.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 95,
      'element_type' => 'fieldset',
    ),
    'status' => array(
      'owner' => 'rel',
      'label' => 'Published',
      'parent' => 'options',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'checkbox',
    ),
    'promote' => array(
      'owner' => 'rel',
      'label' => 'Promoted to front page',
      'parent' => 'options',
      'group_info' => FALSE,
      'weight' => 1,
      'element_type' => 'checkbox',
    ),
    'sticky' => array(
      'owner' => 'rel',
      'label' => 'Sticky at top of lists',
      'parent' => 'options',
      'group_info' => FALSE,
      'weight' => 2,
      'element_type' => 'checkbox',
    ),
    'actions' => array(
      'owner' => 'rel',
      'label' => 'Actions',
      'parent' => '',
      'group_info' => array(
        'format_type' => 'div',
        'format_settings' => array(
          'formatter' => 'open',
          'instance_settings' => array(
            'show_label' => FALSE,
          ),
        ),
        'label' => 'Div',
        'description' => 'This fieldgroup renders the inner content in a simple div with the titel as legend.',
        'format_types' => array(
          0 => 'open',
          1 => 'collapsible',
          2 => 'collapsed',
        ),
        'instance_settings' => array(
          'description' => '',
          'show_label' => 1,
          'label_element' => 'h3',
          'effect' => 'none',
          'speed' => 'fast',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'open',
      ),
      'weight' => 100,
      'element_type' => 'actions',
    ),
    'submit' => array(
      'owner' => 'rel',
      'label' => 'Save',
      'parent' => 'actions',
      'group_info' => FALSE,
      'weight' => 5,
      'element_type' => 'submit',
    ),
    'preview' => array(
      'owner' => 'rel',
      'label' => 'Preview',
      'parent' => 'actions',
      'group_info' => FALSE,
      'weight' => 10,
      'element_type' => 'submit',
    ),
    'field_assembly_type' => array(
      'owner' => 'drupal',
      'label' => 'Field assembly type',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '2',
      'element_type' => 'container',
    ),
    'path' => array(
      'owner' => 'drupal',
      'label' => 'URL path settings',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'path-form',
          ),
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertical tab',
        'description' => 'This fieldgroup renders the content in a fieldset, part of vertical tabs group.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 30,
      'element_type' => 'fieldset',
    ),
    'alias' => array(
      'owner' => 'rel',
      'label' => 'URL alias',
      'parent' => 'path',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'textfield',
    ),
    'pathauto' => array(
      'owner' => 'rel',
      'label' => 'Generate automatic URL alias',
      'parent' => 'path',
      'group_info' => FALSE,
      'weight' => -1,
      'element_type' => 'checkbox',
    ),
  );
  $rel->duplicate = array();
  $export['assembly_node_form'] = $rel;

  return $export;
}