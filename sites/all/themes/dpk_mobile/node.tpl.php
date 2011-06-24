<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<?php print render($title_prefix); ?>
<?php if ($page == 0): ?>
<h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
<?php endif; ?>
<?php print render($title_suffix); ?>

<? print render($content); ?>

<?php print render($content['comments']); ?>

</div>