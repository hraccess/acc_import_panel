<?php
/**
 * @file
 * acc_import_panel.box.inc
 */

/**
 * Implements hook_default_box().
 */
function acc_import_panel_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'acc_import_content';
  $box->plugin_key = 'simple';
  $box->title = 'Humanitarian Access Import Access Incidents';
  $box->description = 'Humanitarian Access Import Access Incidents';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="import/acc_incident_csv_impoter">Import Access Incidents</a></p><p><a href="import/acc_incident_csv_impoter/template">Access Incident Import Tamplet</a></p><p><a href="document/humanitarian-access-incident-import-guidline">Access Incidents Import Guidlines</a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['acc_import_content'] = $box;

  return $export;
}
