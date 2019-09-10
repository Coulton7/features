<?php
/**
 * @file
 * variable_realm_fe.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function variable_realm_fe_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['de'] = array(
  'site_frontpage' => 'node/6466',
  'site_name' => 'Euro AES',
  'site_slogan' => '',
);
  $realm_variables['language']['en'] = array(
  'maintenance_mode_message' => '<h2>AESSEAL is currently under maintenance. We should be back very shortly, thank you for your patience. The global website can still be reached at <a href="https://www.aesseal.com/en" rel="nofollow">https://www.aesseal.com/en</a></h2>
<br>
<h1>If you need to contact us urgently, please use the following details...</h1>
<hr>
<h4>UK Headquarters</h4>
<p>AESSEAL Plc, Mill Close, Rotherham, S60 1BZ United Kingdom</p>
<p>Tel: +44 (0) 1709 369966 Fax: +44 (0) 1709 720788 E-mail: enquiries@aesseal.com</p>
<br>
<h4>US Headquarters</h4>
<p>AESSEAL Inc. 355 Dunavant Drive, Rockford, TN. 37853  USA</p>
<p>Tel: +1 865 531 0192 Fax: +1 865 531 0571 E-mail: usa@aesseal.com</p>',
  'site_frontpage' => 'node/1',
  'site_name' => 'Europe',
  'site_slogan' => 'AESSEAL',
);
  $realm_variables['language']['es'] = array(
  'site_frontpage' => 'node/9870',
  'site_name' => 'Euro AES',
  'site_slogan' => 'Base Site',
);
  $realm_variables['language']['fr'] = array(
  'site_frontpage' => 'node/9864',
  'site_name' => 'Euro AES',
  'site_slogan' => 'Base Site',
);
  $realm_variables['language']['it'] = array(
  'site_frontpage' => 'node/9900',
  'site_name' => 'Euro AES',
  'site_slogan' => 'Base Site',
);
  $realm_variables['language']['pl'] = array(
  'site_frontpage' => 'node/10127',
  'site_name' => 'Europe',
  'site_slogan' => 'AESSEAL',
);
  $realm_variables['language']['ru'] = array();
  $realm_variables['language']['sv'] = array(
  'site_frontpage' => 'node/9955',
  'site_name' => 'Euro AES',
  'site_slogan' => 'Base Site',
);
  $realm_variables['language']['tr'] = array(
  'site_frontpage' => 'node/9911',
  'site_name' => 'Euro AES',
  'site_slogan' => 'Base Site',
);
  $realm_variables['language']['zh-hans'] = array();

return $realm_variables;
}
