<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function hippel_idea_taxonomy_default_vocabularies() {
  return array(
    'idea_tags' => array(
      'name' => 'Idea tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_idea_tags',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
    'voice_tags' => array(
      'name' => 'Voice tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_voice_tags',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}
