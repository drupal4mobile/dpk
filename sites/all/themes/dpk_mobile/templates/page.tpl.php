<?php
// $Id:$
global $user;
?>
<div data-role="page" id="<?php print $jqm_page_id ?>" data-theme="<?php print $page_data_theme ?>" >

  <header data-role="header" data-position="inline">
    <?php if (!$is_front): ?>
    <?php endif; ?>
    <h1><?php print $title ? $title : $site_name;  ?></h1>
	<?php if ($user->uid == 0) { ?>
		<div data-role="controlgroup" data-type="horizontal" class="ui-btn-right" style="margin:0px; ">
			<?=l("home", "<front>", array("attributes" => array("data-role" => "button", "data-icon" => "home", "data-iconpos"=>"notext")));?>
			<a href="#login" data-role="button" data-icon="gear"  data-rel="dialog" data-iconpos="notext">Login</a>
			<a href="#register" data-role="button" data-icon="plus"  data-rel="dialog" data-iconpos="notext">Register</a>
		</div>
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

  <footer data-role="footer" class="footer"  data-position="inline">
    <?php print render($page['footer']) ?>
  </footer> <!-- /data-role="footer" -->
	
</div> <!-- /data-role="page" -->

<!-- /page.tpl.boundary -->

<?php if ($user->uid == 0) { ?>
<div data-role="dialog" id="login" data-theme="<?php print $page_data_theme ?>">
	<header data-role="header" data-position-"inline">
		<h1>User Login</h1>
  	</header>
	<div data-role="content" data-theme="<?php print $page_data_theme ?>">
		<?php $form = drupal_get_form("user_login"); $form['#attributes']['data-ajax'] = "false"; echo drupal_render($form); ?>
		<div class="ui-body ui-body-e" style="display:none;" id="form-errors"></div>
	</div>
</div>

<div data-role="dialog" id="register" data-theme="<?php print $page_data_theme ?>">
	<header data-role="header" data-position-"inline">
		<h1>User Registration</h1>
  	</header>
	<div data-role="content" data-theme="<?php print $page_data_theme ?>">
		<?php $form = drupal_get_form("user_register_form"); $form['#attributes']['data-ajax'] = "false"; echo drupal_render($form); ?>
		<div class="ui-body ui-body-e" style="display:none;" id="form-errors"></div>
	</div>
</div>

<?php } ?>