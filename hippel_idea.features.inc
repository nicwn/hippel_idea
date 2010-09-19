<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function hippel_idea_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
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
            'height' => '356',
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
    'image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('An image that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'module' => 'features',
      'description' => t('A link that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'module' => 'features',
      'description' => t('A question that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'suggestion' => array(
      'name' => t('Suggestion'),
      'module' => 'features',
      'description' => t('A suggestion that references an idea.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function hippel_idea_rules_defaults() {
  return array(
    'rules' => array(
      'hippel_idea_1' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Check comment type for new comments',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'hippel_idea' => 'hippel_idea',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'voice' => 'voice',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Voice',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#name' => 'rules_action_custom_php',
            '#settings' => array(
              'code' => 'auto_nodetitle_set_title($node);
node_save($node);',
              'vars' => array(
                '0' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function hippel_idea_views_api() {
  return array(
    'api' => '2',
  );
}
