<?php
/**
 * @file
 * ideograph_wysiwyg_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ideograph_wysiwyg_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wysiwyw_news';
  $context->description = 'displays for news context';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~articles' => '~articles',
        '~articles/*' => '~articles/*',
        '~<front>' => '~<front>',
        '~about' => '~about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  t('displays for news context');
  $export['wysiwyw_news'] = $context;

  return $export;
}
