<?php
/**
 * @file
 * ideograph_wysiwyg_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ideograph_wysiwyg_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:articles
  $menu_links['main-menu:articles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Articles',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');


  return $menu_links;
}
