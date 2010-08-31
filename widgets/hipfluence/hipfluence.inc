<?php
// $Id$

/**
 * @file
 * Hipfluence Widget.
 */

/**
 * Implementation of hook_vud_widgets(). (Specialized)
 */
function hippel_idea_hipfluence_vud_widgets() {
  return array(
    'title' => t('Vote on this'),
    'widget template' => 'widget',
    'votes template' => 'votes',
  );
}
