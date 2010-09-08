<?php
/**
  * Implementation of hook_form_alter.
  */
function hippel_idea_form_alter(&$form, $form_state, $form_id) {
  switch ($form_id) {
    case 'voice_node_form':
      // print "<pre>"; print_r(array_values($form));print "</pre>";
      $form['#after_build'][] = 'hippel_idea_after_build';
      break;
  }
}

/**
  * Implementation of hook_form_alter.
  */
function hippel_idea_form_idea_node_form_alter(&$form, $form_state) {
  drupal_set_title(t('Submit your !content-type', array('!content-type' => $form['type']['#value'])));
  // Build Breadcrumbs
  $breadcrumb = array();
  $breadcrumb[] = l(t('Home'), '<front>');
  $breadcrumb[] = l(t('Ideas'), 'ideas');

  // Set Breadcrumbs
  drupal_set_breadcrumb($breadcrumb);
}

/**
* Document this.
*/
function hippel_idea_after_build($form, &$form_state) {
   switch ($form['form_id']['#value']) {
     case 'voice_node_form':
      $node = menu_get_object();
      if (empty($node->field_idea_reference)) {
        $form['field_idea_reference']['nid']['nid']['#value'] = $node->nid;
      } 
      $form['field_idea_reference']['#access'] = FALSE;
      $form['revision_information']['#access'] = FALSE;
      break;
    }
  return $form;
}

