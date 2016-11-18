<?php
/**
 * @file
 * video_player_node_with_embedded_playlist.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_player_node_with_embedded_playlist_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_mediafront_default_presets().
 */
function video_player_node_with_embedded_playlist_mediafront_default_presets() {
  $items = array(
    'bookmarked_video' => array(
      'name' => 'bookmarked_video',
      'description' => '',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => 0,
        ),
        'isplaylist' => array(
          0 => 0,
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 10,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.mediafront.org',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 1,
          'timeline_bookmark' => 1,
        ),
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-plugins',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function video_player_node_with_embedded_playlist_node_info() {
  $items = array(
    'video_chapters' => array(
      'name' => t('Video with Chapter Points'),
      'base' => 'node_content',
      'description' => t('This displays an uploaded or linked video and allows you to add bookmarks / chapter points to specific times in the video and label them accordingly.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This displays an uploaded or linked video and allows you to add bookmarks / chapter points to specific times in the video and label them accordingly.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
