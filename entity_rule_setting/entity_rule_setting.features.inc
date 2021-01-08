<?php
/**
 * @file
 * entity_rule_setting.features.inc
 */

/**
 * Implements hook_default_entity_rule_setting().
 */
function entity_rule_setting_default_entity_rule_setting() {
  $items = array();
  $items['2'] = entity_import('entity_rule_setting', '{
    "id" : "2",
    "entity_type" : "entityform",
    "bundle" : "branch_disti_form",
    "op" : "entityform_submission",
    "rules_config" : "rules_name_check",
    "weight" : "0",
    "args" : null,
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['3'] = entity_import('entity_rule_setting', '{
    "id" : "3",
    "entity_type" : "entityform",
    "bundle" : "product_enquiry",
    "op" : "entityform_submission",
    "rules_config" : "rules_name_check",
    "weight" : "0",
    "args" : null,
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['4'] = entity_import('entity_rule_setting', '{
    "id" : "4",
    "entity_type" : "entityform",
    "bundle" : "branch_disti_form",
    "op" : "validation",
    "rules_config" : "rules_check_names",
    "weight" : "0",
    "args" : { "entity_is_validate" : 1 },
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['5'] = entity_import('entity_rule_setting', '{
    "id" : "5",
    "entity_type" : "entityform",
    "bundle" : "contact_form",
    "op" : "entityform_submission",
    "rules_config" : "rules_name_check",
    "weight" : "0",
    "args" : null,
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['6'] = entity_import('entity_rule_setting', '{
    "id" : "6",
    "entity_type" : "entityform",
    "bundle" : "contact_form",
    "op" : "validation",
    "rules_config" : "rules_check_names",
    "weight" : "0",
    "args" : null,
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['7'] = entity_import('entity_rule_setting', '{
    "id" : "7",
    "entity_type" : "entityform",
    "bundle" : "product_enquiry",
    "op" : "validation",
    "rules_config" : "rules_check_names",
    "weight" : "0",
    "args" : null,
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['22'] = entity_import('entity_rule_setting', '{
    "id" : "22",
    "entity_type" : "entityform",
    "bundle" : "branch_disti_form",
    "op" : "entityform_submission",
    "rules_config" : "rules_submit_to_hubspot_v3",
    "weight" : "0",
    "args" : null,
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
