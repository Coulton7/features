<?php
/**
 * @file
 * rules_config.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_config_default_rules_configuration() {
  $items = array();
  $items['rules_delete_entiyform_submission'] = entity_import('rules_config', '{ "rules_delete_entiyform_submission" : {
      "LABEL" : "Delete Entiyform Submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [ { "entity_delete" : { "data" : [ "entityform" ] } } ]
    }
  }');
  $items['rules_submit_to_hubspot'] = entity_import('rules_config', '{ "rules_submit_to_hubspot" : {
      "LABEL" : "Submit to Hubspot",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "DO" : [
        { "php_eval" : { "code" : "$hubspotutk = $_COOKIE[\\u0027hubspotutk\\u0027]; \\r\\n   $ip_addr = $_SERVER[\\u0027REMOTE_ADDR\\u0027]; \\r\\n   $hs_context = array(\\r\\n           \\u0027hutk\\u0027 =\\u003E $hubspotutk,\\r\\n           \\u0027ipAddress\\u0027 =\\u003E $ip_addr,\\r\\n           \\u0027pageUrl\\u0027 =\\u003E \\u0027[entity:field_hidden_form_url]\\u0027,\\r\\n           \\u0027pageName\\u0027 =\\u003E \\u0027[entity:field-current-page-title]\\u0027\\r\\n       );\\r\\n   $hs_context_json = json_encode($hs_context);\\r\\n   \\r\\n$firstname = \\u0027[entity:field_first_name]\\u0027;  \\r\\n$lastname =  \\u0027[entity:field_last_name]\\u0027;  \\r\\n$email = \\u0027[entity:field_email_address]\\u0027;  \\r\\n$company = \\u0027[entity:field_organisation]\\u0027;\\r\\n$question = \\u0027[entity:field_question]\\u0027;\\r\\n$telephone = \\u0027[entity:field_phone]\\u0027;\\r\\n$consent = \\u0027[entity:field_consent]\\u0027;\\r\\n$legitimateInterest= \\u0027[entity:field_legitimateinterest]\\u0027;\\r\\n\\r\\n\\r\\n   $str_post = \\u0022firstname=\\u0022 . urlencode($firstname)\\r\\n           . \\u0022\\u0026lastname=\\u0022 . urlencode($lastname)\\r\\n           . \\u0022\\u0026email=\\u0022 . urlencode($email)\\r\\n           . \\u0022\\u0026company=\\u0022 . urlencode($company)\\r\\n           . \\u0022\\u0026question=\\u0022 . urlencode($question)\\r\\n           . \\u0022\\u0026phone=\\u0022 . urlencode($telephone)\\r\\n           . \\u0022\\u0026consent=\\u0022 .urlencode($consent)\\r\\n           . \\u0022\\u0026legitimateInterest=\\u0022 .urlencode($legitimateInterest)\\r\\n           . \\u0022\\u0026hs_context=\\u0022 . urlencode($hs_context_json);\\r\\n   \\r\\n   $endpoint = \\u0027https:\\/\\/forms.hubspot.com\\/uploads\\/form\\/v2\\/4591194\\/[entity:field-hubspot-form-id]\\u0027;\\r\\n   \\r\\n   $ch = @curl_init();\\r\\n   @curl_setopt($ch, CURLOPT_POST, true);\\r\\n   @curl_setopt($ch, CURLOPT_POSTFIELDS, $str_post);\\r\\n   @curl_setopt($ch, CURLOPT_URL, $endpoint);\\r\\n   @curl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0027Content-Type: application\\/x-www-form-urlencoded\\u0027));\\r\\n   @curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n   $response = @curl_exec($ch);  \\r\\n   $status_code = @curl_getinfo($ch, CURLINFO_HTTP_CODE); \\r\\n   @curl_close($ch);\\r\\n  \\/\\/ echo $status_code . \\u0022 \\u0022 . $response;" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_submit_to_hubspot_js'] = entity_import('rules_config', '{ "rules_submit_to_hubspot_js" : {
      "LABEL" : "Submit to Hubspot JS",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "DO" : [
        { "php_eval" : { "code" : "\\u003Cscript charset=\\u0022utf-8\\u0022 type=\\u0022text\\/javascript\\u0022\\u003E\\r\\nfunction formv3(){\\r\\n  var xhr = new XMLHttpRequest();\\r\\n  var url = \\u0027https:\\/\\/api.hsforms.com\\/submissions\\/v3\\/integration\\/submit\\/4591194\\/99f253ea-3c06-4189-8674-524c5080a092\\u0027;\\r\\n\\r\\n  var data = {\\r\\n    \\u0022submittedAt\\u0022 : \\u0022[site:current-date]\\u0022,\\r\\n    \\u0022fields\\u0022: [\\r\\n      {\\r\\n        \\u0022name\\u0022: \\u0022firstname\\u0022,\\r\\n        \\u0022value\\u0022: \\u0022[entity:field_first_name]\\u0022\\r\\n      },\\r\\n      {\\r\\n        \\u0022name\\u0022: \\u0022lastname\\u0022,\\r\\n        \\u0022value\\u0022: \\u0022[entity:field_last_name]\\u0022\\r\\n      },\\r\\n      {\\r\\n        \\u0022name\\u0022: \\u0022email\\u0022,\\r\\n        \\u0022value\\u0022: \\u0022[entity:field_email_address]\\u0022\\r\\n      },\\r\\n      {\\r\\n        \\u0022name\\u0022: \\u0022company\\u0022,\\r\\n        \\u0022value\\u0022: \\u0022[entity:field_organisation]\\u0022\\r\\n      },\\r\\n      {\\r\\n        \\u0022name\\u0022: \\u0022phone\\u0022,\\r\\n        \\u0022value\\u0022: \\u0022[entity:field_telephone]\\u0022\\r\\n      },\\r\\n      {\\r\\n        \\u0022name\\u0022: \\u0022question\\u0022,\\r\\n        \\u0022value\\u0022: \\u0022[entity:field_question]\\u0022\\r\\n      }\\r\\n    ]\\r\\n  };\\r\\n\\r\\n  var final_data = JSON.stringify(data);\\r\\n  xhr.open(\\u0027POST\\u0027, url);\\r\\n  xhr.setRequestHeader(\\u0027Content-type\\u0027, \\u0027application\\/json\\u0027);\\r\\n\\r\\n  xhr.send(final_data);\\r\\n}\\r\\n\\u003C\\/script\\u003E" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_submit_to_hubspot_v3'] = entity_import('rules_config', '{ "rules_submit_to_hubspot_v3" : {
      "LABEL" : "Submit to HubSpot V3",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "DO" : [
        { "php_eval" : { "code" : "$hubspotutk = $_COOKIE[\\u0027hubspotutk\\u0027];\\r\\n   $ip_addr = $_SERVER[\\u0027REMOTE_ADDR\\u0027];\\r\\n   $hs_context = array(\\r\\n           \\u0027hutk\\u0027 =\\u003E $hubspotutk,\\r\\n           \\u0027ipAddress\\u0027 =\\u003E $ip_addr,\\r\\n           \\u0027pageUrl\\u0027 =\\u003E \\u0027[entity:field_hidden_form_url]\\u0027,\\r\\n           \\u0027pageName\\u0027 =\\u003E \\u0027[entity:field-current-page-title]\\u0027\\r\\n       );\\r\\n   $hs_context_json = json_encode($hs_context);\\r\\n\\r\\n$firstname = \\u0027[entity:field_first_name]\\u0027;\\r\\n$lastname =  \\u0027[entity:field_last_name]\\u0027;\\r\\n$email = \\u0027[entity:field_email_address]\\u0027;\\r\\n$company = \\u0027[entity:field_organisation]\\u0027;\\r\\n$question = \\u0027[entity:field_question]\\u0027;\\r\\n$telephone = \\u0027[entity:field_telephone]\\u0027;\\r\\n\\r\\n   $str_post = \\u0022firstname=\\u0022 . urlencode($firstname)\\r\\n           . \\u0022\\u0026lastname=\\u0022 . urlencode($lastname)\\r\\n           . \\u0022\\u0026email=\\u0022 . urlencode($email)\\r\\n           . \\u0022\\u0026company=\\u0022 . urlencode($company)\\r\\n           . \\u0022\\u0026question=\\u0022 . urlencode($question)\\r\\n           . \\u0022\\u0026phone=\\u0022 . urlencode($telephone)\\r\\n           . \\u0022\\u0026hs_context=\\u0022 . urlencode($hs_context_json);\\r\\n\\r\\n$endpoint = \\u0027https:\\/\\/api.hsforms.com\\/submissions\\/v3\\/integration\\/submit\\/4591194\\/[entity:field-hubspot-form-id]\\u0027;\\r\\n\\r\\n$ch = @curl_init();\\r\\n@curl_setopt($ch, CURLOPT_POST, true);\\r\\n@curl_setopt($ch, CURLOPT_POSTFIELDS, $str_post);\\r\\n@curl_setopt($ch, CURLOPT_URL, $endpoint);\\r\\n@curl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0027Content-Type: application\\/json\\u0027));\\r\\n@curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n$response = @curl_exec($ch);\\r\\n$status_code = @curl_getinfo($ch, CURLINFO_HTTP_CODE);\\r\\n@curl_close($ch);\\r\\n\\/\\/ echo $status_code . \\u0022 \\u0022 . $response;" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_submit_to_zendesk'] = entity_import('rules_config', '{ "rules_submit_to_zendesk" : {
      "LABEL" : "Submit to Zendesk",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "DO" : [
        { "php_eval" : { "code" : "\\/\\/ add new ticket\\r\\n\\r\\ndefine(\\u0022ZDAPIKEY\\u0022, \\u0022KrLGXoPydpoAtnvIo9W4CwNQ9RJHS6iKOLwW9s2X\\u0022);\\r\\ndefine(\\u0022ZDUSER\\u0022, \\u0022support@aesseal.co.uk\\u0022);\\r\\ndefine(\\u0022ZDURL\\u0022, \\u0022https:\\/\\/aesseal.zendesk.com\\/api\\/v2\\u0022);\\r\\n\\r\\nfunction curlWrap($url, $json)\\r\\n{\\r\\n\\t$ch = curl_init();\\r\\n\\tcurl_setopt($ch, CURLOPT_FOLLOWLOCATION, true );\\r\\n\\tcurl_setopt($ch, CURLOPT_MAXREDIRS, 10 );\\r\\n\\tcurl_setopt($ch, CURLOPT_URL, ZDURL.$url);\\r\\n\\tcurl_setopt($ch, CURLOPT_USERPWD, ZDUSER.\\u0022\\/token:\\u0022.ZDAPIKEY);\\r\\n\\tcurl_setopt($ch, CURLOPT_CUSTOMREQUEST, \\u0022POST\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0027Content-type: application\\/json\\u0027));\\r\\n\\tcurl_setopt($ch, CURLOPT_USERAGENT, \\u0022MozillaXYZ\\/1.0\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_POSTFIELDS, $json);\\r\\n\\tcurl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n\\tcurl_setopt($ch, CURLOPT_TIMEOUT, 10);\\r\\n\\t$output = curl_exec($ch);\\r\\n\\tcurl_close($ch);\\r\\n\\t$decoded = json_decode($output);\\r\\n\\treturn $decoded;\\r\\n}\\r\\n\\r\\n$create = json_encode(array(\\r\\n\\t\\u0027ticket\\u0027 =\\u003E array(\\r\\n\\t\\t\\u0027subject\\u0027 =\\u003E \\u0027General enquiry From [site:url]\\u0027,\\r\\n\\t\\t\\u0027comment\\u0027 =\\u003E \\u0027[entity:field_question] from [entity:field-hidden-form-url]\\u0027,\\r\\n        \\u0027custom_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114094308414,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:type]\\u0027\\r\\n\\t\\t\\t),\\r\\n\\t\\t),\\r\\n\\t\\t\\u0027requester\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\u0027name\\u0027 =\\u003E \\u0027[entity:field_first_name] [entity:field_last_name]\\u0027,\\r\\n\\t\\t\\t\\u0027email\\u0027 =\\u003E \\u0027[entity:field_email_address]\\u0027,\\r\\n            \\u0027user_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t\\u0027organization\\u0027 =\\u003E \\u0027[entity:field_organisation]\\u0027,\\r\\n                \\u0027country\\u0027 =\\u003E \\u0027[entity:field_country]\\u0027,\\r\\n                \\u0027city\\u0027 =\\u003E \\u0027[entity:field_city]\\u0027\\r\\n\\t\\t\\t\\t)\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\u0027organization\\u0027 =\\u003E array(\\r\\n            \\u0027organization_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n                \\u0027country\\u0027 =\\u003E \\u0027[entity:field_country]\\u0027,\\r\\n                \\u0027city\\u0027 =\\u003E \\u0027[entity:field_city]\\u0027\\r\\n\\t\\t\\t\\t)\\r\\n\\t\\t\\t)\\r\\n\\t\\t)\\r\\n\\t));\\r\\n$return = curlWrap(\\u0022\\/tickets.json\\u0022, $create);" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_submit_to_zendesk_product_enquiry_'] = entity_import('rules_config', '{ "rules_submit_to_zendesk_product_enquiry_" : {
      "LABEL" : "Submit to Zendesk (product enquiry)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "DO" : [
        { "php_eval" : { "code" : "\\/\\/ add new ticket\\r\\n\\r\\ndefine(\\u0022ZDAPIKEY\\u0022, \\u0022KrLGXoPydpoAtnvIo9W4CwNQ9RJHS6iKOLwW9s2X\\u0022);\\r\\ndefine(\\u0022ZDUSER\\u0022, \\u0022support@aesseal.co.uk\\u0022);\\r\\ndefine(\\u0022ZDURL\\u0022, \\u0022https:\\/\\/aesseal.zendesk.com\\/api\\/v2\\u0022);\\r\\n\\r\\nfunction curlWrap($url, $json)\\r\\n{\\r\\n\\t$ch = curl_init();\\r\\n\\tcurl_setopt($ch, CURLOPT_FOLLOWLOCATION, true );\\r\\n\\tcurl_setopt($ch, CURLOPT_MAXREDIRS, 10 );\\r\\n\\tcurl_setopt($ch, CURLOPT_URL, ZDURL.$url);\\r\\n\\tcurl_setopt($ch, CURLOPT_USERPWD, ZDUSER.\\u0022\\/token:\\u0022.ZDAPIKEY);\\r\\n\\tcurl_setopt($ch, CURLOPT_CUSTOMREQUEST, \\u0022POST\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0027Content-type: application\\/json\\u0027));\\r\\n\\tcurl_setopt($ch, CURLOPT_USERAGENT, \\u0022MozillaXYZ\\/1.0\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_POSTFIELDS, $json);\\r\\n\\tcurl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n\\tcurl_setopt($ch, CURLOPT_TIMEOUT, 10);\\r\\n\\t$output = curl_exec($ch);\\r\\n\\tcurl_close($ch);\\r\\n\\t$decoded = json_decode($output);\\r\\n\\treturn $decoded;\\r\\n}\\r\\n\\r\\n$create = json_encode(array(\\r\\n\\t\\u0027ticket\\u0027 =\\u003E array(\\r\\n\\t\\t\\u0027subject\\u0027 =\\u003E \\u0027Product enquiry from [site:url]\\u0027,\\r\\n\\t\\t\\u0027comment\\u0027 =\\u003E \\u0027[entity:field_question] from [entity:field-hidden-form-url]\\u0027,\\r\\n                \\u0027custom_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114094308414,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:type]\\u0027\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\u0027requester\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\u0027name\\u0027 =\\u003E \\u0027[entity:field_first_name] [entity:field_last_name]\\u0027,\\r\\n\\t\\t\\t\\u0027email\\u0027 =\\u003E \\u0027[entity:field_email_address]\\u0027,\\r\\n                \\u0027user_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t\\t\\u0027organization\\u0027 =\\u003E \\u0027[entity:field_organisation]\\u0027\\r\\n\\t\\t\\t\\t\\t)\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\u0027organization\\u0027 =\\u003E array(\\r\\n                \\u0027organization_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t\\t)\\r\\n\\t\\t\\t)\\r\\n\\t\\t)\\r\\n\\t));\\r\\n$return = curlWrap(\\u0022\\/tickets.json\\u0022, $create);" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_submit_to_zendesk_with_error_code'] = entity_import('rules_config', '{ "rules_submit_to_zendesk_with_error_code" : {
      "LABEL" : "Submit to Zendesk with error code",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "DO" : [
        { "php_eval" : { "code" : "\\/\\/ add new ticket\\r\\n\\r\\ndefine(\\u0022ZDAPIKEY\\u0022, \\u0022KrLGXoPydpoAtnvIo9W4CwNQ9RJHS6iKOLwW9s2X\\u0022);\\r\\ndefine(\\u0022ZDUSER\\u0022, \\u0022support@aesseal.co.uk\\u0022);\\r\\ndefine(\\u0022ZDURL\\u0022, \\u0022https:\\/\\/aesseal.zendesk.com\\/api\\/v2\\u0022);\\r\\n\\r\\nfunction curlWrap($url, $json)\\r\\n{\\r\\n\\t$ch = curl_init();\\r\\n\\tcurl_setopt($ch, CURLOPT_FOLLOWLOCATION, true );\\r\\n\\tcurl_setopt($ch, CURLOPT_MAXREDIRS, 10 );\\r\\n\\tcurl_setopt($ch, CURLOPT_URL, ZDURL.$url);\\r\\n\\tcurl_setopt($ch, CURLOPT_USERPWD, ZDUSER.\\u0022\\/token:\\u0022.ZDAPIKEY);\\r\\n\\tcurl_setopt($ch, CURLOPT_CUSTOMREQUEST, \\u0022POST\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0027Content-type: application\\/json\\u0027));\\r\\n\\tcurl_setopt($ch, CURLOPT_USERAGENT, \\u0022MozillaXYZ\\/1.0\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_POSTFIELDS, $json);\\r\\n\\tcurl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n\\tcurl_setopt($ch, CURLOPT_TIMEOUT, 10);\\r\\n\\t$output = curl_exec($ch);\\r\\n\\t$error = curl_error($ch);\\r\\n\\t$http_code = curl_getinfo($ch,CURLINFO_HTTP_CODE);\\r\\n\\tcurl_close($ch);\\r\\n\\t$decoded = json_decode($output);\\r\\n\\treturn $decoded;\\r\\n\\r\\n\\tif($error){\\r\\n\\t\\techo $http_result-\\u003Eentity:field-question[LANGUAGE_NONE][0][\\u0027value\\u0027];\\r\\n\\t}\\r\\n\\telse{\\r\\n\\t\\techo $http_result-\\u003Eentity:field-question[LANGUAGE_NONE][0][\\u0027value\\u0027];\\r\\n\\t}\\r\\n}\\r\\n\\r\\n$create = json_encode(array(\\r\\n\\t\\u0027ticket\\u0027 =\\u003E array(\\r\\n\\t\\t\\u0027subject\\u0027 =\\u003E \\u0027General enquiry From [site:url]\\u0027,\\r\\n\\t\\t\\u0027comment\\u0027 =\\u003E \\u0027[entity:field_question]\\u0027,\\r\\n        \\u0027custom_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114247013453,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:field-hidden-form-url]\\u0027\\r\\n\\t\\t\\t)\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114094308414,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:type]\\u0027\\r\\n\\t\\t\\t),\\r\\n\\t\\t),\\r\\n\\t\\t\\u0027requester\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\u0027name\\u0027 =\\u003E \\u0027[entity:field_first_name] [entity:field_last_name]\\u0027,\\r\\n\\t\\t\\t\\u0027email\\u0027 =\\u003E \\u0027[entity:field_email_address]\\u0027,\\r\\n            \\u0027user_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t\\u0027organization\\u0027 =\\u003E \\u0027[entity:field_organisation]\\u0027,\\r\\n                \\u0027country\\u0027 =\\u003E \\u0027[entity:field_country]\\u0027,\\r\\n                \\u0027city\\u0027 =\\u003E \\u0027[entity:field_city]\\u0027\\r\\n\\t\\t\\t\\t)\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\u0027organization\\u0027 =\\u003E array(\\r\\n            \\u0027organization_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n                \\u0027country\\u0027 =\\u003E \\u0027[entity:field_country]\\u0027,\\r\\n                \\u0027city\\u0027 =\\u003E \\u0027[entity:field_city]\\u0027\\r\\n\\t\\t\\t\\t)\\r\\n\\t\\t\\t)\\r\\n\\t\\t)\\r\\n\\t));\\r\\n$return = curlWrap(\\u0022\\/tickets.json\\u0022, $create);" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_translation_alert'] = entity_import('rules_config', '{ "rules_translation_alert" : {
      "LABEL" : "Translation Alert",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "tmgmt" ],
      "ON" : { "tmgmt_job_insert" : [] },
      "DO" : []
    }
  }');
  return $items;
}
