<?php
/**
 * @file
 * acc_import_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_import_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function acc_import_panel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function acc_import_panel_node_info() {
  $items = array(
    'acc_export_taxonomy_terms' => array(
      'name' => t('Export Taxonomy Terms'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
