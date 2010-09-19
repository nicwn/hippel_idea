<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function hippel_idea_quicktabs_default_quicktabs() {
  $export = array();
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'hippel_idea_voice_forms';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Hippel Idea (Voice forms)';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'hippel_idea_delta_hippel-idea-question',
      'hide_title' => 1,
      'title' => 'Question',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'hippel_idea_delta_hippel-idea-suggestion',
      'hide_title' => 1,
      'title' => 'Suggestion',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'hippel_idea_delta_hippel-idea-image',
      'hide_title' => 1,
      'title' => 'Image',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'hippel_idea_delta_hippel-idea-link',
      'hide_title' => 1,
      'title' => 'Link',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'Basic';

  $export['hippel_idea_voice_forms'] = $quicktabs;
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'hippel_idea_voices';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Hippel Idea (Voices)';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_1',
      'args' => '%1',
      'get_displays' => 'vdisp_0',
      'title' => 'All',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_3',
      'args' => '%1',
      'get_displays' => 'vdisp_1',
      'title' => 'Questions',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_4',
      'args' => '%1',
      'get_displays' => 'vdisp_2',
      'title' => 'Suggestions',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_5',
      'args' => '%1',
      'get_displays' => 'vdisp_3',
      'title' => 'Images',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'hippel_idea_voices',
      'display' => 'block_6',
      'args' => '%1',
      'get_displays' => 'vdisp_4',
      'title' => 'Links',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Arrows';

  $export['hippel_idea_voices'] = $quicktabs;
  return $export;
}
