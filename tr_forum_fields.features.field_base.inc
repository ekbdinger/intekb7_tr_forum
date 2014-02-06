<?php
/**
 * @file
 * tr_forum_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tr_forum_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'comment_body'
  $field_bases['comment_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'comment',
    ),
    'field_name' => 'comment_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_forum_attachment'
  $field_bases['field_forum_attachment'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_forum_attachment',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_forum_pp'
  $field_bases['field_forum_pp'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_forum_pp',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'addit_content' => 0,
        'admin_content' => 0,
        'ba_doc' => 0,
        'ba_news' => 0,
        'csc' => 0,
        'definition' => 0,
        'dv' => 0,
        'forum' => 0,
        'internal' => 0,
        'item_key' => 0,
        'link_content_type' => 0,
        'multichoice' => 0,
        'page' => 0,
        'panel' => 0,
        'pm_doc' => 0,
        'pm_news' => 0,
        'ppic_program' => 0,
        'primary_page_content' => 'primary_page_content',
        'prod_mgmt_news' => 0,
        'quiz' => 0,
        'story' => 0,
        'support_news' => 0,
        'to_be_reviewed' => 0,
        'train_supp_issue' => 0,
        'truefalse' => 0,
        'video_embed' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(
          0 => '',
        ),
        'display_name' => 'default',
        'view_name' => '--',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
    'type_name' => 'forum',
  );

  // Exported field_base: 'taxonomy_forums'
  $field_bases['taxonomy_forums'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxonomy_forums',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_12',
          'parent' => 0,
        ),
      ),
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'upload'
  $field_bases['upload'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'upload',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'default_file' => 0,
      'display_default' => 1,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
