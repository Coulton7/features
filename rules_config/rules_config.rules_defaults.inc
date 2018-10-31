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
        { "php_eval" : { "code" : "\\/\\/ add new ticket\\r\\n\\r\\ndefine(\\u0022ZDAPIKEY\\u0022, \\u0022KrLGXoPydpoAtnvIo9W4CwNQ9RJHS6iKOLwW9s2X\\u0022);\\r\\ndefine(\\u0022ZDUSER\\u0022, \\u0022support@aesseal.co.uk\\u0022);\\r\\ndefine(\\u0022ZDURL\\u0022, \\u0022https:\\/\\/aesseal.zendesk.com\\/api\\/v2\\u0022);\\r\\n\\r\\nfunction curlWrap($url, $json)\\r\\n{\\r\\n\\t$ch = curl_init();\\r\\n\\tcurl_setopt($ch, CURLOPT_FOLLOWLOCATION, true );\\r\\n\\tcurl_setopt($ch, CURLOPT_MAXREDIRS, 10 );\\r\\n\\tcurl_setopt($ch, CURLOPT_URL, ZDURL.$url);\\r\\n\\tcurl_setopt($ch, CURLOPT_USERPWD, ZDUSER.\\u0022\\/token:\\u0022.ZDAPIKEY);\\r\\n\\tcurl_setopt($ch, CURLOPT_CUSTOMREQUEST, \\u0022POST\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0027Content-type: application\\/json\\u0027));\\r\\n\\tcurl_setopt($ch, CURLOPT_USERAGENT, \\u0022MozillaXYZ\\/1.0\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_POSTFIELDS, $json);\\r\\n\\tcurl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n\\tcurl_setopt($ch, CURLOPT_TIMEOUT, 10);\\r\\n\\t$output = curl_exec($ch);\\r\\n\\tcurl_close($ch);\\r\\n\\t$decoded = json_decode($output);\\r\\n\\treturn $decoded;\\r\\n}\\r\\n\\r\\n$create = json_encode(array(\\r\\n\\t\\u0027ticket\\u0027 =\\u003E array(\\r\\n\\t\\t\\u0027subject\\u0027 =\\u003E \\u0027General enquiry From [site:url]\\u0027,\\r\\n\\t\\t\\u0027comment\\u0027 =\\u003E \\u0027[entity:field_question]\\u0027,\\r\\n        \\u0027custom_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114247013453,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:field-hidden-form-url]\\u0027\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114094308414,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:type] Form\\u0027\\r\\n\\t\\t\\t),\\r\\n\\t\\t),\\r\\n\\t\\t\\u0027requester\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\u0027name\\u0027 =\\u003E \\u0027[entity:field_first_name] [entity:field_last_name]\\u0027,\\r\\n\\t\\t\\t\\u0027email\\u0027 =\\u003E \\u0027[entity:field_email_address]\\u0027,\\r\\n            \\u0027user_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t\\u0027organization\\u0027 =\\u003E \\u0027[entity:field_organisation]\\u0027,\\r\\n\\t\\t\\t\\t)\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\u0027organization\\u0027 =\\u003E array(\\r\\n            \\u0027organization_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t)\\r\\n\\t\\t\\t)\\r\\n\\t\\t)\\r\\n\\t));\\r\\n$return = curlWrap(\\u0022\\/tickets.json\\u0022, $create);" } }
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
        { "php_eval" : { "code" : "\\/\\/ add new ticket\\r\\n\\r\\ndefine(\\u0022ZDAPIKEY\\u0022, \\u0022KrLGXoPydpoAtnvIo9W4CwNQ9RJHS6iKOLwW9s2X\\u0022);\\r\\ndefine(\\u0022ZDUSER\\u0022, \\u0022support@aesseal.co.uk\\u0022);\\r\\ndefine(\\u0022ZDURL\\u0022, \\u0022https:\\/\\/aesseal.zendesk.com\\/api\\/v2\\u0022);\\r\\n\\r\\nfunction curlWrap($url, $json)\\r\\n{\\r\\n\\t$ch = curl_init();\\r\\n\\tcurl_setopt($ch, CURLOPT_FOLLOWLOCATION, true );\\r\\n\\tcurl_setopt($ch, CURLOPT_MAXREDIRS, 10 );\\r\\n\\tcurl_setopt($ch, CURLOPT_URL, ZDURL.$url);\\r\\n\\tcurl_setopt($ch, CURLOPT_USERPWD, ZDUSER.\\u0022\\/token:\\u0022.ZDAPIKEY);\\r\\n\\tcurl_setopt($ch, CURLOPT_CUSTOMREQUEST, \\u0022POST\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_HTTPHEADER, array(\\u0027Content-type: application\\/json\\u0027));\\r\\n\\tcurl_setopt($ch, CURLOPT_USERAGENT, \\u0022MozillaXYZ\\/1.0\\u0022);\\r\\n\\tcurl_setopt($ch, CURLOPT_POSTFIELDS, $json);\\r\\n\\tcurl_setopt($ch, CURLOPT_RETURNTRANSFER, true);\\r\\n\\tcurl_setopt($ch, CURLOPT_TIMEOUT, 10);\\r\\n\\t$output = curl_exec($ch);\\r\\n\\tcurl_close($ch);\\r\\n\\t$decoded = json_decode($output);\\r\\n\\treturn $decoded;\\r\\n}\\r\\n\\r\\n$create = json_encode(array(\\r\\n\\t\\u0027ticket\\u0027 =\\u003E array(\\r\\n\\t\\t\\u0027subject\\u0027 =\\u003E \\u0027Product enquiry from [site:url]\\u0027,\\r\\n\\t\\t\\u0027comment\\u0027 =\\u003E \\u0027[entity:field_question]\\u0027,\\r\\n        \\u0027custom_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114247013453,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:field-hidden-form-url]\\u0027\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\tarray(\\r\\n\\t\\t\\t\\t\\u0027id\\u0027 =\\u003E 114094308414,\\r\\n\\t\\t\\t\\t\\u0027value\\u0027 =\\u003E \\u0027[entity:type]\\u0027\\r\\n\\t\\t\\t),\\r\\n\\t\\t),\\r\\n\\t\\t\\u0027requester\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\u0027name\\u0027 =\\u003E \\u0027[entity:field_first_name] [entity:field_last_name]\\u0027,\\r\\n\\t\\t\\t\\u0027email\\u0027 =\\u003E \\u0027[entity:field_email_address]\\u0027,\\r\\n                \\u0027user_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t\\t\\u0027organization\\u0027 =\\u003E \\u0027[entity:field_organisation]\\u0027\\r\\n\\t\\t\\t\\t\\t)\\r\\n\\t\\t\\t),\\r\\n\\t\\t\\u0027organization\\u0027 =\\u003E array(\\r\\n                \\u0027organization_fields\\u0027 =\\u003E array(\\r\\n\\t\\t\\t\\t\\t\\u0027telephone\\u0027 =\\u003E \\u0027[entity:field_telephone]\\u0027,\\r\\n\\t\\t\\t\\t\\t)\\r\\n\\t\\t\\t)\\r\\n\\t\\t)\\r\\n\\t));\\r\\n$return = curlWrap(\\u0022\\/tickets.json\\u0022, $create);" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
