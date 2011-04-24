<?php

/**
 * Implementation of hook_default_box().
 */
function lc_words_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'words_help';
  $box->plugin_key = 'simple';
  $box->title = 'Word List';
  $box->description = 'Words Help';
  $box->options = array(
    'body' => '<p><strong>Words </strong>is where we share class vocabulary and vote on the best!</p><ul><li>Add your own word.</li><li>And start collecting points!</li></ul>',
    'format' => '3',
  );

  $export['words_help'] = $box;
  return $export;
}
