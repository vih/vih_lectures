<?php
/**
 * @file
 * vih_lectures.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vih_lectures_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_dc526553-751f-4737-b491-76dd2880aa97';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Lectures',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'vih_lecture' => 'vih_lecture',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_sutro';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dd84605a-f611-41fa-8cd0-5eacc1e4251f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b3ad484d-5864-4509-9577-68844ad939c5';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'sidepicture',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3ad484d-5864-4509-9577-68844ad939c5';
  $display->content['new-b3ad484d-5864-4509-9577-68844ad939c5'] = $pane;
  $display->panels['column1'][0] = 'new-b3ad484d-5864-4509-9577-68844ad939c5';
  $pane = new stdClass();
  $pane->pid = 'new-fca5af4a-4543-423b-af5b-0d439b92fff1';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fca5af4a-4543-423b-af5b-0d439b92fff1';
  $display->content['new-fca5af4a-4543-423b-af5b-0d439b92fff1'] = $pane;
  $display->panels['column2'][0] = 'new-fca5af4a-4543-423b-af5b-0d439b92fff1';
  $pane = new stdClass();
  $pane->pid = 'new-a5ef566e-392f-433b-841c-fea64bd65bcf';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'commerce_cart_add_to_cart_form',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'show_quantity' => 0,
      'default_quantity' => '1',
      'combine' => 1,
      'show_single_product_attributes' => 0,
      'line_item_type' => 'vih_foredrag',
    ),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'Tilmelding til %node:title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'style' => 'boxed',
    ),
    'style' => 'vih_box_highlight',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a5ef566e-392f-433b-841c-fea64bd65bcf';
  $display->content['new-a5ef566e-392f-433b-841c-fea64bd65bcf'] = $pane;
  $display->panels['footer'][0] = 'new-a5ef566e-392f-433b-841c-fea64bd65bcf';
  $pane = new stdClass();
  $pane->pid = 'new-99c8a89c-1079-42af-90f2-bc998180bebe';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'teaser',
      'links' => 0,
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '99c8a89c-1079-42af-90f2-bc998180bebe';
  $display->content['new-99c8a89c-1079-42af-90f2-bc998180bebe'] = $pane;
  $display->panels['footer'][1] = 'new-99c8a89c-1079-42af-90f2-bc998180bebe';
  $pane = new stdClass();
  $pane->pid = 'new-a69d666d-0f57-408a-8048-d53d0ab2977b';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_speaker';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a69d666d-0f57-408a-8048-d53d0ab2977b';
  $display->content['new-a69d666d-0f57-408a-8048-d53d0ab2977b'] = $pane;
  $display->panels['header'][0] = 'new-a69d666d-0f57-408a-8048-d53d0ab2977b';
  $pane = new stdClass();
  $pane->pid = 'new-5a700ba7-a9b6-45bd-82e7-409324161155';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'long',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5a700ba7-a9b6-45bd-82e7-409324161155';
  $display->content['new-5a700ba7-a9b6-45bd-82e7-409324161155'] = $pane;
  $display->panels['header'][1] = 'new-5a700ba7-a9b6-45bd-82e7-409324161155';
  $pane = new stdClass();
  $pane->pid = 'new-447beab5-2d43-42ab-ab17-0b68af37d10a';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '447beab5-2d43-42ab-ab17-0b68af37d10a';
  $display->content['new-447beab5-2d43-42ab-ab17-0b68af37d10a'] = $pane;
  $display->panels['header'][2] = 'new-447beab5-2d43-42ab-ab17-0b68af37d10a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a69d666d-0f57-408a-8048-d53d0ab2977b';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_dc526553-751f-4737-b491-76dd2880aa97'] = $handler;

  return $export;
}
