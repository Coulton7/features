<?php
/**
 * @file
 * views_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'card_product_range';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Card Product Range';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Range';
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 product-card';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_product_image' => 'field_product_image',
    'name' => 'name',
    'description' => 'description',
    'field_external_link' => 'field_external_link',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<blockquote cite="http://www.aesseal.com/en/product-range"><p>AESSEAL® holds the world\'s most comprehensive standard inventory portfolio of mechanical seals, bearing protectors, seal support systems and packing.</p></blockquote>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'product_range' => 'product_range',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Product Range';
  $handler->display->display_options['field_language'] = 'en';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '  <div class="col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2">
<div class="col-lg-4 col-md-6">
     <div class="flexslider">
  <ul class="slides">
    <li>
      <img src="/sites/all/themes/aesbs337/images/product/CAPI-Single-slide.jpg" class="img-circle img-responsive" />
    </li>
    <li>
      <img src="/sites/all/themes/aesbs337/images/product/CS-component-slide.jpg" class="img-circle img-responsive" />
    </li>
    <li>
      <img src="/sites/all/themes/aesbs337/images/product/EasyClean-slide.jpg" class="img-circle img-responsive" />
    </li>
    <li>
      <img src="/sites/all/themes/aesbs337/images/product/LabTecta-AX-slide.jpg" class="img-circle img-responsive" />
    </li>
  </ul>
</div>
  </div>
  <div class="col-lg-8 col-md-6"><blockquote cite="http://www.aesseal.com/en/product-range"><h2>AESSEAL<sup>®</sup> holds the world\'s most comprehensive standard inventory portfolio ofmechanical seals, bearing protectors, seal support systems and packing.</h2></blockquote>
     <div class="col-lg-6 col-md-6"><div class="alert alert-info">This is not our full product range please visit our international website for the full range of products</div></div>
     <div class="col-lg 6 col-md-6"><p>Custom products for your country</p><a class="btn btn-default" href="#" role="button">View Products</a></div>
  </div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
    'class' => 'prod-card-image img-adaptive',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_class'] = 'prod-name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_type'] = 'div';
  $handler->display->display_options['fields']['description']['element_class'] = 'prod-desc';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Field: external link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['alter']['text'] = '<p>View the range of <a href="[field_external_link-url]" alt="[field_external_link-title]" target="_blank">[name]</a> on aesseal.com </p>';
  $handler->display->display_options['fields']['field_external_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_external_link']['element_class'] = 'prod-link';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['path'] = 'product-range-card';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Product Range';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['card_product_range'] = $view;

  $view = new view();
  $view->name = 'case_studies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'case studies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case Studies';
  $handler->display->display_options['css_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['text'] = '<div class="image-link">
[field_thumbnail]
<div class="black-fade">
<a href=[path]><i class="fa fa-external-link text-vertical-center social-font" aria-hidden="true"></i></a>
</div>
</div>';
  $handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'float-right',
  );
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['label'] = '';
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_industry']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_industry']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Types */
  $handler->display->display_options['fields']['field_types']['id'] = 'field_types';
  $handler->display->display_options['fields']['field_types']['table'] = 'field_data_field_types';
  $handler->display->display_options['fields']['field_types']['field'] = 'field_types';
  $handler->display->display_options['fields']['field_types']['label'] = '';
  $handler->display->display_options['fields']['field_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_types']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
    'class' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_content_gate']['id'] = 'field_content_gate';
  $handler->display->display_options['fields']['field_content_gate']['table'] = 'field_data_field_content_gate';
  $handler->display->display_options['fields']['field_content_gate']['field'] = 'field_content_gate';
  $handler->display->display_options['fields']['field_content_gate']['label'] = '';
  $handler->display->display_options['fields']['field_content_gate']['element_label_colon'] = FALSE;
  /* Field: Content: Related Products  */
  $handler->display->display_options['fields']['field_reference']['id'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['table'] = 'field_data_field_reference';
  $handler->display->display_options['fields']['field_reference']['field'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['label'] = '';
  $handler->display->display_options['fields']['field_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reference']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reference']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: To conform to the following API Plan Types  */
  $handler->display->display_options['fields']['field_api__plan_types']['id'] = 'field_api__plan_types';
  $handler->display->display_options['fields']['field_api__plan_types']['table'] = 'field_data_field_api__plan_types';
  $handler->display->display_options['fields']['field_api__plan_types']['field'] = 'field_api__plan_types';
  $handler->display->display_options['fields']['field_api__plan_types']['label'] = '';
  $handler->display->display_options['fields']['field_api__plan_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_api__plan_types']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_api__plan_types']['settings'] = array(
    'class' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_studies' => 'case_studies',
    'success_stories' => 'success_stories',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Industry filter';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Case Studies */
  $handler = $view->new_display('page', 'Case Studies', 'page');
  $handler->display->display_options['path'] = 'case-studies';
  $export['case_studies'] = $view;

  $view = new view();
  $view->name = 'case_studies_stream';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'case studies stream';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case Studies Stream';
  $handler->display->display_options['css_class'] = 'row grey-gradient iceberg-gradientsea';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-4';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<style>
.desktop-stream .block-title{display:none;}
.grey-gradient{background:none; border:none;}
</style>
';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'industry' => 'industry',
    'tags' => 'tags',
    'continent' => 0,
    'product_range' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_thumbnail]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
    'class' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_studies' => 'case_studies',
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'success_stories' => 'success_stories',
    'tweet' => 'tweet',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['vid']['group'] = 2;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    66 => '66',
    65 => '65',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Case study Stream */
  $handler = $view->new_display('block', 'Case study Stream', 'block');
  $handler->display->display_options['block_description'] = 'Case Study Stream';
  $export['case_studies_stream'] = $view;

  $view = new view();
  $view->name = 'contact_form';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform_type';
  $view->human_name = 'contact-form';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'blue-background';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 blue-background';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 ">
<p>AESSEAL<sup>®</sup> needs the contact information you provide to us to contact you about our products and services. For information on our privacy practices and commitment to protecting your privacy, <a href="http://www.aesseal.com/en/privacy-policy">check out our Privacy Policy.</a></p></div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Entityform Type: Rendered Entityform Type */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform_type';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Filter criterion: Entityform Type: Internal, numeric entityform type ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '4';

  /* Display: Connect - Contact */
  $handler = $view->new_display('block', 'Connect - Contact', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = ' ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Connect - Contact Form';

  /* Display: Contact-form */
  $handler = $view->new_display('block', 'Contact-form', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Type: Internal, numeric entityform type ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Default-Contact-form';

  /* Display: Contact-product */
  $handler = $view->new_display('block', 'Contact-product', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 blue-background';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Type: Internal, numeric entityform type ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '5';
  $handler->display->display_options['block_description'] = 'Contact-Product';

  /* Display: Content Gate */
  $handler = $view->new_display('block', 'Content Gate', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Type: Internal, numeric entityform type ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '6';
  $handler->display->display_options['block_description'] = 'Content Gate';
  $export['contact_form'] = $view;

  $view = new view();
  $view->name = 'content_streams';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Page News Stream';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 text-center row-deep"> 
<div class="col-sm-6"><p>These are the most recent news stories locally and nationally click through on the link to find a combination of news stories and social media posts</p> 
</div>
<div class="col-sm-6"> 
    <a href="/news" class="btn btn-lg btn-blue" role="button" target="_self">Read All News</a> 
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'ck_editor';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_image]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '121',
    'class' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read Full Article';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_studies' => 'case_studies',
  );

  /* Display: News Stream */
  $handler = $view->new_display('block', 'News Stream', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news col-xs-12 col-sm-6 col-md-6 col-lg-4';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '</hr>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'all news button';
  $handler->display->display_options['footer']['area']['content'] = '<div class="col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 text-center row-deep"> 
<div class="col-sm-6"><p>These are the most recent news stories locally and nationally click through on the link to find a combination of news stories and social media posts</p> 
</div>
<div class="col-sm-6"> 
    <a href="/news" class="btn btn-lg btn-blue" role="button" target="_self" title="Read All News">Read All News</a> 
</div>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'Homepage - News stream';
  $export['content_streams'] = $view;

  $view = new view();
  $view->name = 'employees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Employees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Key Contacts';
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'user-flex col-xs-6 col-sm-4 col-md-4 col-lg-5';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = TRUE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_description_et' => 'field_description_et',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="container-fluid">
      <div class="row">
	  <div class="col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2">
</div>
</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'ck_editor';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_location_target_id']['id'] = 'field_user_location_target_id';
  $handler->display->display_options['relationships']['field_user_location_target_id']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['relationships']['field_user_location_target_id']['field'] = 'field_user_location_target_id';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<img src="[picture]" class="img-circle  img-adaptive" alt="[name]">';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Job Role */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_role']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_role']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_role']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['fields']['field_role']['field_api_classes'] = TRUE;
  /* Field: Entity translation: Description: translated */
  $handler->display->display_options['fields']['field_description_et']['id'] = 'field_description_et';
  $handler->display->display_options['fields']['field_description_et']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description_et']['field'] = 'field_description_et';
  $handler->display->display_options['fields']['field_description_et']['label'] = '';
  $handler->display->display_options['fields']['field_description_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_et']['settings'] = array(
    'class' => '',
  );
  /* Field: User: User Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_user_location']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
    'class' => '',
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Location: Country */
  $handler->display->display_options['filters']['country']['id'] = 'country';
  $handler->display->display_options['filters']['country']['table'] = 'location';
  $handler->display->display_options['filters']['country']['field'] = 'country';
  $handler->display->display_options['filters']['country']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['filters']['country']['value'] = array(
    'ie' => 'ie',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Key Staff';
  $export['employees'] = $view;

  $view = new view();
  $view->name = 'footer_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Location Views - Text Fields';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'country_1' => 'country_1',
    'name' => 'name',
    'street' => 'street',
    'province' => 'province',
    'city' => 'city',
    'postal_code' => 'postal_code',
    'country' => 'country',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_location_target_id']['id'] = 'field_user_location_target_id';
  $handler->display->display_options['relationships']['field_user_location_target_id']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['relationships']['field_user_location_target_id']['field'] = 'field_user_location_target_id';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country_1']['id'] = 'country_1';
  $handler->display->display_options['fields']['country_1']['table'] = 'location';
  $handler->display->display_options['fields']['country_1']['field'] = 'country';
  $handler->display->display_options['fields']['country_1']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['country_1']['label'] = '';
  $handler->display->display_options['fields']['country_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country_1']['alter']['text'] = '<img class="country-icon-footer" src="/sites/all/themes/aesbs337/images/icon/flag/[country_1].svg" alt="[country] flag">';
  $handler->display->display_options['fields']['country_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['country_1']['style'] = 'code';
  /* Field: Location: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'location';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'System User';

  /* Display: footer-location */
  $handler = $view->new_display('block', 'footer-location', 'block');
  $handler->display->display_options['block_description'] = 'Footer - Location';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Website Local Page */
  $handler = $view->new_display('block', 'Website Local Page', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block-title">Your Regional Head Office</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'location';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'location_map';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['block_description'] = 'Your Regional Head Office - block for main location page';
  $handler->display->display_options['block_caching'] = '-1';
  $export['footer_location'] = $view;

  $view = new view();
  $view->name = 'global_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Global and National Locations GMAP';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'From a Customer Perspective';
  $handler->display->display_options['css_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap zoom=1  |type=Terrain |align=Center]
';
  $handler->display->display_options['style_options']['markertype'] = 'alt small red';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['geofield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['rmtfieldraw'] = 1;
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['center_on_proximityarg'] = 1;
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['autoclick_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'address';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['address']['alter']['text'] = '<div class="text-center"><h4>[title]</h4></div>
<div class="text-center">[address]</div>';
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 'name',
    'locpick' => 'locpick',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'email' => 0,
    'phone' => 0,
    'province_name' => 0,
    'country_name' => 0,
  );
  $handler->display->display_options['fields']['address']['exclude_cck'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Location: Distance / Proximity */
  $handler->display->display_options['arguments']['distance']['id'] = 'distance';
  $handler->display->display_options['arguments']['distance']['table'] = 'location';
  $handler->display->display_options['arguments']['distance']['field'] = 'distance';
  $handler->display->display_options['arguments']['distance']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['distance']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['distance']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['distance']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['distance']['type'] = 'latlon';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<div class="container-fluid grey-gradient">
      <div class="row row-deep">
	  <div class="col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2">
<h2 class="block-title">Global Locations</h2>
       <p>Customer service is provided from 230 locations in 104 countries, including 9 manufacturing and 58 repair locations, with more than 300 customer service representatives who visit industrial plants every day.</p>
		</div>
      </div>
    </div>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="container-fluid">
      <div class="row row-deep">
	  <div class="col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2">
<h2 class="block-title">Uncompromising Integrity</h2>
       <p>All of our business activities are completely transparent and we operate with the same uncompromising integrity in each of the 104 countries where we provide products and services.</p>
		</div>
      </div>
    </div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['block_description'] = 'Global Locations GMAP';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Branches In Your Country';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Location: Country */
  $handler->display->display_options['filters']['country']['id'] = 'country';
  $handler->display->display_options['filters']['country']['table'] = 'location';
  $handler->display->display_options['filters']['country']['field'] = 'country';
  $handler->display->display_options['filters']['country']['value'] = array(
    'ie' => 'ie',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Distributor' => 'Distributor',
  );
  $handler->display->display_options['block_description'] = 'National Locations GMAP';
  $export['global_locations'] = $view;

  $view = new view();
  $view->name = 'industry_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'industry-block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'float-left';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-row row-deep';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'field_industry_image' => 'field_industry_image',
    'description' => 'description',
    'field_external_link' => 'field_external_link',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Industry image */
  $handler->display->display_options['fields']['field_industry_image']['id'] = 'field_industry_image';
  $handler->display->display_options['fields']['field_industry_image']['table'] = 'field_data_field_industry_image';
  $handler->display->display_options['fields']['field_industry_image']['field'] = 'field_industry_image';
  $handler->display->display_options['fields']['field_industry_image']['label'] = '';
  $handler->display->display_options['fields']['field_industry_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_industry_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_industry_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'product',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Field: external link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['alter']['text'] = '<p>For more information on <a href="[field_external_link-url]" alt="[field_external_link-title]" target="_blank" title="[name]">[name] </a> go to aesseal.com</p>';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['settings'] = array(
    'class' => '',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'industry' => 'industry',
  );
  /* Filter criterion: Taxonomy term: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block1 */
  $handler = $view->new_display('block', 'Block1', 'block');
  $handler->display->display_options['block_description'] = 'Solutions - Industry Block 1';

  /* Display: Block2 */
  $handler = $view->new_display('block', 'Block2', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'float-right';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '5';
  $handler->display->display_options['block_description'] = 'Solutions - Industry Block 2';
  $export['industry_block'] = $view;

  $view = new view();
  $view->name = 'key_branches';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Key Branches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Key Branches';
  $handler->display->display_options['css_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2 padding-2em';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'country' => 'country',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: External Path */
  $handler->display->display_options['fields']['field_external_path']['id'] = 'field_external_path';
  $handler->display->display_options['fields']['field_external_path']['table'] = 'field_data_field_external_path';
  $handler->display->display_options['fields']['field_external_path']['field'] = 'field_external_path';
  $handler->display->display_options['fields']['field_external_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_path']['settings'] = array(
    'class' => '',
  );
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['text'] = '<img class="country-icon" src="/sites/all/themes/aesbs337/images/icon/flag/[country].svg" alt="[country] flag">';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['country']['style'] = 'code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_external_path] " target="_blank" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '13',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '13',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Key Branches';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-locations';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Africa';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Africa */
  $handler = $view->new_display('page', 'Africa', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['text'] = '<img class="country-icon" src="/sites/all/themes/aesbs337/images/icon/flag/[country].svg" alt="[country] flag">';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['country']['style'] = 'code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '13',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches/africa';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Africa';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Africa';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Asia */
  $handler = $view->new_display('page', 'Asia', 'page_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '15',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches/asia';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Asia';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Europe */
  $handler = $view->new_display('page', 'Europe', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '17',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches/europe';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Europe';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Australasia */
  $handler = $view->new_display('page', 'Australasia', 'page_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '16',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches/australasia';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Australasia';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Middle-East */
  $handler = $view->new_display('page', 'Middle-East', 'page_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '18',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches/middle-east';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Middle-East';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: North-America */
  $handler = $view->new_display('page', 'North-America', 'page_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '19',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches/north-america';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'North-America';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: South-America */
  $handler = $view->new_display('page', 'South-America', 'page_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Content: location_type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['value'] = array(
    'Main Office' => 'Main Office',
    'Headquarters' => 'Headquarters',
  );
  /* Filter criterion: Content: Continent (field_continent) */
  $handler->display->display_options['filters']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['filters']['field_continent_tid']['field'] = 'field_continent_tid';
  $handler->display->display_options['filters']['field_continent_tid']['value'] = array(
    0 => '20',
  );
  $handler->display->display_options['filters']['field_continent_tid']['vocabulary'] = 'continent';
  $handler->display->display_options['path'] = 'location/key-branches/south-america';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'South-America';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['key_branches'] = $view;

  $view = new view();
  $view->name = 'mobile_case_studies_stream';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mobile case studies stream';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mobile - Case Studies Stream';
  $handler->display->display_options['css_class'] = 'row grey-gradient iceberg-gradientsea';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-4';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<style>
.mobile-stream .block-title{display:none;}
.grey-gradient{background:none; border:none;}
</style>
';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'industry' => 'industry',
    'tags' => 'tags',
    'continent' => 0,
    'product_range' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_thumbnail]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_thumbnail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
    'class' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_studies' => 'case_studies',
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'success_stories' => 'success_stories',
    'tweet' => 'tweet',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['vid']['group'] = 2;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    65 => '65',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Mobile - Case Studies Stream */
  $handler = $view->new_display('block', 'Mobile - Case Studies Stream', 'block');
  $handler->display->display_options['block_description'] = 'Case Study Stream - Mobile';
  $export['mobile_case_studies_stream'] = $view;

  $view = new view();
  $view->name = 'mobile_social_stream';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mobile Social-Stream';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Community Feed';
  $handler->display->display_options['css_class'] = 'row grey-gradient iceberg-gradientsea';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-6 col-lg-4';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '</hr>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<style>
.mobile-stream .block-title{display:none;}
.grey-gradient{background:none; border:none;}
</style>
';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Our Company - Community Feed */
  $handler = $view->new_display('block', 'Our Company - Community Feed', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Community Social Stream - Mobile';

  /* Display: Our Company - Careers Feed */
  $handler = $view->new_display('block', 'Our Company - Careers Feed', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Careers Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<p>[body]</p>';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
    'class' => '',
  );
  /* Field: Field: external link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_external_link']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'job_vacancies' => 'job_vacancies',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    0 => '67',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['block_description'] = 'Careers Social Stream - Mobile';

  /* Display: Our Company - Awards Feed */
  $handler = $view->new_display('block', 'Our Company - Awards Feed', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Awards Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-pic img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Awards Social Stream - Mobile';

  /* Display: Solutions - Innovation Feed */
  $handler = $view->new_display('block', 'Solutions - Innovation Feed', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Innovation Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '3',
    1 => '64',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Innovation Social Stream - Mobile';

  /* Display: Solutions - Training Feed */
  $handler = $view->new_display('block', 'Solutions - Training Feed', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Training Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '71',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Training Social Stream - Mobile';

  /* Display: Product - Performance Feed */
  $handler = $view->new_display('block', 'Product - Performance Feed', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Performance Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '69',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Performance Social Stream - Mobile';

  /* Display: Location - Environment Feed */
  $handler = $view->new_display('block', 'Location - Environment Feed', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Environment Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Environment Social Stream - Mobile';
  $export['mobile_social_stream'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All News';
  $handler->display->display_options['css_class'] = 'row grey-gradient';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_image]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['link_class'] = 'link';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '240',
    'class' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_tags']['element_class'] = 'text-padding';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news col-xs-12 col-sm-6 col-md-6 col-lg-4';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '</hr>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Filter content with dropdown menu';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: All News */
  $handler = $view->new_display('page', 'All News', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Filter by tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'news/all';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'All News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'All News';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Applications */
  $handler = $view->new_display('page', 'Applications', 'page_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '65',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/applications';
  $handler->display->display_options['menu']['title'] = 'Applications';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Awards */
  $handler = $view->new_display('page', 'Awards', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/awards';
  $handler->display->display_options['menu']['title'] = 'Awards';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Careers */
  $handler = $view->new_display('page', 'Careers', 'page_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '67',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/careers';
  $handler->display->display_options['menu']['title'] = 'Careers';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Community */
  $handler = $view->new_display('page', 'Community', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/community';
  $handler->display->display_options['menu']['title'] = 'Community';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Environment */
  $handler = $view->new_display('page', 'Environment', 'page_10');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/Environment';
  $handler->display->display_options['menu']['title'] = 'Environment';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Events */
  $handler = $view->new_display('page', 'Events', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '4',
    1 => '63',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/events';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Innovation */
  $handler = $view->new_display('page', 'Innovation', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '3',
    1 => '64',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/innovation';
  $handler->display->display_options['menu']['title'] = 'Innovation';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Performance */
  $handler = $view->new_display('page', 'Performance', 'page_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '69',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/performance';
  $handler->display->display_options['menu']['title'] = 'Performance';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Training */
  $handler = $view->new_display('page', 'Training', 'page_9');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'news';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '20';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '72',
    1 => '71',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['path'] = 'news/training';
  $handler->display->display_options['menu']['title'] = 'Training';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Awards';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['news'] = $view;

  $view = new view();
  $view->name = 'opening_hours';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'opening hours';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row-deep';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_opening_hours' => 'field_opening_hours',
    'phone' => 'phone',
    'email' => 'email',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_location_target_id']['id'] = 'field_user_location_target_id';
  $handler->display->display_options['relationships']['field_user_location_target_id']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['relationships']['field_user_location_target_id']['field'] = 'field_user_location_target_id';
  /* Field: Content: Opening Hours */
  $handler->display->display_options['fields']['field_opening_hours']['id'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['table'] = 'field_data_field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['field'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['field_opening_hours']['label'] = '';
  $handler->display->display_options['fields']['field_opening_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_opening_hours']['alter']['text'] = '<i class="fa fa-clock-o fa-2x" aria-hidden="true"></i>  &nbsp;Opening Hours: [field_opening_hours]  &nbsp;';
  $handler->display->display_options['fields']['field_opening_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'class' => '',
  );
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['phone']['label'] = '';
  $handler->display->display_options['fields']['phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['phone']['alter']['text'] = '<i class="fa fa-phone fa-2x" aria-hidden="true"></i>  &nbsp;Phone: [phone] &nbsp;';
  $handler->display->display_options['fields']['phone']['element_label_colon'] = FALSE;
  /* Field: Location: Email address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'location_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['email']['alter']['text'] = '<i class="fa fa-envelope fa-2x" aria-hidden="true"></i>  &nbsp;Email: [email] &nbsp;';
  $handler->display->display_options['fields']['email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['email']['alter']['path'] = '[emaill]';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'System User';

  /* Display: opening-hours */
  $handler = $view->new_display('block', 'opening-hours', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Opening Hours */
  $handler->display->display_options['fields']['field_opening_hours']['id'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['table'] = 'field_data_field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['field'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['field_opening_hours']['label'] = '';
  $handler->display->display_options['fields']['field_opening_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_opening_hours']['alter']['text'] = '<i class="fa fa-clock-o fa-2x" aria-hidden="true"></i>  &nbsp;Opening Hours: [field_opening_hours]  &nbsp;';
  $handler->display->display_options['fields']['field_opening_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'class' => '',
  );
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['phone']['label'] = '';
  $handler->display->display_options['fields']['phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['phone']['alter']['text'] = '<i class="fa fa-phone fa-2x" aria-hidden="true"></i>  &nbsp;Phone: [phone] &nbsp;';
  $handler->display->display_options['fields']['phone']['element_label_colon'] = FALSE;
  /* Field: Location: Email address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'location_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['email']['alter']['text'] = '<i class="fa fa-envelope fa-2x" aria-hidden="true"></i>  &nbsp;Email: [email] &nbsp;';
  $handler->display->display_options['fields']['email']['alter']['path'] = '[emaill]';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Branch Opening Hours';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: homepage-contact */
  $handler = $view->new_display('block', 'homepage-contact', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'padding-top padding-bottom white-text';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_opening_hours' => 'field_opening_hours',
    'phone' => 'phone',
    'email' => 'email',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Opening Hours */
  $handler->display->display_options['fields']['field_opening_hours']['id'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['table'] = 'field_data_field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['field'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['field_opening_hours']['label'] = '';
  $handler->display->display_options['fields']['field_opening_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_opening_hours']['alter']['text'] = '<i class="fa fa-clock-o fa-2x" aria-hidden="true"></i>  &nbsp;Opening Hours: [field_opening_hours]  &nbsp;';
  $handler->display->display_options['fields']['field_opening_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'class' => '',
  );
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['phone']['label'] = '';
  $handler->display->display_options['fields']['phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['phone']['alter']['text'] = '<i class="fa fa-phone fa-2x" aria-hidden="true"></i>  &nbsp;Phone: [phone] &nbsp;';
  $handler->display->display_options['fields']['phone']['element_label_colon'] = FALSE;
  /* Field: Location: Email address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'location_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['relationship'] = 'field_user_location_target_id';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['email']['alter']['text'] = '<i class="fa fa-envelope fa-2x" aria-hidden="true"></i>  &nbsp;Email: <a href="mailto:[email]" style="color:#ffffff;">[email]</a> &nbsp;';
  $handler->display->display_options['fields']['email']['alter']['path'] = '[email]';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Home - Contact';
  $handler->display->display_options['block_caching'] = '8';
  $export['opening_hours'] = $view;

  $view = new view();
  $view->name = 'product_range';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Product Range';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Range';
  $handler->display->display_options['css_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<blockquote cite="http://www.aesseal.com/en/product-range"><p>AESSEAL® holds the world\'s most comprehensive standard inventory portfolio of mechanical seals, bearing protectors, seal support systems and packing.</p></blockquote>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'product_range' => 'product_range',
  );
  $handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Machine name';
  $handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
  /* Filter criterion: Taxonomy term: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Product Range';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="lead">AESSEAL<sup>®</sup> offers a comprehensive sealing package, covering everything from shaft packing and flow meters, seals and systems, to bearing face seals and labyrinth seals.</p>
<div class="well">
<h4>This webpage provides a brief overview of our extensive inventoried product range</h2>
<p>Over 10 million inventoried standard product permutations plus custom-engineered solutions. Available to browse on <a target="_blank"  href="https://www.aesseal.com/" title="www.aesseal.com">www.aesseal.com</a></p>
<div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'product',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Field: external link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['alter']['text'] = '<p>View the range of <a href="[field_external_link-url]" alt="[field_external_link-title]" target="_blank" title="[name]">[name] on aesseal.com</a></p>';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['path'] = 'product-range';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['product_range'] = $view;

  $view = new view();
  $view->name = 'sitemap';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sitemap';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sitemap';
  $handler->display->display_options['css_class'] = 'col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>News Articles</h3>';
  $handler->display->display_options['header']['area']['format'] = 'ck_editor';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['sorts']['type']['expose']['label'] = 'Type';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_studies' => 'case_studies',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Sitemap */
  $handler = $view->new_display('page', 'Sitemap', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'case_studies' => 'case_studies',
    'news' => 'news',
    'product_range' => 'product_range',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'contents';
  $export['sitemap'] = $view;

  $view = new view();
  $view->name = 'social_icons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Social-Icons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social-Icons';
  $handler->display->display_options['css_class'] = 'map-icon col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Social Links */
  $handler->display->display_options['fields']['field_social_links']['id'] = 'field_social_links';
  $handler->display->display_options['fields']['field_social_links']['table'] = 'field_data_field_social_links';
  $handler->display->display_options['fields']['field_social_links']['field'] = 'field_social_links';
  $handler->display->display_options['fields']['field_social_links']['label'] = '';
  $handler->display->display_options['fields']['field_social_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_social_links']['alter']['text'] = '<a href="[field_social_links-url]" title="[field_social_links-url]" target="_self"></a>';
  $handler->display->display_options['fields']['field_social_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_links']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['fields']['field_social_links']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_social_links']['delta_offset'] = '';
  $handler->display->display_options['fields']['field_social_links']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_social_links']['separator'] = ' ';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'System User';

  /* Display: Wavelower-wave-icons */
  $handler = $view->new_display('block', 'Wavelower-wave-icons', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'social-icon';
  $handler->display->display_options['block_description'] = 'Wavelower - social icons';

  /* Display: Map-icons */
  $handler = $view->new_display('block', 'Map-icons', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Social Links */
  $handler->display->display_options['fields']['field_social_links']['id'] = 'field_social_links';
  $handler->display->display_options['fields']['field_social_links']['table'] = 'field_data_field_social_links';
  $handler->display->display_options['fields']['field_social_links']['field'] = 'field_social_links';
  $handler->display->display_options['fields']['field_social_links']['label'] = 'If you wish to see more local information please use the icons';
  $handler->display->display_options['fields']['field_social_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_social_links']['alter']['text'] = '<a href="[field_social_links-url]" target="_self"></a>';
  $handler->display->display_options['fields']['field_social_links']['element_class'] = 'inline-flex';
  $handler->display->display_options['fields']['field_social_links']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['fields']['field_social_links']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_social_links']['delta_offset'] = '4';
  $handler->display->display_options['fields']['field_social_links']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_social_links']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_social_links']['separator'] = ' ';
  $handler->display->display_options['block_description'] = 'Homepage - Map Icons';
  $export['social_icons'] = $view;

  $view = new view();
  $view->name = 'social_stream';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Desktop Social-Stream';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Community Feed';
  $handler->display->display_options['css_class'] = 'row grey-gradient iceberg-gradientsea';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-6 col-lg-4';
  $handler->display->display_options['style_options']['masonry_column_width_units'] = 'css';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '</hr>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<style>
.desktop-stream .block-title{display:none;}
.grey-gradient{background:none; border:none;}
</style>
';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Our Company - Community Feed */
  $handler = $view->new_display('block', 'Our Company - Community Feed', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_instagram_picture]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1',
    1 => '60',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Community Social Stream';

  /* Display: Our Company - Careers Feed */
  $handler = $view->new_display('block', 'Our Company - Careers Feed', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Careers Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Field: external link */
  $handler->display->display_options['fields']['field_external_link_1']['id'] = 'field_external_link_1';
  $handler->display->display_options['fields']['field_external_link_1']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link_1']['type'] = 'link_absolute';
  $handler->display->display_options['fields']['field_external_link_1']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Careers Image */
  $handler->display->display_options['fields']['field_careers_image']['id'] = 'field_careers_image';
  $handler->display->display_options['fields']['field_careers_image']['table'] = 'field_data_field_careers_image';
  $handler->display->display_options['fields']['field_careers_image']['field'] = 'field_careers_image';
  $handler->display->display_options['fields']['field_careers_image']['label'] = '';
  $handler->display->display_options['fields']['field_careers_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_careers_image']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_careers_image]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_careers_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_careers_image']['alter']['path'] = '[field_external_link_1]';
  $handler->display->display_options['fields']['field_careers_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_careers_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_careers_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<p>[body]</p>';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '450';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
    'class' => '',
  );
  /* Field: Field: external link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_external_link']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'job_vacancies' => 'job_vacancies',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    0 => '67',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 2;
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['block_description'] = 'Careers Social Stream';

  /* Display: Our Company - Awards Feed */
  $handler = $view->new_display('block', 'Our Company - Awards Feed', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Awards Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-pic img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Awards Social Stream';

  /* Display: Solutions - Innovation Feed */
  $handler = $view->new_display('block', 'Solutions - Innovation Feed', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Innovation Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '3',
    1 => '64',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Innovation Social Stream';

  /* Display: Solutions - Training Feed */
  $handler = $view->new_display('block', 'Solutions - Training Feed', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Training Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '72',
    1 => '71',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Training Social Stream';

  /* Display: Product - Performance Feed */
  $handler = $view->new_display('block', 'Product - Performance Feed', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Performance Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '69',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Performance Social Stream';

  /* Display: Location - Environment Feed */
  $handler = $view->new_display('block', 'Location - Environment Feed', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Environment Feed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Instagram link */
  $handler->display->display_options['fields']['field_instagram_link']['id'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['table'] = 'field_data_field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['field'] = 'field_instagram_link';
  $handler->display->display_options['fields']['field_instagram_link']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instagram_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Linkedin update link */
  $handler->display->display_options['fields']['field_linkedin_update_link']['id'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['table'] = 'field_data_field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['field'] = 'field_linkedin_update_link';
  $handler->display->display_options['fields']['field_linkedin_update_link']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_update_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_update_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_update_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Tweet link */
  $handler->display->display_options['fields']['field_tweet_link']['id'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['table'] = 'field_data_field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['field'] = 'field_tweet_link';
  $handler->display->display_options['fields']['field_tweet_link']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tweet_link']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Instagram Picture */
  $handler->display->display_options['fields']['field_instagram_picture']['id'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['table'] = 'field_data_field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['field'] = 'field_instagram_picture';
  $handler->display->display_options['fields']['field_instagram_picture']['label'] = '';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_instagram_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_instagram_picture']['alter']['path'] = '[field_instagram_link]';
  $handler->display->display_options['fields']['field_instagram_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instagram_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_instagram_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_linkedin_picture']['id'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['table'] = 'field_data_field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['field'] = 'field_linkedin_picture';
  $handler->display->display_options['fields']['field_linkedin_picture']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_linkedin_picture]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_picture']['alter']['path'] = '[field_linkedin_update_link]';
  $handler->display->display_options['fields']['field_linkedin_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_linkedin_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Tweet media */
  $handler->display->display_options['fields']['field_tweet_media']['id'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['table'] = 'field_data_field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['field'] = 'field_tweet_media';
  $handler->display->display_options['fields']['field_tweet_media']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['text'] = '<div class="image-link">
<div class="social-box">
[field_tweet_media]
<div class="black-fade">
<div class="overlay-caption text-center">
<p>
<span class="social-font">
</span>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_tweet_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tweet_media']['alter']['path'] = '[field_tweet_link]';
  $handler->display->display_options['fields']['field_tweet_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tweet_media']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'img-adaptive',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'social-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'jS, F, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: social icon */
  $handler->display->display_options['fields']['field_social_icon']['id'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['table'] = 'field_data_field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['field'] = 'field_social_icon';
  $handler->display->display_options['fields']['field_social_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'class' => 'social-indicator',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'social-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'class' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['block_description'] = 'Environment Social Stream';
  $export['social_stream'] = $view;

  $view = new view();
  $view->name = 'unpublished_social_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Unpublished Social Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Unpublished Social Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instagram' => 'instagram',
    'linkedin' => 'linkedin',
    'tweet' => 'tweet',
  );

  /* Display: Unpublished Social Feed */
  $handler = $view->new_display('block', 'Unpublished Social Feed', 'block');
  $handler->display->display_options['block_description'] = 'Dashboard - Unpublished Social Feed';
  $export['unpublished_social_feed'] = $view;

  $view = new view();
  $view->name = 'vbo_all_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VBO All Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'VBO All Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Continent */
  $handler->display->display_options['fields']['field_continent']['id'] = 'field_continent';
  $handler->display->display_options['fields']['field_continent']['table'] = 'field_data_field_continent';
  $handler->display->display_options['fields']['field_continent']['field'] = 'field_continent';
  $handler->display->display_options['fields']['field_continent']['settings'] = array(
    'class' => '',
  );
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  /* Field: Location: Email address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'location_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  /* Field: Content: location_type */
  $handler->display->display_options['fields']['field_location_type']['id'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['fields']['field_location_type']['field'] = 'field_location_type';
  $handler->display->display_options['fields']['field_location_type']['settings'] = array(
    'class' => '',
  );
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  /* Sort criterion: Content: Continent (field_continent) */
  $handler->display->display_options['sorts']['field_continent_tid']['id'] = 'field_continent_tid';
  $handler->display->display_options['sorts']['field_continent_tid']['table'] = 'field_data_field_continent';
  $handler->display->display_options['sorts']['field_continent_tid']['field'] = 'field_continent_tid';
  /* Sort criterion: Location: Country */
  $handler->display->display_options['sorts']['country']['id'] = 'country';
  $handler->display->display_options['sorts']['country']['table'] = 'location';
  $handler->display->display_options['sorts']['country']['field'] = 'country';
  /* Sort criterion: Location: City */
  $handler->display->display_options['sorts']['city']['id'] = 'city';
  $handler->display->display_options['sorts']['city']['table'] = 'location';
  $handler->display->display_options['sorts']['city']['field'] = 'city';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'locations' => 'locations',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/vbo/all-locations';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/vbo/all-locations/location-export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['vbo_all_locations'] = $view;

  $view = new view();
  $view->name = 'vbo_for_form_submissions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'VBO for Form submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'VBO for Form submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Entityform Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
  );
  /* Filter criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'entityform';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-1 month';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'vbo-for-form-submissions';
  $export['vbo_for_form_submissions'] = $view;

  $view = new view();
  $view->name = 'vbo_for_no_workflow_state';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VBO For No Workflow State';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'VBO For No Workflow State';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Workflow current: Old state name */
  $handler->display->display_options['fields']['old_sid']['id'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['old_sid']['field'] = 'old_sid';
  /* Field: Bulk operations: Content revision */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_revision';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/vbo/no-state';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'No Workflow State';
  $handler->display->display_options['menu']['description'] = 'VBO For No Workflow State';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['vbo_for_no_workflow_state'] = $view;

  $view = new view();
  $view->name = 'workflow_pending';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Workflow Pending';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workflow pending state change';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'nid_1' => 'nid_1',
    'entity_type' => 'entity_type',
    'type' => 'type',
    'field_name' => 'field_name',
    'language' => 'language',
    'scheduled' => 'scheduled',
    'old_sid' => 'old_sid',
    'sid' => 'sid',
    'uid' => 'uid',
    'comment' => 'comment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'scheduled' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'old_sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Workflow current: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'Current user';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid']['id'] = 'hid';
  $handler->display->display_options['fields']['hid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid']['field'] = 'hid';
  $handler->display->display_options['fields']['hid']['label'] = 'hid';
  $handler->display->display_options['fields']['hid']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Content: Workflow link */
  $handler->display->display_options['fields']['workflow_node']['id'] = 'workflow_node';
  $handler->display->display_options['fields']['workflow_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['workflow_node']['field'] = 'workflow_node';
  $handler->display->display_options['fields']['workflow_node']['label'] = 'Actions';
  /* Field: Workflow current: Edit comment */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  /* Sort criterion: Workflow current: Time */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  /* Filter criterion: Workflow scheduled: Scheduled time */
  $handler->display->display_options['filters']['scheduled']['id'] = 'scheduled';
  $handler->display->display_options['filters']['scheduled']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['filters']['scheduled']['field'] = 'scheduled';
  $handler->display->display_options['filters']['scheduled']['operator'] = '>=';
  $handler->display->display_options['filters']['scheduled']['value']['value'] = '-1 hour';
  $handler->display->display_options['filters']['scheduled']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
  );

  /* Display: Scheduled */
  $handler = $view->new_display('block', 'Scheduled', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Workflow pending state change';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Workflow scheduled: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Workflow scheduled: Entity_type */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label'] = 'Entity type';
  $handler->display->display_options['fields']['entity_type']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Entity bundle';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Workflow scheduled: Field_name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Field name';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  /* Field: Workflow scheduled: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Field: Workflow scheduled: Scheduled time */
  $handler->display->display_options['fields']['scheduled']['id'] = 'scheduled';
  $handler->display->display_options['fields']['scheduled']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['scheduled']['field'] = 'scheduled';
  $handler->display->display_options['fields']['scheduled']['date_format'] = 'short';
  $handler->display->display_options['fields']['scheduled']['second_date_format'] = 'long';
  /* Field: Workflow scheduled: Current state Name */
  $handler->display->display_options['fields']['old_sid']['id'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['old_sid']['field'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['label'] = 'From';
  /* Field: Workflow scheduled: Scheduled state Name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'To';
  /* Field: Workflow scheduled: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'By';
  /* Field: Workflow scheduled: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Workflow scheduled: Scheduled time */
  $handler->display->display_options['sorts']['scheduled']['id'] = 'scheduled';
  $handler->display->display_options['sorts']['scheduled']['table'] = 'workflow_scheduled_transition';
  $handler->display->display_options['sorts']['scheduled']['field'] = 'scheduled';
  $handler->display->display_options['block_description'] = 'Dashboard - Workflow pending state change';

  /* Display: Summary */
  $handler = $view->new_display('block', 'Summary', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Workflow Summary';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid']['id'] = 'hid';
  $handler->display->display_options['fields']['hid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid']['field'] = 'hid';
  $handler->display->display_options['fields']['hid']['label'] = 'hid';
  $handler->display->display_options['fields']['hid']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'case_studies' => 'case_studies',
    'job_vacancies' => 'job_vacancies',
    'news' => 'news',
    'product_range' => 'product_range',
    'success_stories' => 'success_stories',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'page' => 'page',
    'case_studies' => 'case_studies',
    'job_vacancies' => 'job_vacancies',
    'news' => 'news',
    'product_range' => 'product_range',
    'success_stories' => 'success_stories',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Dashboard - Workflow Summary';
  $export['workflow_pending'] = $view;

  return $export;
}
