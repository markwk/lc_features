<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_homepage_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_homepage';
  $context->description = 'Manages the Eduglu homepage feature';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'homepage' => 'homepage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-0' => array(
          'module' => 'user',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-recent_site_comments-block' => array(
          'module' => 'views',
          'delta' => 'recent_site_comments-block',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_media-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_media-block_1',
          'region' => 'pre_content',
          'weight' => 0,
        ),
        'views-featured_images-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_images-block_1',
          'region' => 'pre_content',
          'weight' => 1,
        ),
        'views-recent_site_discussions-block_1' => array(
          'module' => 'views',
          'delta' => 'recent_site_discussions-block_1',
          'region' => 'pre_content',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Manages the Eduglu homepage feature');
  t('eduglu');

  $export['eduglu_homepage'] = $context;
  return $export;
}
