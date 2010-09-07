<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function hippel_idea_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-idea-grid
  $menus['menu-idea-grid'] = array(
    'menu_name' => 'menu-idea-grid',
    'title' => 'Hippel Idea (Idea Grid)',
    'description' => '',
  );
  // Exported menu: menu-idea-list
  $menus['menu-idea-list'] = array(
    'menu_name' => 'menu-idea-list',
    'title' => 'Hippel Idea (Idea List)',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hippel Idea (Idea Grid)');
  t('Hippel Idea (Idea List)');


  return $menus;
}
