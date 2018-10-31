<?php
/**
 * @file
 * field_validation_rule.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function field_validation_rule_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Check Email';
  $rule->name = 'check_email';
  $rule->field_name = 'field_email_address';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'branch_disti_form';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter a valid email address';
  $export['check_email'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'email address check';
  $rule->name = 'email_address_check';
  $rule->field_name = 'field_email_address';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'content_gate';
  $rule->validator = 'field_validation_specific_value_validator';
  $rule->settings = array(
    'data' => '@',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter a valid email address';
  $export['email_address_check'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'email address check 2';
  $rule->name = 'email_address_check_2';
  $rule->field_name = 'field_email';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'product_enquiry';
  $rule->validator = 'field_validation_specific_value_validator';
  $rule->settings = array(
    'data' => '@',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter a valid email address';
  $export['email_address_check_2'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Name check';
  $rule->name = 'name_check';
  $rule->field_name = 'field_last_name';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'branch_disti_form';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if ($this->value == $this->entity->field_first_name[\'en\'][0][\'value\']) {
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'These values should be unique';
  $export['name_check'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Name check 2';
  $rule->name = 'name_check_2';
  $rule->field_name = 'field_last_name';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'product_enquiry';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if ($this->value == $this->entity->field_first_name[\'en\'][0][\'value\']) {
  $this->set_error();
}
',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter two different values as these fields are not allowed to match';
  $export['name_check_2'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Name check 3';
  $rule->name = 'name_check_3';
  $rule->field_name = 'field_first_name';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'content_gate';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if ($this->value == $this->entity->field_first_name[\'en\'][0][\'value\']) {
  $this->set_error();
}
',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter two different values as these fields are not allowed to match';
  $export['name_check_3'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Name check 4';
  $rule->name = 'name_check_4';
  $rule->field_name = 'field_last_name';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'contact_form';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if ($this->value == $this->entity->field_first_name[\'en\'][0][\'value\']) {
  $this->set_error();
}
',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter two different values as these fields are not allowed to match';
  $export['name_check_4'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'no email';
  $rule->name = 'no_email';
  $rule->field_name = 'field_first_name';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'branch_disti_form';
  $rule->validator = 'field_validation_blacklist_validator';
  $rule->settings = array(
    'data' => '@',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Email address can not be entered as a name';
  $export['no_email'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'stop email';
  $rule->name = 'stop_email';
  $rule->field_name = 'field_last_name';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'branch_disti_form';
  $rule->validator = 'field_validation_blacklist_validator';
  $rule->settings = array(
    'data' => '@',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Email address can not be entered in a name field';
  $export['stop_email'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Telephone number check';
  $rule->name = 'telephone_number_check';
  $rule->field_name = 'field_telephone';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'branch_disti_form';
  $rule->validator = 'field_validation_numeric2_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      5 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please enter a valid telephone number';
  $export['telephone_number_check'] = $rule;

  return $export;
}
