<?php
/**
 * @file
 * relay_services_and_mail.mailhandler_mailbox.inc
 */

/**
 * Implements hook_default_mailhandler_mailbox().
 */
function relay_services_and_mail_default_mailhandler_mailbox() {
  $export = array();

  $mailbox = new stdClass();
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 2;
  $mailbox->mail = 'clone_of_gmail_beacon_test';
  $mailbox->admin_title = 'gmail beacon test';
  $mailbox->settings = array(
    'type' => 'imap',
    'folder' => 'INBOX',
    'domain' => 'imap.gmail.com',
    'port' => '993',
    'name' => 'cooperbetty890@gmail.com',
    'pass' => 'bettycooper',
    'extraimap' => '/notls/ssl/novalidate-cert',
    'limit' => '0',
    'encoding' => 'UTF-8',
    'flag_after_read' => 1,
    'delete_after_read' => 0,
    'fromheader' => 'From',
    'security' => '0',
    'replies' => '0',
    'retrieve' => 'MailhandlerPhpImapRetrieve',
  );
  $export['clone_of_gmail_beacon_test'] = $mailbox;

  $mailbox = new stdClass();
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 2;
  $mailbox->mail = 'gmail_beacon_test';
  $mailbox->admin_title = 'relayvoanews@gmail.com';
  $mailbox->settings = array(
    'type' => 'imap',
    'folder' => 'INBOX',
    'domain' => 'imap.gmail.com',
    'port' => '993',
    'name' => 'relayvoanews@gmail.com',
    'pass' => 'relayvoanews1',
    'extraimap' => '/notls/ssl/novalidate-cert',
    'limit' => '0',
    'encoding' => 'UTF-8',
    'flag_after_read' => 1,
    'delete_after_read' => 0,
    'fromheader' => 'From',
    'security' => '0',
    'replies' => '0',
    'retrieve' => 'MailhandlerPhpImapRetrieve',
  );
  $export['gmail_beacon_test'] = $mailbox;

  return $export;
}
