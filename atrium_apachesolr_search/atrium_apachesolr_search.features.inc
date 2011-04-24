<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_apachesolr_search_context_default_contexts() {
  module_load_include('inc', 'atrium_apachesolr_search', 'atrium_apachesolr_search.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_apachesolr_search_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_apachesolr_search_ctools_plugin_api() {
  module_load_include('inc', 'atrium_apachesolr_search', 'atrium_apachesolr_search.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_apachesolr_search_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function atrium_apachesolr_search_strongarm() {
  module_load_include('inc', 'atrium_apachesolr_search', 'atrium_apachesolr_search.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_apachesolr_search_strongarm', $args);
}
