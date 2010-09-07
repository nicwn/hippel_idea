<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function hippel_idea_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:ideas
  $menu_links['primary-links:ideas'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'ideas',
    'router_path' => 'ideas',
    'link_title' => 'Ideas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ideas');


  return $menu_links;
}
