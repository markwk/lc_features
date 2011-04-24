<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_homepage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:homepage
  $menu_links['features:homepage'] = array(
    'menu_name' => 'features',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Provide homepage area for multimedia + discussions.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-2000',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');


  return $menu_links;
}
