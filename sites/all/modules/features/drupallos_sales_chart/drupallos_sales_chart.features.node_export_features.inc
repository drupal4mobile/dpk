<?php
/**
 * @file
 * drupallos_sales_chart.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function drupallos_sales_chart_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  array(
    \'vid\' => \'65\',
    \'uid\' => \'1\',
    \'title\' => \'Week 3\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'3b200ae7-65db-07d4-0520-23d46dcf3294\',
    \'ds_switch\' => \'\',
    \'nid\' => \'65\',
    \'type\' => \'pizza_sales\',
    \'language\' => \'und\',
    \'created\' => \'1312347310\',
    \'changed\' => \'1312347310\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'4153bf25-dd86-48a4-2180-9eee9541d502\',
    \'revision_timestamp\' => \'1312347310\',
    \'revision_uid\' => \'1\',
    \'body\' => array(),
    \'field_cheese\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'10\',
        ),
      ),
    ),
    \'field_pepperoni\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'15\',
        ),
      ),
    ),
    \'field_sausage\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5\',
        ),
      ),
    ),
    \'field_supreme\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'0\',
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
    \'last_comment_timestamp\' => \'1312347310\',
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
      \'pid\' => \'76\',
      \'source\' => \'node/65\',
      \'alias\' => \'content/week-3\',
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
    \'vid\' => \'64\',
    \'uid\' => \'1\',
    \'title\' => \'Week 2\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'3386c34f-db6a-2f94-1d1c-56fe53fcc356\',
    \'ds_switch\' => \'\',
    \'nid\' => \'64\',
    \'type\' => \'pizza_sales\',
    \'language\' => \'und\',
    \'created\' => \'1312347298\',
    \'changed\' => \'1312381814\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'6c614f66-cad9-95d4-491a-76dcdd70c722\',
    \'revision_timestamp\' => \'1312381814\',
    \'revision_uid\' => \'1\',
    \'body\' => array(),
    \'field_cheese\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'10\',
        ),
      ),
    ),
    \'field_pepperoni\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'15\',
        ),
      ),
    ),
    \'field_sausage\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'5\',
        ),
      ),
    ),
    \'field_supreme\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'0\',
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
    \'last_comment_timestamp\' => \'1312347298\',
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
      \'pid\' => \'75\',
      \'source\' => \'node/64\',
      \'alias\' => \'content/week-2\',
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
    \'vid\' => \'63\',
    \'uid\' => \'1\',
    \'title\' => \'Week 1\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'4797eda6-965b-3344-d13d-73e5f0ec1bfe\',
    \'ds_switch\' => \'\',
    \'nid\' => \'63\',
    \'type\' => \'pizza_sales\',
    \'language\' => \'und\',
    \'created\' => \'1312347268\',
    \'changed\' => \'1312347268\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'a91eabec-0e4e-7964-c186-7b2820ef172a\',
    \'revision_timestamp\' => \'1312347268\',
    \'revision_uid\' => \'1\',
    \'body\' => array(),
    \'field_cheese\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'20\',
        ),
      ),
    ),
    \'field_pepperoni\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'30\',
        ),
      ),
    ),
    \'field_sausage\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'15\',
        ),
      ),
    ),
    \'field_supreme\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'10\',
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
    \'last_comment_timestamp\' => \'1312347268\',
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
      \'pid\' => \'74\',
      \'source\' => \'node/63\',
      \'alias\' => \'content/week-1\',
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
    \'vid\' => \'66\',
    \'uid\' => \'1\',
    \'title\' => \'Week 4\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'vuuid\' => \'256b9936-ffa6-a914-c982-bcb4dadca58d\',
    \'ds_switch\' => \'\',
    \'nid\' => \'66\',
    \'type\' => \'pizza_sales\',
    \'language\' => \'und\',
    \'created\' => \'1312347327\',
    \'changed\' => \'1312347327\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'uuid\' => \'f0ca86dc-dbc5-9f34-615a-4904e7242bcd\',
    \'revision_timestamp\' => \'1312347327\',
    \'revision_uid\' => \'1\',
    \'body\' => array(),
    \'field_cheese\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'20\',
        ),
      ),
    ),
    \'field_pepperoni\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'40\',
        ),
      ),
    ),
    \'field_sausage\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'32\',
        ),
      ),
    ),
    \'field_supreme\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'18\',
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
    \'last_comment_timestamp\' => \'1312347327\',
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
      \'pid\' => \'77\',
      \'source\' => \'node/66\',
      \'alias\' => \'content/week-4\',
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
