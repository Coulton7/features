<?php
/**
 * @file
 * field_group_fe.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function field_group_fe_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_category|node|product_range|form';
  $field_group->group_name = 'group_category';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Category',
    'weight' => '17',
    'children' => array(
      0 => 'field_product_features',
      1 => 'metatags',
      2 => 'field_product_categories',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-category field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_category|node|product_range|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|comment|comment_node_article|form';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '6',
    'children' => array(
      0 => 'comment_body',
      1 => 'author',
      2 => 'subject',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-col10 field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|comment|comment_node_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|entityform|branch_disti_form|default';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-',
    'weight' => '14',
    'children' => array(
      0 => 'field_organisation',
      1 => 'field_telephone',
      2 => 'field_email_address',
      3 => 'field_question',
      4 => 'group_row_one',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col10 field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|entityform|branch_disti_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|entityform|branch_disti_form|form';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '14',
    'children' => array(
      0 => 'field_organisation',
      1 => 'field_telephone',
      2 => 'field_email_address',
      3 => 'field_hidden_branch_email',
      4 => 'field_elq_guid',
      5 => 'field_hubspot_form_id',
      6 => 'field_current_page_title',
      7 => 'field_question',
      8 => 'field_hidden_form_url',
      9 => 'field_zendesk_country',
      10 => 'group_row_one',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-col10 field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|entityform|branch_disti_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|entityform|contact_form|default';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_company',
      2 => 'field_question',
      3 => 'group_row_one',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col10 field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|entityform|contact_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|entityform|contact_form|form';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '7',
    'children' => array(
      0 => 'field_email',
      1 => 'field_company',
      2 => 'field_question',
      3 => 'field_hidden_branch_email',
      4 => 'field_current_page_title',
      5 => 'field_hubspot_form_id',
      6 => 'field_hidden_form_url',
      7 => 'field_elq_guid',
      8 => 'field_phone',
      9 => 'group_row_one',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-col10 field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|node|article|default';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_tags',
      2 => 'language',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col10 field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|node|article|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|node|case_studies|default';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_studies';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_thumbnail',
      2 => 'field_document',
      3 => 'field_industry',
      4 => 'field_api__plan_types',
      5 => 'field_reference',
      6 => 'field_case_ref',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|node|case_studies|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col10|node|locations|default';
  $field_group->group_name = 'group_col10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'locations';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_logo',
      2 => 'field_location_type',
      3 => 'field_location',
      4 => 'field_images',
      5 => 'field_website',
      6 => 'field_opening_hours',
      7 => 'field_form_display',
      8 => 'field_continent',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col10 field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col10|node|locations|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col6left|entityform|product_enquiry|default';
  $field_group->group_name = 'group_col6left';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'product_enquiry';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col6left',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'col6left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col6left field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col6left|entityform|product_enquiry|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col6left|entityform|product_enquiry|form';
  $field_group->group_name = 'group_col6left';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'product_enquiry';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col6left',
    'weight' => '12',
    'children' => array(
      0 => 'field_first_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'col6left',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'contact-col-left',
        'classes' => 'group-col6left field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col6left|entityform|product_enquiry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col6left|node|product_range|default';
  $field_group->group_name = 'group_col6left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col6left',
    'weight' => '7',
    'children' => array(
      0 => 'field_product_features',
      1 => 'field_external_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'col6left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col6left field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col6left|node|product_range|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col6right|entityform|product_enquiry|default';
  $field_group->group_name = 'group_col6right';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'product_enquiry';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col6right',
    'weight' => '2',
    'children' => array(
      0 => 'field_last_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'col6right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col6right field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col6right|entityform|product_enquiry|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col6right|entityform|product_enquiry|form';
  $field_group->group_name = 'group_col6right';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'product_enquiry';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col6right',
    'weight' => '13',
    'children' => array(
      0 => 'field_last_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'col6right',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'contact-col-right',
        'classes' => 'group-col6right field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col6right|entityform|product_enquiry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col6right|node|product_range|default';
  $field_group->group_name = 'group_col6right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col6right',
    'weight' => '9',
    'children' => array(
      0 => 'field_product_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'col6right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col6right field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col6right|node|product_range|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col|node|page|default';
  $field_group->group_name = 'group_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '3',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col|user|user|default';
  $field_group->group_name = 'group_col';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'col-sm-10',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_location',
      1 => 'field_social_links',
      2 => 'field_role',
      3 => 'field_description',
      4 => 'field_token_country',
      5 => 'summary',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'col-sm-10',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col field-group-html-element col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields|node|product_range|form';
  $field_group->group_name = 'group_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '2',
    'children' => array(
      0 => 'group_imagery',
      1 => 'group_category',
      2 => 'group_supplementary',
      3 => 'group_language',
      4 => 'group_workflow',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-fields field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_fields|node|product_range|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imagery|node|product_range|form';
  $field_group->group_name = 'group_imagery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Imagery',
    'weight' => '16',
    'children' => array(
      0 => 'field_product_image',
      1 => 'field_flex_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-imagery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_imagery|node|product_range|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_language|node|product_range|form';
  $field_group->group_name = 'group_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Language',
    'weight' => '19',
    'children' => array(
      0 => 'field_translation_notes',
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-language field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_language|node|product_range|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_1|entityform|branch_disti_form|default';
  $field_group->group_name = 'group_row_one_col_1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 1',
    'weight' => '42',
    'children' => array(
      0 => 'field_first_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-one-col-one field-group-html-element col-lg-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_1|entityform|branch_disti_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_1|entityform|contact_form|default';
  $field_group->group_name = 'group_row_one_col_1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 1',
    'weight' => '25',
    'children' => array(
      0 => 'field_first_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-one-col-1 field-group-html-element col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_1|entityform|contact_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_one|entityform|branch_disti_form|form';
  $field_group->group_name = 'group_row_one_col_one';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 1',
    'weight' => '61',
    'children' => array(
      0 => 'field_first_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'contact-col-left',
        'classes' => 'group-row-one-col-one field-group-html-element col-lg-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_one|entityform|branch_disti_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_one|entityform|contact_form|form';
  $field_group->group_name = 'group_row_one_col_one';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 1',
    'weight' => '41',
    'children' => array(
      0 => 'field_first_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'contact-col-left',
        'classes' => 'group-row-one-col-one field-group-html-element col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_one|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_two|entityform|branch_disti_form|default';
  $field_group->group_name = 'group_row_one_col_two';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 2',
    'weight' => '43',
    'children' => array(
      0 => 'field_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-one-col-two field-group-html-element col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_two|entityform|branch_disti_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_two|entityform|branch_disti_form|form';
  $field_group->group_name = 'group_row_one_col_two';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 2',
    'weight' => '62',
    'children' => array(
      0 => 'field_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'contact-col-right',
        'classes' => 'group-row-one-col-two field-group-html-element col-lg-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_two|entityform|branch_disti_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_two|entityform|contact_form|default';
  $field_group->group_name = 'group_row_one_col_two';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 2',
    'weight' => '26',
    'children' => array(
      0 => 'field_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-one-col-two field-group-html-element col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_two|entityform|contact_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one_col_two|entityform|contact_form|form';
  $field_group->group_name = 'group_row_one_col_two';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_one';
  $field_group->data = array(
    'label' => 'row 1 col 2',
    'weight' => '42',
    'children' => array(
      0 => 'field_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row 1 col 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'contact-col-right',
        'classes' => 'group-row-one-col-two field-group-html-element col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row_one_col_two|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one|entityform|branch_disti_form|default';
  $field_group->group_name = 'group_row_one';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_col10';
  $field_group->data = array(
    'label' => 'row1',
    'weight' => '39',
    'children' => array(
      0 => 'group_row_one_col_1',
      1 => 'group_row_one_col_two',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row-one field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_one|entityform|branch_disti_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one|entityform|branch_disti_form|form';
  $field_group->group_name = 'group_row_one';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_col10';
  $field_group->data = array(
    'label' => 'row1',
    'weight' => '47',
    'children' => array(
      0 => 'group_row_one_col_one',
      1 => 'group_row_one_col_two',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row-one field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_one|entityform|branch_disti_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one|entityform|contact_form|default';
  $field_group->group_name = 'group_row_one';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_col10';
  $field_group->data = array(
    'label' => 'row 1',
    'weight' => '23',
    'children' => array(
      0 => 'group_row_one_col_1',
      1 => 'group_row_one_col_two',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row-one field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_one|entityform|contact_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_one|entityform|contact_form|form';
  $field_group->group_name = 'group_row_one';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_col10';
  $field_group->data = array(
    'label' => 'row1',
    'weight' => '28',
    'children' => array(
      0 => 'group_row_one_col_one',
      1 => 'group_row_one_col_two',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row-one field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_one|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|comment|comment_node_article|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|comment|comment_node_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|entityform|branch_disti_form|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|entityform|branch_disti_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|entityform|branch_disti_form|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'branch_disti_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row|entityform|branch_disti_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|entityform|contact_form|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|entityform|contact_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|entityform|contact_form|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|entityform|contact_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|entityform|product_enquiry|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'product_enquiry';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col6left',
      1 => 'group_col6right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-div row',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_row|entityform|product_enquiry|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|entityform|product_enquiry|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'product_enquiry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '1',
    'children' => array(
      0 => 'group_col6left',
      1 => 'group_col6right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-row field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row|entityform|product_enquiry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|article|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '2',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|node|article|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|case_studies|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_studies';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row|node|case_studies|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|locations|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'locations';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col10',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row|node|locations|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|page|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '1',
    'children' => array(
      0 => 'group_col',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|product_range|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '2',
    'children' => array(
      0 => 'group_col6right',
      1 => 'group_col6left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-div row row-deep',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row|node|product_range|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|user|user|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-row field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplementary|node|product_range|form';
  $field_group->group_name = 'group_supplementary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Supplementary',
    'weight' => '18',
    'children' => array(
      0 => 'field_external_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-supplementary field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_supplementary|node|product_range|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|product_range|form';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_range';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'workflow',
    'weight' => '20',
    'children' => array(
      0 => 'field_access_workflow',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-workflow field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_workflow|node|product_range|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Fields');
  t('Imagery');
  t('Language');
  t('Supplementary');
  t('col');
  t('col-');
  t('col-sm-10');
  t('col6left');
  t('col6right');
  t('row');
  t('row 1');
  t('row 1 col 1');
  t('row 1 col 2');
  t('row1');
  t('workflow');

  return $field_groups;
}
