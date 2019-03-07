<?php
/**
 * @file
 * workflow_fe.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function workflow_fe_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'node_content_workflow'
  $workflows['node_content_workflow'] = entity_import('Workflow', '{
    "name" : "node_content_workflow",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "(creation)" : {"weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "draft" : {"weight":"-20","sysid":"0","state":"Draft","status":"1","name":"draft"},
      "edit" : {"weight":"-18","sysid":"0","state":"Edit","status":"0","name":"edit"},
      "moderate" : {"weight":"-19","sysid":"0","state":"Moderate","status":"1","name":"moderate"},
      "publish" : {"weight":"-17","sysid":"0","state":"Publish","status":"1","name":"publish"}
    },
    "transitions" : {
      "_creation_to_draft" : {"roles":{"-1":-1,"5":5,"6":6},"name":"_creation_to_draft","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"draft"},
      "_creation_to_moderate" : {"roles":{"-1":-1,"5":5,"6":6},"name":"_creation_to_moderate","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"moderate"},
      "draft_to_draft" : {"roles":{"-1":-1,"5":5,"6":6,"4":4,"7":7,"3":3},"name":"draft_to_draft","label":"","rdf_mapping":[],"start_state":"draft","end_state":"draft"},
      "draft_to_moderate" : {"roles":{"-1":-1,"5":5},"name":"draft_to_moderate","label":"","rdf_mapping":[],"start_state":"draft","end_state":"moderate"},
      "moderate_to_draft" : {"roles":{"-1":-1,"5":5,"6":6,"4":4,"7":7},"name":"moderate_to_draft","label":"","rdf_mapping":[],"start_state":"moderate","end_state":"draft"},
      "moderate_to_moderate" : {"roles":{"-1":-1,"5":5,"6":6,"4":4,"7":7,"3":3},"name":"moderate_to_moderate","label":"","rdf_mapping":[],"start_state":"moderate","end_state":"moderate"},
      "moderate_to_publish" : {"roles":{"6":6,"4":4},"name":"moderate_to_publish","label":"","rdf_mapping":[],"start_state":"moderate","end_state":"publish"},
      "publish_to_draft" : {"roles":{"6":6,"4":4},"name":"publish_to_draft","label":"","rdf_mapping":[],"start_state":"publish","end_state":"draft"},
      "publish_to_moderate" : {"roles":{"-1":-1,"5":5,"6":6,"4":4},"name":"publish_to_moderate","label":"","rdf_mapping":[],"start_state":"publish","end_state":"moderate"},
      "publish_to_publish" : {"roles":{"-1":-1,"5":5,"6":6,"4":4,"7":7,"3":3},"name":"publish_to_publish","label":"","rdf_mapping":[],"start_state":"publish","end_state":"publish"}
    },
    "label" : "Node Content Workflow",
    "typeMap" : [],
    "rdf_mapping" : [],
    "system_roles" : {
      "-1" : "(author)",
      "5" : "contributor user",
      "6" : "moderator user",
      "4" : "editor user",
      "7" : "publisher user",
      "3" : "administrator"
    }
  }');

  return $workflows;
}
