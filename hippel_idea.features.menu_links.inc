<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function hippel_idea_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-idea-grid:ideas
  $menu_links['menu-idea-grid:ideas'] = array(
    'menu_name' => 'menu-idea-grid',
    'link_path' => 'ideas',
    'router_path' => 'ideas',
    'link_title' => 'Highest Rated',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-idea-grid:ideas/active
  $menu_links['menu-idea-grid:ideas/active'] = array(
    'menu_name' => 'menu-idea-grid',
    'link_path' => 'ideas/active',
    'router_path' => 'ideas/active',
    'link_title' => 'Most Active',
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
    'weight' => '0',
    'parent_path' => 'ideas',
  );
  // Exported menu link: menu-idea-grid:ideas/new
  $menu_links['menu-idea-grid:ideas/new'] = array(
    'menu_name' => 'menu-idea-grid',
    'link_path' => 'ideas/new',
    'router_path' => 'ideas/new',
    'link_title' => 'Newest',
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
    'weight' => '0',
    'parent_path' => 'ideas',
  );
  // Exported menu link: menu-idea-list:ideas/active/list
  $menu_links['menu-idea-list:ideas/active/list'] = array(
    'menu_name' => 'menu-idea-list',
    'link_path' => 'ideas/active/list',
    'router_path' => 'ideas/active/list',
    'link_title' => 'Most Active',
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
    'parent_path' => 'ideas/list',
  );
  // Exported menu link: menu-idea-list:ideas/list
  $menu_links['menu-idea-list:ideas/list'] = array(
    'menu_name' => 'menu-idea-list',
    'link_path' => 'ideas/list',
    'router_path' => 'ideas/list',
    'link_title' => 'Highest Rated',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-idea-list:ideas/new/list
  $menu_links['menu-idea-list:ideas/new/list'] = array(
    'menu_name' => 'menu-idea-list',
    'link_path' => 'ideas/new/list',
    'router_path' => 'ideas/new/list',
    'link_title' => 'Newest',
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
    'weight' => '-49',
    'parent_path' => 'ideas/list',
  );
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
  t('Highest Rated');
  t('Ideas');
  t('Most Active');
  t('Newest');


  return $menu_links;
}
