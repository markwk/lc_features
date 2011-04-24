<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function welcome_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'welcome';
  $context->description = 'Manages the LC welcome feature';
  $context->tag = 'lc';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'welcome' => 'welcome',
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
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['welcome'] = $context;
  return $export;
}
