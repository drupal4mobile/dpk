<?php
// $Id: views-view-list.tpl.php,v 1.3 2008/09/30 19:47:11 merlinofchaos Exp $
/**
 * @file views-view-list.tpl.php
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */

?>
<div class="menu-item-list">
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <ul data-role="listview" data-theme="c" data-inset="true">
    <?php foreach ($view->result as $id => $row){
		$group = node_load($row->nid); ?>
		<li data-role="list-divider" role='heading'>
			<h3><?php print($group->title); ?></h3>
		</li>
		<?php foreach($group->field_items['und'] as $ref){ ?>
			<li data-role="list-item" role='heading'>
				<a href="/rest/node/<?php echo $ref['nid']; ?>?build=mobile" data-rel="dialog" data-transition="pop">
				<?php print(node_load($ref['nid'])->title); ?>
				</a>
			</li>
		<?php } ?>
	<?php } ?>
  </ul>
</div>
