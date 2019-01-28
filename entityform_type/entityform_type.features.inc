<?php
/**
 * @file
 * entityform_type.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function entityform_type_default_entityform_type() {
  $items = array();
  $items['branch_disti_form'] = entity_import('entityform_type', '{
    "type" : "branch_disti_form",
    "label" : "Connect",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank you",
      "submission_text" : {
        "value" : "\\u003Cdiv class=\\u0022container-fluid\\u0022\\u003E\\r\\n\\u003Cdiv class=\\u0022row\\u0022\\u003E\\r\\n\\u003Cdiv class=\\u0022col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2\\u0022\\u003E\\r\\n\\u003Cp class=\\u0022lead\\u0022\\u003EThank you for submitting a contact request we will be in touch with you in the next 48 hours.\\u003C\\/p\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : 0,
        "8" : 0,
        "9" : 0,
        "5" : 0,
        "6" : 0,
        "4" : 0,
        "7" : 0,
        "3" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cdiv class=\\u0022col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 \\u0022\\u003E\\r\\n\\u003Cp\\u003EFor more information on the services that we offer please fill in the contact form below.\\u003C\\/p\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n",
        "format" : "ck_editor"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['contact_form'] = entity_import('entityform_type', '{
    "type" : "contact_form",
    "label" : "Contact Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank you",
      "submission_text" : {
        "value" : "Thank you for submitting a contact request we will be in touch with you in the next 48 hours",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "8" : 0,
        "5" : 0,
        "6" : 0,
        "4" : 0,
        "7" : 0,
        "3" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cdiv class=\\u0022col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 pre-instructions\\u0022\\u003E\\r\\n\\u003Cp\\u003EFill in the form if you wish us to contact you about any more details\\u003C\\/p\\u003E\\r\\n\\u003C\\/div\\u003E",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['content_gate'] = entity_import('entityform_type', '{
    "type" : "content_gate",
    "label" : "Content gate",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "ck_editor" },
      "submit_button_text" : "Download Resource",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "ck_editor" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : 0, "6" : 0, "4" : 0, "7" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "[current-page:url]?fs=y",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EBy supplying your information, you authorise AESSEAL\\u003Csup\\u003E\\u00ae\\u0026nbsp;\\u003C\\/sup\\u003Eto update you with relevant information about its services (you may unsubscribe at anytime). AESSEAL\\u003Csup\\u003E\\u00ae\\u0026nbsp;\\u003C\\/sup\\u003Erespects your privacy,\\u0026nbsp;\\u003Ca href =\\u0022http:\\/\\/www.aesseal.com\\/de\\/datenschutzerkl%C3%A4rung\\u0022 target=\\u0022_blank\\u0022\\u003Eread the policy here\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['product_enquiry'] = entity_import('entityform_type', '{
    "type" : "product_enquiry",
    "label" : "Product Enquiry",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "ck_editor" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank You",
      "submission_text" : {
        "value" : "\\u003Cdiv class=\\u0022container-fluid\\u0022\\u003E\\r\\n\\u003Cdiv class=\\u0022row\\u0022\\u003E\\r\\n\\u003Cdiv class=\\u0022col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2\\u0022\\u003E\\r\\n\\u003Cp class=\\u0022lead\\u0022\\u003EThank you for submitting a contact request we will be in touch with you in the next 48 hours.\\u003C\\/p\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "5" : "5",
        "6" : "6",
        "4" : "4",
        "3" : "3",
        "8" : 0,
        "9" : 0,
        "7" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EFor more information on the services that we offer please fill in the contact form below.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "ck_editor"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
