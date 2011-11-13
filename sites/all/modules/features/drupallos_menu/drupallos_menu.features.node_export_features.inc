<?php
/**
 * @file
 * drupallos_menu.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function drupallos_menu_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  array(
    \'vid\' => \'54\',
    \'uid\' => \'1\',
    \'title\' => \'Pasta e Fagioli\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'533a781f-fc0e-f2b4-7574-6eeeaf80e3cb\',
    \'ds_switch\' => \'\',
    \'nid\' => \'54\',
    \'type\' => \'soup\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1321122139\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'1cbc7f21-e52c-e4f4-21ff-c979d0619157\',
    \'revision_timestamp\' => \'1321122139\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Delicious, made with beans, pasta, and pancetta	\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Delicious, made with beans, pasta, and pancetta</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_cup\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'2.50\',
        ),
      ),
    ),
    \'field_bowl\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5.50\',
        ),
      ),
    ),
    \'field_product\' => array(
      \'und\' => array(
        \'0\' => array(
          \'target_id\' => \'11\',
          \'target_type\' => \'commerce_product\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'65\',
      \'source\' => \'node/54\',
      \'alias\' => \'menu/items/pasta-e-fagioli\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'49\',
    \'uid\' => \'1\',
    \'title\' => \'Grilled Chicken and Arugula Salad\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'271295a4-d320-6644-5962-bae274e9022b\',
    \'ds_switch\' => \'\',
    \'nid\' => \'49\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396541\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'2da7d104-6bb3-5094-adbc-facc3a976e43\',
    \'revision_timestamp\' => \'1319396541\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Boneless chicken breast grilled tender, with tomato, cucumbers, and house vinaigrette\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Boneless chicken breast grilled tender, with tomato, cucumbers, and house vinaigrette</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'9.95\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'60\',
      \'source\' => \'node/49\',
      \'alias\' => \'menu/items/grilled-chicken-and-arugula-salad\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'58\',
    \'uid\' => \'1\',
    \'title\' => \'Soup\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'c86db859-5625-5324-a14e-1125bc39a455\',
    \'ds_switch\' => \'\',
    \'nid\' => \'58\',
    \'type\' => \'menu_item_group\',
    \'language\' => \'und\',
    \'created\' => \'1310321169\',
    \'changed\' => \'1310321169\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'2f765eaf-08fd-7774-bdb9-a40c19bf997e\',
    \'revision_timestamp\' => \'1310321169\',
    \'revision_uid\' => \'1\',
    \'field_items\' => array(
      \'und\' => array(
        \'0\' => array(
          \'nid\' => \'51\',
        ),
        \'1\' => array(
          \'nid\' => \'54\',
        ),
        \'2\' => array(
          \'nid\' => \'53\',
        ),
      ),
    ),
    \'field_sort_weight\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310321169\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => FALSE,
    \'subdomains\' => array(
      \'0\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'69\',
      \'source\' => \'node/58\',
      \'alias\' => \'menu/soup\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'41\',
    \'uid\' => \'1\',
    \'title\' => \'Three Meatballs \',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'e35bcbc8-b5f6-5e14-9da9-fd5c4bf03abc\',
    \'ds_switch\' => \'\',
    \'nid\' => \'41\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396720\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'36c777d4-d771-e4c4-498c-173627c5aae6\',
    \'revision_timestamp\' => \'1319396720\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'with marinara sauce\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>with marinara sauce</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5.75\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'52\',
      \'source\' => \'node/41\',
      \'alias\' => \'menu/items/three-meatballs\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'45\',
    \'uid\' => \'1\',
    \'title\' => \'Salads\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'de04a88a-ec22-07d4-d548-a8d96f022377\',
    \'ds_switch\' => \'\',
    \'nid\' => \'45\',
    \'type\' => \'menu_item_group\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1310321057\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'4c82192b-9199-e9a4-49af-223edd126779\',
    \'revision_timestamp\' => \'1310321057\',
    \'revision_uid\' => \'1\',
    \'field_items\' => array(
      \'und\' => array(
        \'0\' => array(
          \'nid\' => \'46\',
        ),
        \'1\' => array(
          \'nid\' => \'49\',
        ),
        \'2\' => array(
          \'nid\' => \'47\',
        ),
        \'3\' => array(
          \'nid\' => \'46\',
        ),
      ),
    ),
    \'field_sort_weight\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'3\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'56\',
      \'source\' => \'node/45\',
      \'alias\' => \'menu/salads\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'43\',
    \'uid\' => \'1\',
    \'title\' => \'Pizza\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'800cb8f6-b01a-86c4-f9d3-1e5b5316c084\',
    \'ds_switch\' => \'\',
    \'nid\' => \'43\',
    \'type\' => \'menu_item_group\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1321134470\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'7484d9d1-9a93-c054-c9c8-313063d14d89\',
    \'revision_timestamp\' => \'1321134470\',
    \'revision_uid\' => \'1\',
    \'field_items\' => array(
      \'und\' => array(
        \'0\' => array(
          \'nid\' => \'44\',
        ),
      ),
    ),
    \'field_sort_weight\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'4\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
      \'2\' => \'2\',
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
      \'2\' => \'Drupallo\\\'s Pizza Kitchen Mobile Site\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'54\',
      \'source\' => \'node/43\',
      \'alias\' => \'menu/pizza\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'44\',
    \'uid\' => \'1\',
    \'title\' => \'Cheese Pizza\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'d4a6d630-2019-2294-a9b7-7372c0a0fe96\',
    \'ds_switch\' => \'\',
    \'nid\' => \'44\',
    \'type\' => \'pizza\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1321132799\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'7f0f509d-2ff0-aef4-4564-4d91224b477f\',
    \'revision_timestamp\' => \'1321132799\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Each toping: add $1.35/$1.65/$1.90 for SM/MD/LG\',
          \'summary\' => \'\',
          \'format\' => \'full_html\',
          \'safe_value\' => \'<p>Each toping: add $1.35/$1.65/$1.90 for SM/MD/LG</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_slice\' => array(),
    \'field_small\' => array(),
    \'field_medium\' => array(),
    \'field_large\' => array(),
    \'field_product\' => array(
      \'und\' => array(
        \'0\' => array(
          \'target_id\' => \'4\',
          \'target_type\' => \'commerce_product\',
        ),
        \'1\' => array(
          \'target_id\' => \'5\',
          \'target_type\' => \'commerce_product\',
        ),
        \'2\' => array(
          \'target_id\' => \'6\',
          \'target_type\' => \'commerce_product\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
      \'2\' => \'2\',
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
      \'2\' => \'Drupallo\\\'s Pizza Kitchen Mobile Site\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'55\',
      \'source\' => \'node/44\',
      \'alias\' => \'menu/items/cheese-pizza\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'52\',
    \'uid\' => \'1\',
    \'title\' => \'Appetizers\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'e728db66-a5d2-3dd4-6154-36dfbc702417\',
    \'ds_switch\' => \'\',
    \'nid\' => \'52\',
    \'type\' => \'menu_item_group\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1310321008\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'8e43b5c3-be31-d474-d5e6-158fdd993ab2\',
    \'revision_timestamp\' => \'1310321008\',
    \'revision_uid\' => \'1\',
    \'field_items\' => array(
      \'und\' => array(
        \'0\' => array(
          \'nid\' => \'57\',
        ),
        \'1\' => array(
          \'nid\' => \'56\',
        ),
      ),
    ),
    \'field_sort_weight\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'1\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'63\',
      \'source\' => \'node/52\',
      \'alias\' => \'menu/appetizers\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'40\',
    \'uid\' => \'1\',
    \'title\' => \'Meatball Sub\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'248d92bc-06d5-8974-4575-7a282d8da088\',
    \'ds_switch\' => \'\',
    \'nid\' => \'40\',
    \'type\' => \'sandwich\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1321136128\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'91e35a0b-16a8-a8b4-d587-00ff325f6774\',
    \'revision_timestamp\' => \'1321136128\',
    \'revision_uid\' => \'1\',
    \'body\' => array(),
    \'field_regular\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'4.99\',
        ),
      ),
    ),
    \'field_footlong\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'7.99\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
      \'2\' => \'2\',
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
      \'2\' => \'Drupallo\\\'s Pizza Kitchen Mobile Site\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'51\',
      \'source\' => \'node/40\',
      \'alias\' => \'menu/items/meatball-sub\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'48\',
    \'uid\' => \'1\',
    \'title\' => \'Italian Antipasti Salad\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'ddbe074d-db67-3c84-f1df-a0bb2cee71cd\',
    \'ds_switch\' => \'\',
    \'nid\' => \'48\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396567\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'94782042-8c68-fce4-ad99-5857a4feaf08\',
    \'revision_timestamp\' => \'1319396567\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Crisp romaine, tomatoes, roasted red peppers, olives, prosciutto, salami, pepperoni, provolone cheese and house vinaigrette\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Crisp romaine, tomatoes, roasted red peppers, olives, prosciutto, salami, pepperoni, provolone cheese and house vinaigrette</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'9.95\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'59\',
      \'source\' => \'node/48\',
      \'alias\' => \'menu/items/italian-antipasti-salad\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'57\',
    \'uid\' => \'1\',
    \'title\' => \'Grilled Bruschetta Rosa\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'15413f6c-1aa4-b854-a53a-fac214db764a\',
    \'ds_switch\' => \'\',
    \'nid\' => \'57\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396529\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'a0be9c57-2e99-dae4-2101-ca0915c072da\',
    \'revision_timestamp\' => \'1319396529\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Slices of toasted Italian bread with fresh tomatoes and basil.\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Slices of toasted Italian bread with fresh tomatoes and basil.</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5.95\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'68\',
      \'source\' => \'node/57\',
      \'alias\' => \'menu/items/grilled-bruschetta-rosa\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'46\',
    \'uid\' => \'1\',
    \'title\' => \'Caprese Salad\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'909f8d97-27c8-4ba4-1d28-b73aba56db07\',
    \'ds_switch\' => \'\',
    \'nid\' => \'46\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396616\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'aaf8eb98-4062-2594-919f-6eb5b87cd05a\',
    \'revision_timestamp\' => \'1319396616\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Fresh sliced mozzarella with vine-ripened tomatoes, roasted red peppers, fresh basil and drizzled with olive oil and a balsamic reduction glaze\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Fresh sliced mozzarella with vine-ripened tomatoes, roasted red peppers, fresh basil and drizzled with olive oil and a balsamic reduction glaze</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'9.95\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'57\',
      \'source\' => \'node/46\',
      \'alias\' => \'menu/items/caprese-salad\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'56\',
    \'uid\' => \'1\',
    \'title\' => \'Mozzarella Triangles\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'37d8f056-85e6-a0a4-818b-a63cc796b688\',
    \'ds_switch\' => \'\',
    \'nid\' => \'56\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396517\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'b56ac079-8529-3f24-e901-e6ae17f1d8e1\',
    \'revision_timestamp\' => \'1319396517\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Homemade with Drupallo\\\'s Old World Marinara\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Homemade with Drupallo\\\'s Old World Marinara</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5.50\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'67\',
      \'source\' => \'node/56\',
      \'alias\' => \'menu/items/mozzarella-triangles\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'53\',
    \'uid\' => \'1\',
    \'title\' => \'Minestrone\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'d148ee03-9b41-c884-395d-9a933f13009f\',
    \'ds_switch\' => \'\',
    \'nid\' => \'53\',
    \'type\' => \'soup\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1321122159\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'e2a68318-ad72-dd74-d1be-d57f9c5e48e1\',
    \'revision_timestamp\' => \'1321122159\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Hearty Vegetable with Pancetta\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Hearty Vegetable with Pancetta</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_cup\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'2.95\',
        ),
      ),
    ),
    \'field_bowl\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5.50\',
        ),
      ),
    ),
    \'field_product\' => array(
      \'und\' => array(
        \'0\' => array(
          \'target_id\' => \'7\',
          \'target_type\' => \'commerce_product\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'64\',
      \'source\' => \'node/53\',
      \'alias\' => \'menu/items/minestrone\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'55\',
    \'uid\' => \'1\',
    \'title\' => \'Fried Calamari\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'f32a07b6-0d33-bb44-9da4-f40213b71ae5\',
    \'ds_switch\' => \'\',
    \'nid\' => \'55\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396497\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'edc41bd6-31e2-3634-999a-434c99f610dc\',
    \'revision_timestamp\' => \'1319396497\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Served with marinara sauce and a lemon wedge\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Served with marinara sauce and a lemon wedge</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'7.95\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'66\',
      \'source\' => \'node/55\',
      \'alias\' => \'menu/items/fried-calamari\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'51\',
    \'uid\' => \'1\',
    \'title\' => \'Italian Wedding\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'a64042c9-9038-5144-8d0b-8564b4ec4000\',
    \'ds_switch\' => \'\',
    \'nid\' => \'51\',
    \'type\' => \'soup\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1321135097\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'f45476b3-53cd-3fe4-39d5-bf8245f311e8\',
    \'revision_timestamp\' => \'1321135097\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Prepared with meatballs and chicken in the traditional way\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Prepared with meatballs and chicken in the traditional way</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_cup\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'2.95\',
        ),
      ),
    ),
    \'field_bowl\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5.50\',
        ),
      ),
    ),
    \'field_product\' => array(
      \'und\' => array(
        \'0\' => array(
          \'target_id\' => \'12\',
          \'target_type\' => \'commerce_product\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
      \'2\' => \'2\',
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
      \'2\' => \'Drupallo\\\'s Pizza Kitchen Mobile Site\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'62\',
      \'source\' => \'node/51\',
      \'alias\' => \'menu/items/italian-wedding\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'47\',
    \'uid\' => \'1\',
    \'title\' => \'Chef Salad \',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'db9372a7-be00-38a4-c116-84fe5f9a08e9\',
    \'ds_switch\' => \'\',
    \'nid\' => \'47\',
    \'type\' => \'menu_item\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1319396586\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'fad8a732-79b3-ad14-cdf5-3825f4d29965\',
    \'revision_timestamp\' => \'1319396586\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Crisp romaine with tomatoes, olives, ham, smoked turkey, salami, roast beef, provolone cheese, boiled egg and house vinaigrette\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>Crisp romaine with tomatoes, olives, ham, smoked turkey, salami, roast beef, provolone cheese, boiled egg and house vinaigrette</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_price\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'9.95\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'58\',
      \'source\' => \'node/47\',
      \'alias\' => \'menu/items/chef-salad\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'42\',
    \'uid\' => \'1\',
    \'title\' => \'Each Topping\',
    \'log\' => \'\',
    \'status\' => \'0\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'b1aa9fca-33f2-8264-a1a1-4ad6468de04a\',
    \'ds_switch\' => \'\',
    \'nid\' => \'42\',
    \'type\' => \'pizza\',
    \'language\' => \'und\',
    \'created\' => \'1310316397\',
    \'changed\' => \'1321122216\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'fc95929f-f281-3494-49ef-d9cc3aaa8c0e\',
    \'revision_timestamp\' => \'1321122216\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'Pepperoni - Sausage - Meatballs - Bacon - Ham - Mushrooms - Peppers - Onion - Black Olives - Green Olives- Broccoli - Spinach - Eggplant - Jalepenos - Tomatoes - Pineapple - Fresh Basil - Fresh Garlic - Anchovies - Banana Peppers \',
          \'summary\' => \'\',
          \'format\' => \'full_html\',
          \'safe_value\' => \'<p>Pepperoni - Sausage - Meatballs - Bacon - Ham - Mushrooms - Peppers - Onion - Black Olives - Green Olives- Broccoli - Spinach - Eggplant - Jalepenos - Tomatoes - Pineapple - Fresh Basil - Fresh Garlic - Anchovies - Banana Peppers </p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'field_slice\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'0.50\',
        ),
      ),
    ),
    \'field_small\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'1.35\',
        ),
      ),
    ),
    \'field_medium\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'1.65\',
        ),
      ),
    ),
    \'field_large\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'1.90\',
        ),
      ),
    ),
    \'field_product\' => array(),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'sioc:Item\',
        \'1\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1310316397\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'domains\' => array(
      \'-1\' => -1,
    ),
    \'domain_site\' => TRUE,
    \'subdomains\' => array(
      \'0\' => \'All affiliates\',
      \'1\' => \'Drupallos Pizza Kitchen\',
    ),
    \'domain_source\' => \'0\',
    \'locations\' => array(),
    \'location\' => array(),
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
    \'path\' => array(
      \'pid\' => \'53\',
      \'source\' => \'node/42\',
      \'alias\' => \'menu/items/each-topping\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
)',
);
  return $node_export;
}
