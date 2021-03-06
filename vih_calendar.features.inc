<?php
/**
 * @file
 * vih_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_calendar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_calendar_node_info() {
  $items = array(
    'vih_calendar' => array(
      'name' => t('Calender'),
      'base' => 'node_content',
      'description' => t('Used for <em>calendar</em> items for events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
