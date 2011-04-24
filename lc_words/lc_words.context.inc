<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function lc_words_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'words_context';
  $context->description = '';
  $context->tag = 'lc';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'words' => 'words',
      ),
    ),
    'node' => array(
      'values' => array(
        'word' => 'word',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'Words' => 'Words',
        'Words:page_1' => 'Words:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Words-block_1' => array(
          'module' => 'views',
          'delta' => 'Words-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'words',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('lc');

  $export['words_context'] = $context;
  return $export;
}
