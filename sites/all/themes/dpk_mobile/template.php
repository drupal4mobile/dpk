<?php

/**
 * Changes the default meta content-type tag to the shorter HTML5 version
 */
function dpk_mobile_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

/**
 * Uses RDFa attributes if the RDF module is enabled
 * Lifted from Adaptivetheme for D7, full credit to Jeff Burnz
 * ref: http://drupal.org/node/887600
 */
function dpk_mobile_preprocess_html(&$vars) {
	global $cookie_domain;
	drupal_add_library("system", "jquery.cookie");
	drupal_add_js(array("cookie_domain" => $cookie_domain), "setting");
	
  if (module_exists('rdf')) {
    $vars['doctype'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML+RDFa 1.1//EN">' . "\n";
    $vars['rdf']->version = 'version="HTML+RDFa 1.1"';
    $vars['rdf']->namespaces = $vars['rdf_namespaces'];
    $vars['rdf']->profile = ' profile="' . $vars['grddl_profile'] . '"';
  } else {
    $vars['doctype'] = '<!DOCTYPE html>' . "\n";
    $vars['rdf']->version = '';
    $vars['rdf']->namespaces = '';
    $vars['rdf']->profile = '';
  }
}



/**
 * Override or insert variables into the page template.
 */
function dpk_mobile_preprocess_page(&$vars) {
  // Move secondary tabs into a separate variable.
  $vars['tabs2'] = array(
    '#theme' => 'menu_local_tasks',
    '#secondary' => $vars['tabs']['#secondary'],
  );
  unset($vars['tabs']['#secondary']);

  if (isset($vars['main_menu'])) {
    $vars['primary_nav'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'main-menu'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['primary_nav'] = FALSE;
  }

	if (trim($vars['site_name']) == "") {
		$vars['site_name'] = variable_get("site_name");
	}
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_nav'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'secondary-menu'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['secondary_nav'] = FALSE;
  }



 
	$search = drupal_get_form('search_form', NULL, (isset($searchTerm) ? $searchTerm : ''));
	$search['basic']['keys']['#type'] = "search";
	$search['basic']['keys']['#size'] = "20";
	
	$search['basic']['keys']['#attributes']=array("placeholder" => "search", "autocapitalize" => "off", "autocorrect" => "off");
	//print_r($search);
	
  $vars["search_form"] = drupal_render($search); 
	dpk_mobile_preprocess_search_block_form($vars);


}

/**
 * Changes the search form to use the HTML5 "search" input attribute
 */
function dpk_mobile_preprocess_search_block_form(&$vars) {
  $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
}
