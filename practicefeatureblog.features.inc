<?php
/**
 * @file
 * practicefeatureblog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function practicefeatureblog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function practicefeatureblog_node_info() {
  $items = array(
    'press_releases' => array(
      'name' => t('Press Releases'),
      'base' => 'node_content',
      'description' => t('Important Announcements '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
