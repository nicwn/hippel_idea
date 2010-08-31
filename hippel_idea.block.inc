<?php
/**
 * Implementation of hook_block().
 */
function hippel_idea_block($op = 'list', $delta = 0, $edit = array()) {
  switch ($op) {
    case 'list':
      $blocks['hippel-idea-vote'] = array(
        'info' => t('Vote on this idea'),
        'cache' => BLOCK_NO_CACHE,
        'weight' => -100,
        'status' => 1,
        'region' => 'sidebar',
      );
      $blocks['hippel-idea-vote-result'] = array(
        'info' => t('Idea vote results'),
        'cache' => BLOCK_NO_CACHE,
        'weight' => -100,
        'status' => 1,
        'region' => 'lead',
      );
      $blocks['hippel-idea-flag'] = array(
        'info' => t('Star this idea'),
        'cache' => BLOCK_NO_CACHE,
        'weight' => -90,
        'status' => 1,
        'region' => 'sidebar',
      );
      return $blocks;
      break;

    case 'view':
      if (($node = menu_get_object()) && ($node->type == 'idea')) {
        $nid = $node->nid;
        if (($delta == 'hippel-idea-vote') && ($can_edit=user_access('use vote up/down on nodes'))) {
          return array(
            'subject' => t('<none>'),
            'content' => theme('vud_widget', $nid, 'node', 'vote', 'hipfluence', !$can_edit, $widget_message_code),
          );
        }
        if ($delta == 'hippel-idea-vote-result') {
          return array(
            'subject' => t('<none>'),
            'content' => theme('vud_votes', $nid, 'node', 'vote', 'hipfluence'),
            );
        }
        if ($delta == 'hippel-idea-flag') {
          return array (
            'subject' => t('<none>'),
            'content' => flag_create_link('star', $nid),
          );
        }
        break;
      }
      else {
        break;
      }
  }
}