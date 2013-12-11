<?php
/**
 * @file
 * acc_import_panel.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acc_import_panel_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_import_taxonomies';
  $context->description = 'To provide a single page for the export of db parameters and import of nodes';
  $context->tag = 'Access';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'access/import_db_parm' => 'access/import_db_parm',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-acc_import_content' => array(
          'module' => 'boxes',
          'delta' => 'acc_import_content',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-727e40cf19bacdbe6816bb3106cb0645' => array(
          'module' => 'views',
          'delta' => '727e40cf19bacdbe6816bb3106cb0645',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');
  t('To provide a single page for the export of db parameters and import of nodes');
  $export['acc_import_taxonomies'] = $context;

  return $export;
}
