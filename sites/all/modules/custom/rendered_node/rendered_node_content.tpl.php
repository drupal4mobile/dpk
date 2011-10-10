<div data-role="page" data-theme="b">
	<header data-role="header" role="banner" data-theme="b">
		<h1><?php echo $node->title; ?></h1>
	</header>
	<article data-role="content" role="content" data-theme="d">
		<?php echo drupal_render(node_view($node, $build)); ?>
	</article>
</div>