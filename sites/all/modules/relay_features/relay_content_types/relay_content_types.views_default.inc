<?php
/**
 * @file
 * relay_content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function relay_content_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'card_review_and_publish';
  $view->description = 'Used by Administrators and Editors to manage Relay Cards. Card list can be filtered.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage Cards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Card Review & Publish For Reporter Role';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    6 => '6',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_card_type' => 'field_card_type',
    'title' => 'title',
    'field_card_headline' => 'field_card_headline',
    'field_card_upload_image' => 'field_card_upload_image',
    'field_card_upload_video' => 'field_card_upload_video',
    'field_live_video_report' => 'field_live_video_report',
    'field_card_upload_audio' => 'field_card_upload_audio',
    'field_card_article_introduction' => 'field_card_article_introduction',
    'field_author' => 'field_author',
    'field_email_body' => 'field_email_body',
    'body' => 'body',
    'field_card_description' => 'field_card_description',
    'field_card_featured_tweet' => 'field_card_featured_tweet',
    'status' => 'status',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_card_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_headline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_upload_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_upload_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_live_video_report' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_upload_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_article_introduction' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_featured_tweet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Below is a list of cards that you can review, edit and publish. Use the drop down option s at the top to filter cards as needed.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Card Type */
  $handler->display->display_options['fields']['field_card_type']['id'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['fields']['field_card_type']['field'] = 'field_card_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_card_headline']['id'] = 'field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['table'] = 'field_data_field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['field'] = 'field_card_headline';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_card_upload_image']['id'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['table'] = 'field_data_field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['field'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_image']['type'] = 'media';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_card_upload_video']['id'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['table'] = 'field_data_field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['field'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_card_upload_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Live Stream Embed Code */
  $handler->display->display_options['fields']['field_live_video_report']['id'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['table'] = 'field_data_field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['field'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['label'] = 'Live Video';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_card_upload_audio']['id'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['table'] = 'field_data_field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['field'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_audio']['type'] = 'media';
  /* Field: Content: Article Intro */
  $handler->display->display_options['fields']['field_card_article_introduction']['id'] = 'field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['table'] = 'field_data_field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['field'] = 'field_card_article_introduction';
  /* Field: Content: Author(s) Names */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_email_body']['id'] = 'field_email_body';
  $handler->display->display_options['fields']['field_email_body']['table'] = 'field_data_field_email_body';
  $handler->display->display_options['fields']['field_email_body']['field'] = 'field_email_body';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_card_description']['id'] = 'field_card_description';
  $handler->display->display_options['fields']['field_card_description']['table'] = 'field_data_field_card_description';
  $handler->display->display_options['fields']['field_card_description']['field'] = 'field_card_description';
  /* Field: Content: Featured Tweet */
  $handler->display->display_options['fields']['field_card_featured_tweet']['id'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['table'] = 'field_data_field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['field'] = 'field_card_featured_tweet';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Import Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'card' => 'card',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Event ';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Manage Cards */
  $handler = $view->new_display('page', 'Manage Cards', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Cards';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'node-popup';
  $handler->display->display_options['field_language'] = 'ur';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_card_headline' => 'field_card_headline',
    'field_card_upload_video' => 'field_card_upload_video',
    'field_card_upload_image' => 'field_card_upload_image',
    'field_card_featured_tweet' => 'field_card_featured_tweet',
    'field_card_upload_audio' => 'field_card_upload_audio',
    'field_live_video_report' => 'field_live_video_report',
    'status' => 'status',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_card_headline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_card_upload_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_card_upload_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_card_featured_tweet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_card_upload_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_live_video_report' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['rel'] = 'lightframe[|width:920px; height:450px;]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_card_headline']['id'] = 'field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['table'] = 'field_data_field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['field'] = 'field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['hide_empty'] = TRUE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Card Type */
  $handler->display->display_options['fields']['field_card_type']['id'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['fields']['field_card_type']['field'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/y - g:i a';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_card_upload_image']['id'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['table'] = 'field_data_field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['field'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_card_upload_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_card_upload_image']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_card_upload_video']['id'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['table'] = 'field_data_field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['field'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_card_upload_video']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  /* Field: Content: Live Stream Embed Code */
  $handler->display->display_options['fields']['field_live_video_report']['id'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['table'] = 'field_data_field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['field'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['label'] = 'Live Video';
  $handler->display->display_options['fields']['field_live_video_report']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_live_video_report']['hide_empty'] = TRUE;
  /* Field: Content: Featured Tweet */
  $handler->display->display_options['fields']['field_card_featured_tweet']['id'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['table'] = 'field_data_field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['field'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_card_featured_tweet']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_card_featured_tweet']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_card_upload_audio']['id'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['table'] = 'field_data_field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['field'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_card_upload_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_audio']['type'] = 'media';
  $handler->display->display_options['fields']['field_card_upload_audio']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Event (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Event';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'card' => 'card',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Card Type (field_card_type) */
  $handler->display->display_options['filters']['field_card_type_value']['id'] = 'field_card_type_value';
  $handler->display->display_options['filters']['field_card_type_value']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['filters']['field_card_type_value']['field'] = 'field_card_type_value';
  $handler->display->display_options['filters']['field_card_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_card_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_card_type_value']['expose']['operator_id'] = 'field_card_type_value_op';
  $handler->display->display_options['filters']['field_card_type_value']['expose']['label'] = 'Card type';
  $handler->display->display_options['filters']['field_card_type_value']['expose']['operator'] = 'field_card_type_value_op';
  $handler->display->display_options['filters']['field_card_type_value']['expose']['identifier'] = 'field_card_type_value';
  $handler->display->display_options['filters']['field_card_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published content';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Pin Card (field_pin_card) */
  $handler->display->display_options['filters']['field_pin_card_value']['id'] = 'field_pin_card_value';
  $handler->display->display_options['filters']['field_pin_card_value']['table'] = 'field_data_field_pin_card';
  $handler->display->display_options['filters']['field_pin_card_value']['field'] = 'field_pin_card_value';
  $handler->display->display_options['filters']['field_pin_card_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pin_card_value']['expose']['operator_id'] = 'field_pin_card_value_op';
  $handler->display->display_options['filters']['field_pin_card_value']['expose']['label'] = 'Card Pinned';
  $handler->display->display_options['filters']['field_pin_card_value']['expose']['operator'] = 'field_pin_card_value_op';
  $handler->display->display_options['filters']['field_pin_card_value']['expose']['identifier'] = 'field_pin_card_value';
  $handler->display->display_options['filters']['field_pin_card_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'card-review';
  $handler->display->display_options['menu']['title'] = 'Manage Cards';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['card_review_and_publish'] = array(
    t('Master'),
    t('Card Review & Publish For Reporter Role'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Below is a list of cards that you can review, edit and publish. Use the drop down option s at the top to filter cards as needed.'),
    t('Displaying @start - @end of @total'),
    t('Card Type'),
    t('Title'),
    t('Headline'),
    t('Image'),
    t('Video'),
    t('Live Video'),
    t('Audio'),
    t('Article Intro'),
    t('Author(s) Names'),
    t('Body'),
    t('Description'),
    t('Featured Tweet'),
    t('Published'),
    t('Import Date'),
    t('edit'),
    t('Content'),
    t('Event '),
    t('Manage Cards'),
    t('Language'),
    t('Created'),
    t('Event'),
    t('Card type'),
    t('Published content'),
    t('Card Pinned'),
  );
  $export['card_review_and_publish'] = $view;

  $view = new view();
  $view->name = 'event_card';
  $view->description = 'Main view for displaying cards as a Relay event.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Card Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default (This option is for views slideshow cycle, it is not used for views_slideshow ddblock)',
    'module' => 'views_slideshow_ddblock',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_card_article_introduction' => 0,
    'field_card_upload_audio' => 0,
    'field_card_type' => 0,
    'field_card_featured_tweet' => 0,
    'field_card_upload_image' => 0,
    'field_live_video_report' => 0,
    'field_card_poll' => 0,
    'body' => 0,
    'field_card_upload_video' => 0,
    'field_card_type_1' => 0,
    'created' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_card_type_1' => 'field_card_type_1',
    'created' => 'created',
    'field_card_article_introduction' => 0,
    'field_card_upload_audio' => 0,
    'field_card_type' => 0,
    'field_card_featured_tweet' => 0,
    'field_card_upload_image' => 0,
    'field_live_video_report' => 0,
    'field_card_poll' => 0,
    'body' => 0,
    'field_card_upload_video' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollRight';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '500';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => '',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => '',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => '',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => '',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => '',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'default',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'content_container' => array(
      'container' => 'div.slide',
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '500',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'left',
        'pager_event' => 'click',
        'pager_disable_click' => 1,
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 0,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 0,
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_card_upload_image']['id'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['table'] = 'field_data_field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['field'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_card_upload_image']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_card_upload_video']['id'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['table'] = 'field_data_field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['field'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_video']['type'] = 'media';
  /* Field: Content: Live Stream Embed Code */
  $handler->display->display_options['fields']['field_live_video_report']['id'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['table'] = 'field_data_field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['field'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['label'] = '';
  $handler->display->display_options['fields']['field_live_video_report']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_card_upload_audio']['id'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['table'] = 'field_data_field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['field'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_audio']['type'] = 'media';
  /* Field: Content: Article Intro */
  $handler->display->display_options['fields']['field_card_article_introduction']['id'] = 'field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['table'] = 'field_data_field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['field'] = 'field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_card_article_introduction']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Tweet */
  $handler->display->display_options['fields']['field_card_featured_tweet']['id'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['table'] = 'field_data_field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['field'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['label'] = '';
  $handler->display->display_options['fields']['field_card_featured_tweet']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_card_poll']['id'] = 'field_card_poll';
  $handler->display->display_options['fields']['field_card_poll']['table'] = 'field_data_field_card_poll';
  $handler->display->display_options['fields']['field_card_poll']['field'] = 'field_card_poll';
  $handler->display->display_options['fields']['field_card_poll']['label'] = '';
  $handler->display->display_options['fields']['field_card_poll']['element_label_colon'] = FALSE;
  /* Field: Content: Card Type */
  $handler->display->display_options['fields']['field_card_type']['id'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['fields']['field_card_type']['field'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['label'] = '';
  $handler->display->display_options['fields']['field_card_type']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Card';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'card' => 'card',
  );
  /* Filter criterion: Content: Card Type (field_card_type) */
  $handler->display->display_options['filters']['field_card_type_value']['id'] = 'field_card_type_value';
  $handler->display->display_options['filters']['field_card_type_value']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['filters']['field_card_type_value']['field'] = 'field_card_type_value';
  $handler->display->display_options['filters']['field_card_type_value']['value'] = array(
    'ftweet' => 'ftweet',
  );

  /* Display: card block for events */
  $handler = $view->new_display('block', 'card block for events', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Card Block for events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default (This option is for views slideshow cycle, it is not used for views_slideshow ddblock)',
    'module' => 'views_slideshow_ddblock',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'php' => 'php',
    'created' => 'created',
    'created_1' => 'created_1',
    'field_card_headline' => 'field_card_headline',
    'field_card_type' => 'field_card_type',
    'php_6' => 0,
    'php_2' => 0,
    'php_3' => 0,
    'php_1' => 0,
    'php_4' => 0,
    'field_pin_card' => 0,
    'php_5' => 0,
    'nid' => 0,
    'title' => 0,
    'field_author' => 0,
    'field_card_editors_name' => 0,
    'field_editor_s_email_address' => 0,
    'field_read_more_link' => 0,
    'php_7' => 0,
    'field_card_share_addthis' => 0,
    'field_card_upload_image' => 0,
    'field_card_upload_video' => 0,
    'field_live_video_report' => 0,
    'field_card_upload_audio' => 0,
    'field_card_article_introduction' => 0,
    'body' => 0,
    'field_card_featured_tweet' => 0,
    'field_poll' => 0,
    'edit_node' => 0,
    'language' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_jcarousel_pager';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'php' => 'php',
    'created' => 'created',
    'created_1' => 'created_1',
    'title' => 'title',
    'field_card_type' => 'field_card_type',
    'php_6' => 0,
    'php_2' => 0,
    'php_3' => 0,
    'php_1' => 0,
    'php_4' => 0,
    'field_pin_card' => 0,
    'php_5' => 0,
    'nid' => 0,
    'field_card_headline' => 0,
    'field_author' => 0,
    'field_card_editors_name' => 0,
    'field_editor_s_email_address' => 0,
    'field_read_more_link' => 0,
    'php_7' => 0,
    'field_card_share_addthis' => 0,
    'field_card_upload_image' => 0,
    'field_card_upload_video' => 0,
    'field_live_video_report' => 0,
    'field_card_upload_audio' => 0,
    'field_card_article_introduction' => 0,
    'body' => 0,
    'field_card_featured_tweet' => 0,
    'field_poll' => 0,
    'edit_node' => 0,
    'language' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '5';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '500';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => '',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => '',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => '',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => '',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => '',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'default',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'content_container' => array(
      'container' => 'div.slide',
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '500',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'left',
        'pager_event' => 'click',
        'pager_disable_click' => 1,
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 0,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 0,
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'body_1' => 'body_1',
  );
  $handler->display->display_options['row_options']['separator'] = ':';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'PHP-Card Type';
  $handler->display->display_options['fields']['php_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_output'] = '<?php 
if($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'live\'){
$ct = \'Live\';
}
elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'video\'){
$ct = \'Video\';
}
elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'ftweet\'){
$ct = \'Featured Tweet\';
}
elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'producermessage\'){
$ct = \'Editor Message\';
}
elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'audio\'){
$ct = \'Audio\';
}
elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'poll\'){
$ct = \'Poll\';
}
elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'article\'){
$ct = \'Article\';
}

else{
$ct = \'Photo\';
}
echo t($ct);
?>';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_pin_card[0][raw][value] == \'1\'){
$pin_card = "<span class=\'yes\'></span>";
}
else{
$pin_card = "<span class=\'no\'></span>";
}
if(isset($data->field_field_card_type[\'0\'][\'raw\'][\'value\'])){
  if($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'live\'){
    echo \'<div class="live-type">\'.$pin_card.\'</div>\';
  }
  elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'video\'){
    echo \'<div class="video-type">\'.$pin_card.\'</div>\';
  }
  elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'ftweet\'){
    echo \'<div class="ftweet-type">\'.$pin_card.\'</div>\';
  }
  elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'producermessage\'){
    echo \'<div class="producermessage-type">\'.$pin_card.\'</div>\';
  }
  elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'audio\'){
    echo \'<div class="audio-type">\'.$pin_card.\'</div>\';
  }
  elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'poll\'){
    echo \'<div class="poll-type">\'.$pin_card.\'</div>\';
  }
  elseif($data->field_field_card_type[\'0\'][\'raw\'][\'value\'] == \'article\'){
    echo \'<div class="article-type">\'.$pin_card.\'</div>\';
  }
  else{
    echo \'<div class="photo-type">\'.$pin_card.\'</div>\';
  }
}else{
  $data->field_field_card_type[\'0\'][\'raw\'][\'value\']="";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$node = node_load($data->nid);
?>
<a data-toggle="tab" href="#comments<?php print $row->nid ?>"  onClick="load_disqus_comments(\'<?php print $node->disqus[\'domain\'] ?>\',\'<?php print $node->disqus[\'identifier\'] ?>\',\'<?php print $node->disqus[\'title\'] ?>\',\'<?php print $node->disqus[\'url\'] ?>\')"  class="load_comments"><?php echo t("Comments"); ?></a>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<div class="addthis_toolbox">
  <div class="custom_images">
    <a class="addthis_button_facebook"><img src="/sites/all/themes/tweme/assets/images/social-facebook.png" border="0"alt="Share to Facebook" /></a>
    <a class="addthis_button_twitter"><img src="/sites/all/themes/tweme/assets/images/social-twitter.png" border="0" alt="Share to Twitter" /></a>
    <a class="addthis_button_google_plusone"></a>
  </div>
</div>
<script type="text/javascript" src="http://s7.addthis.com/js/300/addthis_widget.js#pubid=ra-5244415b596a5c23"></script>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if(isset($data->field_field_author[\'0\'][raw][value])){
echo "By";
}
else{
echo "";
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = '';
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php echo t("Info"); ?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Content: Pin Card */
  $handler->display->display_options['fields']['field_pin_card']['id'] = 'field_pin_card';
  $handler->display->display_options['fields']['field_pin_card']['table'] = 'field_data_field_pin_card';
  $handler->display->display_options['fields']['field_pin_card']['field'] = 'field_pin_card';
  $handler->display->display_options['fields']['field_pin_card']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pin_card']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_pin_card']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['label'] = 'readmore';
  $handler->display->display_options['fields']['php_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php echo t("Read More"); ?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<h3>[created]</h3>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'g:i A T  ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['text'] = '<span>[created_1]</span>';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'M j, Y ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_card_headline']['id'] = 'field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['table'] = 'field_data_field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['field'] = 'field_card_headline';
  $handler->display->display_options['fields']['field_card_headline']['label'] = '';
  $handler->display->display_options['fields']['field_card_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_card_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_headline']['settings'] = array(
    'trim_length' => '50',
  );
  /* Field: Content: Author(s) Names */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = 'by';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['hide_alter_empty'] = FALSE;
  /* Field: Content: Editor's name */
  $handler->display->display_options['fields']['field_card_editors_name']['id'] = 'field_card_editors_name';
  $handler->display->display_options['fields']['field_card_editors_name']['table'] = 'field_data_field_card_editors_name';
  $handler->display->display_options['fields']['field_card_editors_name']['field'] = 'field_card_editors_name';
  $handler->display->display_options['fields']['field_card_editors_name']['label'] = '';
  $handler->display->display_options['fields']['field_card_editors_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_card_editors_name']['element_label_colon'] = FALSE;
  /* Field: Content: Editor's email address */
  $handler->display->display_options['fields']['field_editor_s_email_address']['id'] = 'field_editor_s_email_address';
  $handler->display->display_options['fields']['field_editor_s_email_address']['table'] = 'field_data_field_editor_s_email_address';
  $handler->display->display_options['fields']['field_editor_s_email_address']['field'] = 'field_editor_s_email_address';
  $handler->display->display_options['fields']['field_editor_s_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_editor_s_email_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editor_s_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editor_s_email_address']['type'] = 'email_plain';
  /* Field: Content: Read More Link */
  $handler->display->display_options['fields']['field_read_more_link']['id'] = 'field_read_more_link';
  $handler->display->display_options['fields']['field_read_more_link']['table'] = 'field_data_field_read_more_link';
  $handler->display->display_options['fields']['field_read_more_link']['field'] = 'field_read_more_link';
  $handler->display->display_options['fields']['field_read_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_read_more_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_read_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_read_more_link']['type'] = 'link_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'PHP Pin card';
  $handler->display->display_options['fields']['php_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_output'] = '<?php
if($data->field_field_pin_card[0][raw][value] == \'1\'){
print "<span class=\'yes\'></span>";
}
else{
print "<span class=\'no\'></span>";
}

?>';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Content: Card Type */
  $handler->display->display_options['fields']['field_card_type']['id'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['fields']['field_card_type']['field'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['label'] = '';
  $handler->display->display_options['fields']['field_card_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_card_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_card_type']['alter']['text'] = '[php_6]';
  $handler->display->display_options['fields']['field_card_type']['element_label_colon'] = FALSE;
  /* Field: Content: Share */
  $handler->display->display_options['fields']['field_card_share_addthis']['id'] = 'field_card_share_addthis';
  $handler->display->display_options['fields']['field_card_share_addthis']['table'] = 'field_data_field_card_share_addthis';
  $handler->display->display_options['fields']['field_card_share_addthis']['field'] = 'field_card_share_addthis';
  $handler->display->display_options['fields']['field_card_share_addthis']['label'] = '';
  $handler->display->display_options['fields']['field_card_share_addthis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_card_share_addthis']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_card_share_addthis']['alter']['text'] = '<div class="addthis_toolbox">
    
    <div class="custom_images">
    <a class="addthis_button_facebook"><img src="/sites/all/themes/tweme/assets/images/social-facebook.png" border="0" alt="Share to Facebook" /></a>
    <a class="addthis_button_twitter"><img src="/sites/all/themes/tweme/assets/images/social-twitter.png" border="0" alt="Share to Twitter" /></a>				
    <a class="addthis_button_google_plusone"></a>
    </div>
    
    </div>';
  $handler->display->display_options['fields']['field_card_share_addthis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_share_addthis']['type'] = 'addthis_basic_toolbox';
  $handler->display->display_options['fields']['field_card_share_addthis']['settings'] = array(
    'share_services' => 'facebook,twitter,google_plusone',
    'buttons_size' => 'addthis_16x16_style',
    'counter_orientation' => 'horizontal',
    'extra_css' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_card_upload_image']['id'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['table'] = 'field_data_field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['field'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_card_upload_image']['alter']['text'] = '<div class="span7">
<div class="views-field views-field-field-card-upload-image">
[field_card_upload_image] 
</div>
</div>
<div class="span5">
<div class="tabs-container">
<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">

          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>

          <li>[php_2]</li>

</ul>
<div class="tab-content">
<div id="info[nid]" class="tab-pane active  info-pane">
        <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
<div class="views-field views-field-created-1">[created_1]</div>
<div class="title-icon"><span>[field_card_type]</span></div>
<h1>[field_card_headline] </h1>
<h2>[php_1]<span>[field_author] </span></h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">

</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_card_upload_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_card_upload_image']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_card_upload_video']['id'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['table'] = 'field_data_field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['field'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_card_upload_video']['alter']['text'] = '<div class="span7">
[field_card_upload_video]
</div>
<div class="span5">
<div class="tabs-container">

<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">
          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
          <li>[php_2]</li>
</ul>
<div class="tab-content">
 <div id="info[nid]" class="tab-pane active info-pane">
         <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
          <div class="views-field views-field-created-1">[created_1]</div>  
<div class="title-icon"><span>[field_card_type]</span></div>
<h1> [field_card_headline]</h1>
<h2><span>[php_1]</span> [field_author]</h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">
[php_2]
</div>
</div> 
</div> 
</div>';
  $handler->display->display_options['fields']['field_card_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_card_upload_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Live Stream Embed Code */
  $handler->display->display_options['fields']['field_live_video_report']['id'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['table'] = 'field_data_field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['field'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['label'] = '';
  $handler->display->display_options['fields']['field_live_video_report']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_live_video_report']['alter']['text'] = '<div class="span7">
[field_live_video_report]
</div>
<div class="span5">
<div class="tabs-container">

<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">
          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
          <li>[php_2]</li>
</ul>
<div class="tab-content">
 <div id="info[nid]" class="tab-pane active info-pane">
         <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
          <div class="views-field views-field-created-1">[created_1]</div>  
<div class="title-icon"><span>[field_card_type]</span></div>
 <h1>[field_card_headline]</h1>
<h2><span>[php_1]</span> [field_author]</h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">

</div>
</div> 
</div> 
</div>';
  $handler->display->display_options['fields']['field_live_video_report']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_card_upload_audio']['id'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['table'] = 'field_data_field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['field'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_audio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_card_upload_audio']['alter']['text'] = '<div class="span7">
[field_card_upload_audio]
</div>
<div class="span5">
<div class="tabs-container">

<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">
          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
          <li>[php_2]</li>
</ul>
<div class="tab-content">
 <div id="info[nid]" class="tab-pane active info-pane">
         <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
          <div class="views-field views-field-created-1">[created_1]</div>  
<div class="title-icon"><span>[field_card_type]</span></div>
 <h1>[field_card_headline]</h1>
<h2>[php_1]<span>[field_author]</span></h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">

</div>
</div> 
</div> 
</div>';
  $handler->display->display_options['fields']['field_card_upload_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_audio']['type'] = 'media';
  $handler->display->display_options['fields']['field_card_upload_audio']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Article Intro */
  $handler->display->display_options['fields']['field_card_article_introduction']['id'] = 'field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['table'] = 'field_data_field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['field'] = 'field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_card_article_introduction']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_card_article_introduction']['alter']['text'] = '<div class="span7">
<div class="title-icon"><span>[field_card_type]</span></div>
<h1>[field_card_headline]</h1>
<h2><span>[php_1]</span> [field_author]</h2>
<div class="views-field views-field-field-card-article-introduction article-content">[field_card_article_introduction-value]</div>
<div class="read-more"><a href="[field_read_more_link]" target="_blank">[php_5]</a></div>
</div>
<div class="span5">
<div class="tabs-container">
<ul data-tabs="tabs" class="nav nav-tabs">
    <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
    <li>[php_2]</li>
</ul>
<div class="tab-content">
<div id="info[nid]" class="tab-pane active info-pane">
<div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
 <div class="views-field views-field-created-1">[created_1]</div>

 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_card_article_introduction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_article_introduction']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="span4">
	<div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
	<div class="views-field views-field-created-1">[created_1]</div>    
	<div class="title-icon"><span>[field_card_type]</span></div>
	<h2><span>Editor:</span> <a href="mailto:[field_editor_s_email_address]">[field_card_editors_name]</a></h2>
     <div class="views-field views-field-php-3">
		[field_card_share_addthis] 
	</div>
</div>
<div class="span8 editor-message-text"> 
[body-value]
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Tweet */
  $handler->display->display_options['fields']['field_card_featured_tweet']['id'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['table'] = 'field_data_field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['field'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['label'] = '';
  $handler->display->display_options['fields']['field_card_featured_tweet']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_card_featured_tweet']['alter']['text'] = '<div class="span2"></div>
<div class="span8">
    <div class="views-field views-field-created timestamp">[created]<span class="pin-card">[php_7] </span></div>
    <div class="views-field views-field-created-1 datestamp">[created_1]</div>
    <div class="title-icon"><span>[field_card_type]</span></div>
	
    <div class="ftweet-content">[field_card_featured_tweet-value]</div>
    
    <div class="views-field views-field-php-3">[field_card_share_addthis]</div>
    
</div>
<div class="span2"></div>';
  $handler->display->display_options['fields']['field_card_featured_tweet']['element_label_colon'] = FALSE;
  /* Field: Content: Poll */
  $handler->display->display_options['fields']['field_poll']['id'] = 'field_poll';
  $handler->display->display_options['fields']['field_poll']['table'] = 'field_data_field_poll';
  $handler->display->display_options['fields']['field_poll']['field'] = 'field_poll';
  $handler->display->display_options['fields']['field_poll']['label'] = '';
  $handler->display->display_options['fields']['field_poll']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_poll']['alter']['text'] = '<div class="span7">
<div class="title-icon"><span>[field_card_type]</span></div>
<h1>[field_poll-question]</h1>
<p>[field_card_share_addthis] </p>
</div>
<div class="span5">
[field_poll]
</div>';
  $handler->display->display_options['fields']['field_poll']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poll']['click_sort_column'] = 'question';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Card';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Pin Card (field_pin_card) */
  $handler->display->display_options['sorts']['field_pin_card_value']['id'] = 'field_pin_card_value';
  $handler->display->display_options['sorts']['field_pin_card_value']['table'] = 'field_data_field_pin_card';
  $handler->display->display_options['sorts']['field_pin_card_value']['field'] = 'field_pin_card_value';
  $handler->display->display_options['sorts']['field_pin_card_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'card' => 'card',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'cards block for events';
  $translatables['event_card'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Group node from OG membership'),
    t('Edit Card'),
    t('All'),
    t('card block for events'),
    t('Card Block for events'),
    t('PHP-Card Type'),
    t('PHP'),
    t('Pin Card'),
    t('readmore'),
    t('<h3>[created]</h3>'),
    t('<span>[created_1]</span>'),
    t('by'),
    t('PHP Pin card'),
    t('[php_6]'),
    t('<div class="addthis_toolbox">
    
    <div class="custom_images">
    <a class="addthis_button_facebook"><img src="/sites/all/themes/tweme/assets/images/social-facebook.png" border="0" alt="Share to Facebook" /></a>
    <a class="addthis_button_twitter"><img src="/sites/all/themes/tweme/assets/images/social-twitter.png" border="0" alt="Share to Twitter" /></a>				
    <a class="addthis_button_google_plusone"></a>
    </div>
    
    </div>'),
    t('<div class="span7">
<div class="views-field views-field-field-card-upload-image">
[field_card_upload_image] 
</div>
</div>
<div class="span5">
<div class="tabs-container">
<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">

          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>

          <li>[php_2]</li>

</ul>
<div class="tab-content">
<div id="info[nid]" class="tab-pane active  info-pane">
        <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
<div class="views-field views-field-created-1">[created_1]</div>
<div class="title-icon"><span>[field_card_type]</span></div>
<h1>[field_card_headline] </h1>
<h2>[php_1]<span>[field_author] </span></h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">

</div>
</div>
</div>
</div>'),
    t('<div class="span7">
[field_card_upload_video]
</div>
<div class="span5">
<div class="tabs-container">

<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">
          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
          <li>[php_2]</li>
</ul>
<div class="tab-content">
 <div id="info[nid]" class="tab-pane active info-pane">
         <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
          <div class="views-field views-field-created-1">[created_1]</div>  
<div class="title-icon"><span>[field_card_type]</span></div>
<h1> [field_card_headline]</h1>
<h2><span>[php_1]</span> [field_author]</h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">
[php_2]
</div>
</div> 
</div> 
</div>'),
    t('<div class="span7">
[field_live_video_report]
</div>
<div class="span5">
<div class="tabs-container">

<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">
          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
          <li>[php_2]</li>
</ul>
<div class="tab-content">
 <div id="info[nid]" class="tab-pane active info-pane">
         <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
          <div class="views-field views-field-created-1">[created_1]</div>  
<div class="title-icon"><span>[field_card_type]</span></div>
 <h1>[field_card_headline]</h1>
<h2><span>[php_1]</span> [field_author]</h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">

</div>
</div> 
</div> 
</div>'),
    t('<div class="span7">
[field_card_upload_audio]
</div>
<div class="span5">
<div class="tabs-container">

<ul data-tabs="tabs" class="nav nav-tabs" id="tabs">
          <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
          <li>[php_2]</li>
</ul>
<div class="tab-content">
 <div id="info[nid]" class="tab-pane active info-pane">
         <div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
          <div class="views-field views-field-created-1">[created_1]</div>  
<div class="title-icon"><span>[field_card_type]</span></div>
 <h1>[field_card_headline]</h1>
<h2>[php_1]<span>[field_author]</span></h2>
 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">

</div>
</div> 
</div> 
</div>'),
    t('<div class="span7">
<div class="title-icon"><span>[field_card_type]</span></div>
<h1>[field_card_headline]</h1>
<h2><span>[php_1]</span> [field_author]</h2>
<div class="views-field views-field-field-card-article-introduction article-content">[field_card_article_introduction-value]</div>
<div class="read-more"><a href="[field_read_more_link]" target="_blank">[php_5]</a></div>
</div>
<div class="span5">
<div class="tabs-container">
<ul data-tabs="tabs" class="nav nav-tabs">
    <li class="active"><a data-toggle="tab" href="#info[nid]">[php_4]</a></li>
    <li>[php_2]</li>
</ul>
<div class="tab-content">
<div id="info[nid]" class="tab-pane active info-pane">
<div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
 <div class="views-field views-field-created-1">[created_1]</div>

 <div class="views-field views-field-php-3">
[field_card_share_addthis] 
</div>
</div>
<div id="comments[nid]" class="tab-pane comments-pane">
</div>
</div>
</div>
</div>'),
    t('<div class="span4">
	<div class="views-field views-field-created">[created]<span class="pin-card">[php_7] </span></div>  
	<div class="views-field views-field-created-1">[created_1]</div>    
	<div class="title-icon"><span>[field_card_type]</span></div>
	<h2><span>Editor:</span> <a href="mailto:[field_editor_s_email_address]">[field_card_editors_name]</a></h2>
     <div class="views-field views-field-php-3">
		[field_card_share_addthis] 
	</div>
</div>
<div class="span8 editor-message-text"> 
[body-value]
</div>'),
    t('<div class="span2"></div>
<div class="span8">
    <div class="views-field views-field-created timestamp">[created]<span class="pin-card">[php_7] </span></div>
    <div class="views-field views-field-created-1 datestamp">[created_1]</div>
    <div class="title-icon"><span>[field_card_type]</span></div>
	
    <div class="ftweet-content">[field_card_featured_tweet-value]</div>
    
    <div class="views-field views-field-php-3">[field_card_share_addthis]</div>
    
</div>
<div class="span2"></div>'),
    t('<div class="span7">
<div class="title-icon"><span>[field_card_type]</span></div>
<h1>[field_poll-question]</h1>
<p>[field_card_share_addthis] </p>
</div>
<div class="span5">
[field_poll]
</div>'),
    t('cards block for events'),
  );
  $export['event_card'] = $view;

  $view = new view();
  $view->name = 'event_card_top_details';
  $view->description = 'Displays Event information bar at the top of each event.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Top Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default (This option is for views slideshow cycle, it is not used for views_slideshow ddblock)',
    'module' => 'views_slideshow_ddblock',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_card_article_introduction' => 0,
    'field_card_upload_audio' => 0,
    'field_card_type' => 0,
    'field_card_featured_tweet' => 0,
    'field_card_upload_image' => 0,
    'field_live_video_report' => 0,
    'field_card_poll' => 0,
    'body' => 0,
    'field_card_upload_video' => 0,
    'field_card_type_1' => 0,
    'created' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_card_type_1' => 'field_card_type_1',
    'created' => 'created',
    'field_card_article_introduction' => 0,
    'field_card_upload_audio' => 0,
    'field_card_type' => 0,
    'field_card_featured_tweet' => 0,
    'field_card_upload_image' => 0,
    'field_live_video_report' => 0,
    'field_card_poll' => 0,
    'body' => 0,
    'field_card_upload_video' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollRight';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '500';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => '',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => '',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => '',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => '',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => '',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'default',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'content_container' => array(
      'container' => 'div.slide',
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '500',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'left',
        'pager_event' => 'click',
        'pager_disable_click' => 1,
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 0,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 0,
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_card_upload_image']['id'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['table'] = 'field_data_field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['field'] = 'field_card_upload_image';
  $handler->display->display_options['fields']['field_card_upload_image']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_image']['type'] = 'media';
  $handler->display->display_options['fields']['field_card_upload_image']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_card_upload_video']['id'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['table'] = 'field_data_field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['field'] = 'field_card_upload_video';
  $handler->display->display_options['fields']['field_card_upload_video']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_video']['type'] = 'media';
  /* Field: Content: Live Stream Embed Code */
  $handler->display->display_options['fields']['field_live_video_report']['id'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['table'] = 'field_data_field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['field'] = 'field_live_video_report';
  $handler->display->display_options['fields']['field_live_video_report']['label'] = '';
  $handler->display->display_options['fields']['field_live_video_report']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_card_upload_audio']['id'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['table'] = 'field_data_field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['field'] = 'field_card_upload_audio';
  $handler->display->display_options['fields']['field_card_upload_audio']['label'] = '';
  $handler->display->display_options['fields']['field_card_upload_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_card_upload_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_upload_audio']['type'] = 'media';
  /* Field: Content: Article Intro */
  $handler->display->display_options['fields']['field_card_article_introduction']['id'] = 'field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['table'] = 'field_data_field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['field'] = 'field_card_article_introduction';
  $handler->display->display_options['fields']['field_card_article_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_card_article_introduction']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Tweet */
  $handler->display->display_options['fields']['field_card_featured_tweet']['id'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['table'] = 'field_data_field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['field'] = 'field_card_featured_tweet';
  $handler->display->display_options['fields']['field_card_featured_tweet']['label'] = '';
  $handler->display->display_options['fields']['field_card_featured_tweet']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_card_poll']['id'] = 'field_card_poll';
  $handler->display->display_options['fields']['field_card_poll']['table'] = 'field_data_field_card_poll';
  $handler->display->display_options['fields']['field_card_poll']['field'] = 'field_card_poll';
  $handler->display->display_options['fields']['field_card_poll']['label'] = '';
  $handler->display->display_options['fields']['field_card_poll']['element_label_colon'] = FALSE;
  /* Field: Content: Card Type */
  $handler->display->display_options['fields']['field_card_type']['id'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['fields']['field_card_type']['field'] = 'field_card_type';
  $handler->display->display_options['fields']['field_card_type']['label'] = '';
  $handler->display->display_options['fields']['field_card_type']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Card';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: PHP */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'card' => 'card',
  );
  /* Filter criterion: Content: Card Type (field_card_type) */
  $handler->display->display_options['filters']['field_card_type_value']['id'] = 'field_card_type_value';
  $handler->display->display_options['filters']['field_card_type_value']['table'] = 'field_data_field_card_type';
  $handler->display->display_options['filters']['field_card_type_value']['field'] = 'field_card_type_value';
  $handler->display->display_options['filters']['field_card_type_value']['value'] = array(
    'ftweet' => 'ftweet',
  );

  /* Display: Event name next to logo */
  $handler = $view->new_display('block', 'Event name next to logo', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="header-title-wrapper"><div id="header-event-title">[title]</div></div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Tweet us at block next to event name which is beside logo */
  $handler = $view->new_display('block', 'Tweet us at block next to event name which is beside logo', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Twitter Hashtag */
  $handler->display->display_options['fields']['field_event_twitter_tag']['id'] = 'field_event_twitter_tag';
  $handler->display->display_options['fields']['field_event_twitter_tag']['table'] = 'field_data_field_event_twitter_tag';
  $handler->display->display_options['fields']['field_event_twitter_tag']['field'] = 'field_event_twitter_tag';
  $handler->display->display_options['fields']['field_event_twitter_tag']['label'] = '';
  $handler->display->display_options['fields']['field_event_twitter_tag']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_twitter_tag']['alter']['text'] = '<div id="header-tweet">
@RELAYLIVENEWS<br>
<a href="https://www.twitter.com/search?q=[field_event_twitter_tag]" target="_blank">TWEET US AT #[field_event_twitter_tag]</a></div>';
  $handler->display->display_options['fields']['field_event_twitter_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $translatables['event_card_top_details'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Group node from OG membership'),
    t('Edit Card'),
    t('All'),
    t('Event name next to logo'),
    t('<div id="header-title-wrapper"><div id="header-event-title">[title]</div></div>'),
    t('Tweet us at block next to event name which is beside logo'),
    t('<div id="header-tweet">
@RELAYLIVENEWS<br>
<a href="https://www.twitter.com/search?q=[field_event_twitter_tag]" target="_blank">TWEET US AT #[field_event_twitter_tag]</a></div>'),
  );
  $export['event_card_top_details'] = $view;

  $view = new view();
  $view->name = 'to_view_all_events_created_by_user';
  $view->description = 'Used by Administrators and Editors to edit Relay Events.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All events created by user';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'body' => 'body',
    'created' => 'created',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Manage Events */
  $handler = $view->new_display('page', 'Manage Events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Events';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['path'] = 'manage-events';
  $handler->display->display_options['menu']['title'] = 'Manage Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['to_view_all_events_created_by_user'] = array(
    t('Master'),
    t('All events created by user'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Event'),
    t('Summary'),
    t('Created'),
    t('Published'),
    t('Manage Events'),
  );
  $export['to_view_all_events_created_by_user'] = $view;

  return $export;
}
