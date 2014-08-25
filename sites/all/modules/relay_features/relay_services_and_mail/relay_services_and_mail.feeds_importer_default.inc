<?php
/**
 * @file
 * relay_services_and_mail.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function relay_services_and_mail_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'article_import_';
  $feeds_importer->config = array(
    'name' => 'article import ',
    'description' => 'to import articles from gmail to basic page',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'MailhandlerFilters',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MailhandlerParser',
      'config' => array(
        'available_commands' => 'status',
        'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
        'extended_headers' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'body_text',
            'target' => 'field_email_body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'subject',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'card',
      ),
    ),
    'content_type' => 'page',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['article_import_'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mailhandler_featured_tweet';
  $feeds_importer->config = array(
    'name' => 'Mailhandler featured tweet',
    'description' => 'Creates a featured tweet node from the emails for featured tweet in the configured gmail inbox',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'MailhandlerFilters',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MailhandlerParser',
      'config' => array(
        'available_commands' => 'status',
        'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
        'extended_headers' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'status',
            'target' => 'field_card_type',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'subject',
            'target' => 'field_featured_tweet_subject',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'body_text',
            'target' => 'field_card_featured_tweet',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'card',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['mailhandler_featured_tweet'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mailhandler_gmail_inbox';
  $feeds_importer->config = array(
    'name' => 'Import Editor\'s messages',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'MailhandlerFilters',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MailhandlerParser',
      'config' => array(
        'available_commands' => 'status',
        'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
        'extended_headers' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'to-name',
            'target' => 'field_card_editors_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'status',
            'target' => 'field_card_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'subject',
            'target' => 'field_editor_s_subject',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'from-address',
            'target' => 'field_editor_s_email_address',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'body_html',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'subject',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'card',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['mailhandler_gmail_inbox'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'test_mailhandler_for_both_article_and_editors_message';
  $feeds_importer->config = array(
    'name' => 'test mailhandler for both article and editors message',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'MailhandlerFilters',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MailhandlerParser',
      'config' => array(
        'available_commands' => 'status',
        'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
        'extended_headers' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'to-name',
            'target' => 'field_card_editors_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'status',
            'target' => 'field_card_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'subject',
            'target' => 'field_editor_s_subject',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'body_html',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'from-mailbox',
            'target' => 'field_editor_s_email_address',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'body_html',
            'target' => 'field_card_article_introduction',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'subject',
            'target' => 'field_article_subject',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'senderaddress',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'card',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['test_mailhandler_for_both_article_and_editors_message'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'to_import_articles_editors_message_and_tweets_from_email';
  $feeds_importer->config = array(
    'name' => 'To import articles, editors message and tweets from email',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'MailhandlerFilters',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MailhandlerParser',
      'config' => array(
        'available_commands' => 'status',
        'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
        'extended_headers' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'from-address',
            'target' => 'field_email_from',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'subject',
            'target' => 'field_email_subject',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'body_html',
            'target' => 'field_email_body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'from-name',
            'target' => 'field_email_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'card',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['to_import_articles_editors_message_and_tweets_from_email'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'youtube_feed_importer';
  $feeds_importer->config = array(
    'name' => 'Youtube Feed Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'YouTubeFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsYoutubeParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'feed_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'url',
            'target' => 'field_live_video_report',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'field_card_video_card',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'card',
      ),
    ),
    'content_type' => 'card',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['youtube_feed_importer'] = $feeds_importer;

  return $export;
}
