<?php
/**
* Implements hook_views_default_views().
**/
function wwex_shipments_by_date_views_default_views() {
	
	$files = file_scan_directory(drupal_get_path('module', 'wwex_shipments_by_date'). '/views', '/.view/');
	$views = array();

	foreach ($files as $filepath => $file) {
		require $filepath;
		if (isset($view)) {
			$views[$view->name] = $view;
		}
	}

	return $views;
}

