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
      elseif ($delta == 'hippel-idea-vote-result') {
        return array(
          'subject' => t('<none>'),
          'content' => theme('vud_votes', $node->nid, 'node', 'vote', 'hipfluence'),
        );
      }
      elseif ($delta == 'hippel-idea-flag') {
        return array (
          'subject' => t('<none>'),
          'content' => flag_create_link('star', $node->nid),
        );
      }
      else {
        break;
      }
  }
}
