<?php

/**
 * Implementation of hook_strongarm().
 */
function hippel_idea_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_voice';
  $strongarm->value = '<?php $terms = taxonomy_node_get_terms_by_vocabulary($node, 1); ?>
<?php foreach ($terms as $term) { ?>
<?php $type = check_plain($term->name); ?>
<?php if ($type == "asking a question"): print "Question"; ?>
<?php elseif ($type == "making a suggestion"): print "Suggestion"; ?>
<?php else: print "Comment"; ?>
<?php endif; ?>
<?php } ?>';

  $export['ant_pattern_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_voice';
  $strongarm->value = 1;

  $export['ant_php_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_voice';
  $strongarm->value = '1';

  $export['ant_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'author_pane_block_display_types';
  $strongarm->value = array(
    'idea' => 'idea',
    'voice' => 0,
    'page' => 0,
    'story' => 0,
  );

  $export['author_pane_block_display_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'author_pane_block_image_path';
  $strongarm->value = '';

  $export['author_pane_block_image_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'author_pane_block_template';
  $strongarm->value = 'author-pane-block';

  $export['author_pane_block_template'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'author_pane_block_user_picture_preset';
  $strongarm->value = '';

  $export['author_pane_block_user_picture_preset'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_idea';
  $strongarm->value = 0;

  $export['comment_anonymous_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_voice';
  $strongarm->value = 0;

  $export['comment_anonymous_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_idea';
  $strongarm->value = '3';

  $export['comment_controls_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_voice';
  $strongarm->value = '3';

  $export['comment_controls_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_idea';
  $strongarm->value = '4';

  $export['comment_default_mode_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_voice';
  $strongarm->value = '4';

  $export['comment_default_mode_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_idea';
  $strongarm->value = '1';

  $export['comment_default_order_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_voice';
  $strongarm->value = '1';

  $export['comment_default_order_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_idea';
  $strongarm->value = '50';

  $export['comment_default_per_page_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_voice';
  $strongarm->value = '50';

  $export['comment_default_per_page_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_idea';
  $strongarm->value = '0';

  $export['comment_form_location_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_voice';
  $strongarm->value = '1';

  $export['comment_form_location_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_idea';
  $strongarm->value = '0';

  $export['comment_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_idea';
  $strongarm->value = '1';

  $export['comment_preview_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_voice';
  $strongarm->value = '1';

  $export['comment_preview_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_idea';
  $strongarm->value = '1';

  $export['comment_subject_field_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_voice';
  $strongarm->value = '0';

  $export['comment_subject_field_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_voice';
  $strongarm->value = '2';

  $export['comment_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_content-taxonomy-field_idea_tag';
  $strongarm->value = array(
    'config_id' => 'content-taxonomy-field_idea_tag',
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'entity_count' => '0',
    'require_entity' => '0',
    'resizable' => '0',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'All selections',
      'limit' => '3',
      'reset_hs' => '1',
    ),
    'editability' => array(
      'status' => 0,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '0',
    ),
  );

  $export['hs_config_content-taxonomy-field_idea_tag'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_idea';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_idea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_voice';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_voice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_override_selector';
  $strongarm->value = TRUE;

  $export['taxonomy_override_selector'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'viewsdisplaytabs_settings';
  $strongarm->value = array(
    'view_enabled' => array(
      'glossary' => 0,
      'hippel_idea_ideas_active' => 0,
      'hippel_idea_ideas_new' => 0,
      'hippel_idea_ideas_top' => 0,
      'hippel_idea_voices' => 1,
    ),
    'view_displays' => array(
      'hippel_idea_voices' => array(
        'block_1' => 'block_1',
        'block_2' => 'block_2',
        'block_3' => 'block_3',
        'block_4' => 'block_4',
      ),
    ),
    'view_displays_default' => array(
      'glossary' => '',
      'hippel_idea_ideas_active' => '',
      'hippel_idea_ideas_new' => '',
      'hippel_idea_ideas_top' => '',
      'hippel_idea_voices' => 'block_1',
    ),
    'view_show_empty' => array(
      'glossary' => 0,
      'hippel_idea_ideas_active' => 0,
      'hippel_idea_ideas_new' => 0,
      'hippel_idea_ideas_top' => 0,
      'hippel_idea_voices' => 1,
    ),
    'view_group_separator' => array(
      'glossary' => '',
      'hippel_idea_ideas_active' => '',
      'hippel_idea_ideas_new' => '',
      'hippel_idea_ideas_top' => '',
      'hippel_idea_voices' => '',
    ),
    'view_throbber' => array(
      'glossary' => 1,
      'hippel_idea_ideas_active' => 1,
      'hippel_idea_ideas_new' => 1,
      'hippel_idea_ideas_top' => 1,
      'hippel_idea_voices' => 1,
    ),
  );

  $export['viewsdisplaytabs_settings'] = $strongarm;
  return $export;
}
