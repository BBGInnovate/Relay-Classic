<?php
/**
 * @file
 * relay_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function relay_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_card|node|card|default';
  $field_group->group_name = 'group_article_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'card';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Article Card',
    'weight' => '7',
    'children' => array(
      0 => 'field_card_article_introduction',
      1 => 'field_read_more_link',
      2 => 'field_author',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Article Card',
      'instance_settings' => array(
        'classes' => '',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_article_card|node|card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_card|node|card|form';
  $field_group->group_name = 'group_article_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Article Card',
    'weight' => '6',
    'children' => array(
      0 => 'field_card_article_introduction',
      1 => 'field_read_more_link',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Article Card',
      'instance_settings' => array(
        'classes' => '',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_article_card|node|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_fetured_tweet|node|card|default';
  $field_group->group_name = 'group_card_fetured_tweet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'card';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Tweet',
    'weight' => '6',
    'children' => array(
      0 => 'field_card_featured_tweet',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Featured Tweet',
      'instance_settings' => array(
        'classes' => '',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_card_fetured_tweet|node|card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_fetured_tweet|node|card|form';
  $field_group->group_name = 'group_card_fetured_tweet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Tweet',
    'weight' => '5',
    'children' => array(
      0 => 'field_card_featured_tweet',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Featured Tweet',
      'instance_settings' => array(
        'classes' => '',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_card_fetured_tweet|node|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_producer_message|node|card|default';
  $field_group->group_name = 'group_card_producer_message';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'card';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Producer Message',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_card_editors_name',
      2 => 'field_editor_s_email_address',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Producer Message',
      'instance_settings' => array(
        'classes' => '',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_card_producer_message|node|card|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_producer_message|node|card|form';
  $field_group->group_name = 'group_card_producer_message';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editor Message',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_card_editors_name',
      2 => 'field_editor_s_email_address',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Editor Message',
      'instance_settings' => array(
        'classes' => 'group-card-producer-message field-group-html5',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_card_producer_message|node|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_email_messages|node|card|form';
  $field_group->group_name = 'group_email_messages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Email Messages',
    'weight' => '17',
    'children' => array(
      0 => 'field_email_from',
      1 => 'field_email_name',
      2 => 'field_email_subject',
      3 => 'field_email_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-email-messages field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_email_messages|node|card|form'] = $field_group;

  return $export;
}
