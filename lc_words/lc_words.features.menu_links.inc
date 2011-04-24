<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function lc_words_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:words
  $menu_links['features:words'] = array(
    'menu_name' => 'features',
    'link_path' => 'words',
    'router_path' => 'words',
    'link_title' => 'Words',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '12',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Words');


  return $menu_links;
}
