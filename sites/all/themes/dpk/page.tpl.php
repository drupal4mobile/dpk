	<?php print render($page['header']); ?>
	<header id="main-header" class="clearfix">
		<h1>Drupal@REI</h1>
		<nav id="menu">
			<?php if ($primary_nav): print $primary_nav; endif; ?>
	        <?php if ($secondary_nav): print $secondary_nav; endif; ?>
		</nav>
		<?php if (isset($main_menu)) { ?>
			<?php print theme('links', $main_menu, array('class' => 'links', 'id' => 'main')) ?>
		<?php } ?>
		<?php if (isset($secondary_menu)) { ?>
			<?php print theme('links', $secondary_menu, array('class' => 'links', 'id' => 'secondary')); ?>
		<?php } ?>
		<?=$search_form;?>
	</header>
	
	<section id="main">
		<?php if ($page['sidebar_first']): ?>
	      <aside id="sidebar-first" class="sidebar">
	        <?php print render($page['sidebar_first']); ?>
	      </aside>
	    <?php endif; ?>
		<?php print $breadcrumb; ?>
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php if ($tabs): ?><div id="tabs-wrapper" class="clearfix"><?php endif; ?>
        <?php print render($title_prefix); ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($tabs2); ?>
        <?php print $messages; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <article class="clearfix">
          <?php print render($page['content']); ?>
        </article>
		<?php if ($page['sidebar_second']): ?>
	      <aside id="sidebar-second" class="sidebar">
	        <?php print render($page['sidebar_second']); ?>
	      </aside>
	    <?php endif; ?>
	</section>
	
	<footer>
		<?php print $feed_icons ?>
        <?php print render($page['footer']); ?>
	</footer>
