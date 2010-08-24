<?php

/**
  * Implementation of hook_form_alter.
  */
function hippel_idea_form_idea_node_form_alter(&$form, $form_state) {
  drupal_set_title(t("What's your idea?"));

  // Build Breadcrumbs
  $breadcrumb = array();
  $breadcrumb[] = l(t('Home'), '<front>');
  $breadcrumb[] = l(t('My hippel'), 'user');

  // Set Breadcrumbs
  drupal_set_breadcrumb($breadcrumb);
}
