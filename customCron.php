<?php
$script_address = 'http://relay.voacambodia/cron.php';

$conn = curl_init($script_address);
curl_exec($conn);
curl_close($conn);
?>

