<?php
/**
 * @file
 * sesi_dataset_restrict_message.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function sesi_dataset_restrict_message_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Dataset Restrict Message';
  $fe_block_boxes->format = 'bootstrap';
  $fe_block_boxes->machine_name = 'sesi_dataset_message';
  $fe_block_boxes->body = '<div class="alert alert-block alert-error"> unregistered user can not access detailed dataset  </div>';

  $export['sesi_dataset_message'] = $fe_block_boxes;

  return $export;
}
