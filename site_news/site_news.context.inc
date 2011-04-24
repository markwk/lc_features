<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function site_news_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_news';
  $context->description = '';
  $context->tag = 'site wide';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'site_news' => 'site_news',
        'site_news:page_1' => 'site_news:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'news_comments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'news',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('site wide');

  $export['site_news'] = $context;
  return $export;
}
