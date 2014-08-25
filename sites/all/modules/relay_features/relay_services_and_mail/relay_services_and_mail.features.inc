<?php
/**
 * @file
 * relay_services_and_mail.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function relay_services_and_mail_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "mailhandler" && $api == "mailhandler_mailbox") {
    return array("version" => "2");
  }
}
