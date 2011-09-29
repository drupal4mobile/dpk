<?php
// $Id:$
global $user;
?>
<div data-role="page" id="<?php print $jqm_page_id ?>" data-theme="<?php print $page_data_theme ?>" >

  <header data-role="header" data-position-"inline">
    <?php if (!$is_front): ?>
		<?=l("home", "<front>", array("attributes" => array("data-role" => "button", "data-icon" => "back", "class" => "ui-btn-left")));?>
    <?php endif; ?>
    <h1><?php print $title ? $title : $site_name;  ?></h1>
	<?php if ($user->uid == 0) { ?>
		<a href="#login" data-role="button" data-icon="gear" class="ui-btn-right" data-rel="dialog">Login</a>
	<?php } else { ?>
		<a href="/user/logout" data-role="button" data-icon="gear" class="ui-btn-right" data-ajax="false" id="user-logout">Logout</a>
	<?php } ?>
  </header> <!-- /data-role="header" -->

   <?php if (isset($tabs) && $tabs): ?>
     <nav data-role="navbar">
       <?php print render($tabs); ?>
     </nav><!-- /navbar -->
   <?php endif; ?>

  <article data-role="content" data-theme="<?php print $jqm_content_data_theme ?>">
    <?php if ($show_messages && $messages): ?>
	<div class="ui-body ui-body-e">
		<?php print $messages; ?>
	</div>
	<?php endif; ?>
    <?php print render($page['content']) ?>
    <?php print render($page['content_bottom']); ?>
  </article> <!-- /data-role="content" -->

  <footer data-role="footer" class="footer">
    <h1>Footer Content</h1>
    <?php print render($page['footer']) ?>

  </footer> <!-- /data-role="footer" -->
	
</div> <!-- /data-role="page" -->

<!-- /page.tpl.boundary -->

<?php if ($user->uid == 0) { ?>
<div data-role="page" id="login" data-theme="<?php print $page_data_theme ?>">
	<header data-role="header" data-position-"inline">
		<h1>User Login</h1>
  	</header>
	<div data-role="content" data-theme="<?php print $page_data_theme ?>">
		<?php $form = drupal_get_form("user_login"); $form['#attributes']['data-ajax'] = "false"; echo drupal_render($form); ?>
		<div class="ui-body ui-body-e" style="display:none;" id="form-errors">
			
		</div>
	</div>
</div>
<?php } ?>