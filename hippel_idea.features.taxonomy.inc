<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function hippel_idea_taxonomy_default_vocabularies() {
  return array(
    'ideatags' => array(
      'name' => 'Idea tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_ideatags',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}