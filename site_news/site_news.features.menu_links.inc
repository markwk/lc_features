<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function site_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:news
  $menu_links['features:news'] = array(
    'menu_name' => 'features',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'news',
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
  t('news');


  return $menu_links;
}
