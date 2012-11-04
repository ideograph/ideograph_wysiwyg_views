<?php
/**
 * @file
 * ideograph_wysiwyg_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ideograph_wysiwyg_views_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_views_api().
 */
function ideograph_wysiwyg_views_views_api() {
  return array("version" => "3.0");
}
