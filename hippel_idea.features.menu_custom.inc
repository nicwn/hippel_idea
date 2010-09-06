<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function hippel_idea_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-idea-grids
  $menus['menu-idea-grids'] = array(
    'menu_name' => 'menu-idea-grids',
    'title' => 'Hippel Idea (Idea Grids)',
    'description' => '',
  );
  // Exported menu: menu-idea-lists
  $menus['menu-idea-lists'] = array(
    'menu_name' => 'menu-idea-lists',
    'title' => 'Hippel Idea (Idea Lists)',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hippel Idea (Idea Grids)');
  t('Hippel Idea (Idea Lists)');


  return $menus;
}
