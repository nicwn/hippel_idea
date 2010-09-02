<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function hippel_idea_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function hippel_idea_imagecache_default_presets() {
  $items = array(
    'hippel-idea-medium' => array(
      'presetname' => 'hippel-idea-medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '460',
            'height' => '335',
          ),
        ),
      ),
    ),
    'hippel-idea-thumbnail' => array(
      'presetname' => 'hippel-idea-thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '120',
            'height' => '80',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function hippel_idea_node_info() {
  $items = array(
    'idea' => array(
      'name' => t('Idea'),
      'module' => 'features',
      'description' => t('An idea submitted by a user.'),
      'has_title' => '1',
      'title_label' => t('Idea title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('You have an idea. What will you call it? What does it look like? Why do you think other people should be interested in your idea? Name your idea, show it and describe it. After you submit your idea, other people will be able to vote on it, ask questions and make suggestions. If enough people like your idea, we\'ll make it a reality and you\'ll share the rewards for your innovation.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function hippel_idea_views_api() {
  return array(
    'api' => '2',
  );
}
