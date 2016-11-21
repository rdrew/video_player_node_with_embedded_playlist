<?php

/**
 * @file
 * Default theme implementation for field collection items.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) field collection item label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-field-collection-item
 *   - field-collection-item-{field_name}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

//create url for this page
global $base_url;
$current_path = $base_url . '/' . current_path();

//the time entered by the user in hh:mm:ss
$time_raw = $content['field_bookmark_time']['#items'][0]['safe_value'];

//time converted to seconds
$time_proc = strtotime("1970-01-01 $time_raw UTC");

//create the bookmark link
$linktext = $content['field_label']['#items'][0]['value'];
$link = l(
	$linktext,
	$current_path,
	array(
		'attributes' => array(
			'class' => 'video_bookmark--link' 
		),
		'query' => array(
			'seek' => $time_proc
		),
	)
);
$build['#attached']['library'][] = array('system', 'drupal.ajax');
?>

<div class="video_bookmark <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<span class="video_bookmark--time"> <?php print render($time_raw); ?> </span>
  <?php print $link ?>
</div>
