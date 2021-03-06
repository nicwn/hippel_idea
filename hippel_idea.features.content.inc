<?php

/**
 * Implementation of hook_content_default_fields().
 */
function hippel_idea_content_default_fields() {
  $fields = array();

  // Exported field: field_idea_description
  $fields['idea-field_idea_description'] = array(
    'field_name' => 'field_idea_description',
    'type_name' => 'idea',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'trimmed',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-45',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '500',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_idea_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Idea description',
      'weight' => '-1',
      'description' => 'Describe your idea in 500 characters or less. Tell a story about your idea. Why do you think it\'s a good idea?',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_idea_image
  $fields['idea-field_idea_image'] = array(
    'field_name' => 'field_idea_image',
    'type_name' => 'idea',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hippel-idea-thumbnail_linked',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hippel-idea-medium_default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Idea images',
      'weight' => '-3',
      'description' => 'Upload at least one image to show your idea.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_idea_tag
  $fields['idea-field_idea_tag'] = array(
    'field_name' => 'field_idea_tag',
    'type_name' => 'idea',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-44',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '2',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'default_value' => array(
        'field_idea_tag' => array(
          'tids' => array(),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Idea tags',
      'weight' => 0,
      'description' => 'Add up to three tags to help people find your idea.',
      'type' => 'content_taxonomy_hs',
      'module' => 'hs_content_taxonomy',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Idea description');
  t('Idea images');
  t('Idea tags');

  return $fields;
}
