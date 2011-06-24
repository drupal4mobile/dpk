<a href="<?php print url($_GET['q'], array('query' => NULL, 'fragment' => 'nav', 'absolute' => TRUE)); ?>"><?php print t('skip to navigation');?></a>

<?php print render($title_prefix); ?>
<?php if ($title): ?><h2 class="title" id="page-title"><?php print $title; ?></h2><?php endif; ?>
<?php print render($title_suffix); ?>

<p id="help"><?php print render($page['help']); ?></p>
<?php if ($messages != ""): ?>
<div id="message"><?php print render($messages) ?></div>
<?php endif; ?>
<?php if ($tabs != ""): ?>
    <?php print render($tabs); ?>
<?php endif; ?>
<article>
	<?php print render($page['content']); ?>
</article>
<a name="nav"></a>
<nav>
	<?php print render($page['navigation']); ?> 
</nav>

