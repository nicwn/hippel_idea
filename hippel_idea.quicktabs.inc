<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function hippel_idea_quicktabs_default_quicktabs() {
  $export = array();
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'ideas';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Ideas';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_hippel_idea_ideas-block_1',
      'hide_title' => 1,
      'title' => 'Highest Rated',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_hippel_idea_ideas-block_2',
      'hide_title' => 1,
      'title' => 'Newest',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'default';

  $export['ideas'] = $quicktabs;
  return $export;
}
