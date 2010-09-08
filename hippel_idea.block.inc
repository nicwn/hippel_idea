<?php
/**
 * Implementation of hook_block().
 */
function hippel_idea_block($op = 'list', $delta = 0, $edit = array()) {
  switch ($op) {
    case 'list':
      $blocks['hippel-idea-vote'] = array(
        'info' => t('Hippel Idea (Vote)'),
        'cache' => BLOCK_NO_CACHE,
      );
      $blocks['hippel-idea-vote-result'] = array(
        'info' => t('Hippel Idea (Vote Result)'),
        'cache' => BLOCK_NO_CACHE,
      );
      $blocks['hippel-idea-flag'] = array(
        'info' => t('Hippel Idea (Star)'),
        'cache' => BLOCK_NO_CACHE,
      );
      $blocks['hippel-idea-voice'] = array(
        'info' => t('Hippel Idea (Your voice)'),
        'cache' => BLOCK_NO_CACHE,
      );
      return $blocks;
      break;

    case 'view':
      $node = menu_get_object();
      if (($delta == 'hippel-idea-vote') && ($can_edit=user_access('use vote up/down on nodes'))) {
        return array(
          'subject' => t('<none>'),
          'content' => theme('vud_widget', $node->nid, 'node', 'vote', 'hipfluence', !$can_edit, $widget_message_code),
        );
      }
      if ($delta == 'hippel-idea-vote-result') {
        return array(
          'subject' => t('<none>'),
          'content' => theme('vud_votes', $node->nid, 'node', 'vote', 'hipfluence'),
          );
      }
      if ($delta == 'hippel-idea-flag') {
        return array (
          'subject' => t('<none>'),
          'content' => flag_create_link('star', $node->nid),
        );
      }
      if ($delta == 'hippel-idea-voice') {
        return hippel_idea_get_block('voice', 'Add your voice');
      }
      break;
  }
}

/**
 * Generate a block containing a node entry form.
 */
function hippel_idea_get_block($type, $subject) {
  if (node_access('create', $type)) {
    // Include page handler for node_add()
    module_load_include('inc', 'node', 'node.pages');
    // Get the title before rendering the form.
    $title = drupal_get_title();
    $form = node_add($type);
    // Restore title, which will have been overridden.
    drupal_set_title($title);
    $node_type = node_get_types('type', $type);
    $help = (!empty($node_type->help) ? '<p>'. filter_xss_admin($node_type->help) .'</p>' : '');
    return array(
      'subject' => t($subject),
      'content' => $help . $form,
    );
  }
}

