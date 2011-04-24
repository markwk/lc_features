<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function lc_words_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function lc_words_imagecache_default_presets() {
  $items = array(
    '160x120' => array(
      'presetname' => '160x120',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '80',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function lc_words_node_info() {
  $items = array(
    'word' => array(
      'name' => t('Word'),
      'module' => 'features',
      'description' => t('A <em>word</em> is a term that is definable and translatable. '),
      'has_title' => '1',
      'title_label' => t('Word'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function lc_words_views_api() {
  return array(
    'api' => '2',
  );
}
