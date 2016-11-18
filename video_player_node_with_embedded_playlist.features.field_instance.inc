<?php
/**
 * @file
 * video_player_node_with_embedded_playlist.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function video_player_node_with_embedded_playlist_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_play_location-field_bookmark_time'.
  $field_instances['field_collection_item-field_play_location-field_bookmark_time'] = array(
    'bundle' => 'field_play_location',
    'default_value' => array(
      0 => array(
        'value' => '00:00:00',
      ),
    ),
    'deleted' => 0,
    'description' => 'This needs to be in HH:MM:SS format or it will not work.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_bookmark_time',
    'label' => 'Bookmark Time',
    'required' => 1,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_play_location-field_label'.
  $field_instances['field_collection_item-field_play_location-field_label'] = array(
    'bundle' => 'field_play_location',
    'default_value' => array(
      0 => array(
        'value' => 'My 1st Bookmark',
      ),
    ),
    'deleted' => 0,
    'description' => 'Title of the bookmark',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label',
    'label' => 'Bookmark Text',
    'required' => 1,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-video_chapters-field_play_location'.
  $field_instances['node-video_chapters-field_play_location'] = array(
    'bundle' => 'video_chapters',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add Video Bookmark',
          'delete' => 'Delete',
          'description' => 1,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_play_location',
    'label' => 'Video Bookmarks',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-video_chapters-field_video_link'.
  $field_instances['node-video_chapters-field_video_link'] = array(
    'bundle' => 'video_chapters',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Paste in a link to an existing video. This could be from any islandora collection or from youtube etc.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafront',
        'settings' => array(
          'preset' => 'bookmarked_video',
        ),
        'type' => 'mediafront_player',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_link',
    'label' => 'Link to existing video',
    'required' => 0,
    'settings' => array(
      'mediafront' => array(
        'custom' => '',
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-video_chapters-field_video_upload'.
  $field_instances['node-video_chapters-field_video_upload'] = array(
    'bundle' => 'video_chapters',
    'deleted' => 0,
    'description' => 'Choose and upload a video from your device',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_upload',
    'label' => 'Upload a video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4 m4v mov flv f4v ogg ogv wmv vp6 vp5 mpg avi mpeg mp3 webm',
      'max_filesize' => '',
      'mediafront' => array(
        'custom' => '',
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bookmark Text');
  t('Bookmark Time');
  t('Choose and upload a video from your device');
  t('Link to existing video');
  t('Paste in a link to an existing video. This could be from any islandora collection or from youtube etc.');
  t('This needs to be in HH:MM:SS format or it will not work.');
  t('Title of the bookmark');
  t('Upload a video');
  t('Video Bookmarks');

  return $field_instances;
}
