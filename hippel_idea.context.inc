<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function hippel_idea_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'idea';
  $context->description = 'A context for an individual idea.';
  $context->tag = 'Hippel Idea';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'idea' => 'idea',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node_author' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'hippel_idea-hippel-idea-vote-result' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-vote-result',
          'region' => 'lead',
          'weight' => 0,
        ),
        'views-ca97c5b8f4f6f6be233af8f62371da82' => array(
          'module' => 'views',
          'delta' => 'ca97c5b8f4f6f6be233af8f62371da82',
          'region' => 'lead',
          'weight' => 1,
        ),
        'quicktabs-hippel_idea_voice_forms' => array(
          'module' => 'quicktabs',
          'delta' => 'hippel_idea_voice_forms',
          'region' => 'content',
          'weight' => 0,
        ),
        'quicktabs-hippel_idea_voices' => array(
          'module' => 'quicktabs',
          'delta' => 'hippel_idea_voices',
          'region' => 'content',
          'weight' => 1,
        ),
        'hippel_idea-hippel-idea-vote' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-vote',
          'region' => 'right',
          'weight' => 0,
        ),
        'hippel_idea-hippel-idea-flag' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-flag',
          'region' => 'right',
          'weight' => 1,
        ),
        'author_pane-0' => array(
          'module' => 'author_pane',
          'delta' => 0,
          'region' => 'right',
          'weight' => 2,
        ),
        'sharethis-sharethis' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis',
          'region' => 'right',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for an individual idea.');
  t('Hippel Idea');

  $export['idea'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'idea_author';
  $context->description = 'A context for an individual idea.';
  $context->tag = 'Hippel Idea';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'idea' => 'idea',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node_author' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'author',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'hippel_idea-hippel-idea-vote-result' => array(
          'module' => 'hippel_idea',
          'delta' => 'hippel-idea-vote-result',
          'region' => 'lead',
          'weight' => 0,
        ),
        'views-ca97c5b8f4f6f6be233af8f62371da82' => array(
          'module' => 'views',
          'delta' => 'ca97c5b8f4f6f6be233af8f62371da82',
          'region' => 'lead',
          'weight' => 1,
        ),
        'quicktabs-hippel_idea_voices' => array(
          'module' => 'quicktabs',
          'delta' => 'hippel_idea_voices',
          'region' => 'content',
          'weight' => 0,
        ),
        'author_pane-0' => array(
          'module' => 'author_pane',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
        'sharethis-sharethis' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for an individual idea.');
  t('Hippel Idea');

  $export['idea_author'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ideas_grid';
  $context->description = 'A context for the all idea grid views.';
  $context->tag = 'Hippel Idea';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ideas' => 'ideas',
        'ideas/active' => 'ideas/active',
        'ideas/new' => 'ideas/new',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-idea-grid' => array(
          'module' => 'menu',
          'delta' => 'menu-idea-grid',
          'region' => 'lead',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'ideas',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for the all idea grid views.');
  t('Hippel Idea');

  $export['ideas_grid'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ideas_list';
  $context->description = 'A context for the all idea list views.';
  $context->tag = 'Hippel Idea';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ideas/list' => 'ideas/list',
        'ideas/active/list' => 'ideas/active/list',
        'ideas/new/list' => 'ideas/new/list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-idea-list' => array(
          'module' => 'menu',
          'delta' => 'menu-idea-list',
          'region' => 'lead',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'ideas',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for the all idea list views.');
  t('Hippel Idea');

  $export['ideas_list'] = $context;
  return $export;
}
