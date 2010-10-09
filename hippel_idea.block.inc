<?php
/**
 * Implementation of hook_block().
 */
function hippel_idea_block($op = 'list', $delta = 0, $edit = array()) {
  switch ($op) {
    case 'list':
      $blocks['hippel-idea-help'] = array(
        'info' => t('Hippel Idea (Help)'),
      );
      $blocks['hippel-idea-submit'] = array(
        'info' => t('Hippel Idea (Submit)'),
      );
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
      switch ($delta) {
      case 'hippel-idea-help':
        return array(
          'subject' => t('<none>'),
          'content' => '<span>Find a product. Influence it. See the products you like become real products.</span>',
        );
      case 'hippel-idea-submit':
        return array(
          'subject' => t('<none>'),
          'content' => l('Submit an Idea', 'node/add/idea'),
        );
        case 'hippel-idea-vote':
          if ($can_vote = user_access('use vote up/down on nodes')) {
            return array(
              'subject' => t('<none>'),
              'content' => theme('vud_widget', $node->nid, 'node', 'vote', 'hipfluence', !$can_vote, $widget_message_code),
              );
          }
        case 'hippel-idea-vote-result':
          return array(
            'subject' => t('<none>'),
            'content' => theme('vud_votes', $node->nid, 'node', 'vote', 'hipfluence'),
          );
        case 'hippel-idea-flag':
          return array (
            'subject' => t('<none>'),
            'content' => flag_create_link('star', $node->nid),
          );
      }
      break;
  }
}
