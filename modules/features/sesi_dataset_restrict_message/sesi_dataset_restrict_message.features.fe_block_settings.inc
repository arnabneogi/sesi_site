<?php
/**
 * @file
 * sesi_dataset_restrict_message.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sesi_dataset_restrict_message_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-sesi_dataset_message'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'sesi_dataset_message',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'datasets',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mica_subtheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mica_subtheme',
        'weight' => -54,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
