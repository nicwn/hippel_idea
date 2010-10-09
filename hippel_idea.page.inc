<?php
/**
 * Implementation of hook_menu().
 */
function hippel_idea_menu() {
  $items = array();

  $items['ideas'] = array(
    'title' => 'Ideas',
    'page callback' => 'hippel_idea_page',
    'access arguments' => array('access content'),
    'weight' => -10,
    'menu_name' => 'primary-links',
  );

  return $items;
}

/**
 * A page callback.
 */
function hippel_idea_page() {
  drupal_set_title('');
  return '';
}

/**
 * Implementation of hook_views_query_alter().
 */
function hippel_idea_views_query_alter(&$view, &$query) {
// fyi, anonymous sessions need a record in the user table of 0 to work at all....
  if ((arg(0) == 'ideas') && (arg(1) == 'newest')) {
    // we'll have to do the less popular red query
    // which's key is [1] (weighted second in the views sort order interface)
    unset($query->orderby[0]);
  }
}
