<?php print $doctype; global $cookie_domain; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" <?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
	<meta name="viewport" content="width=device-width, user-scalable=no" />
	<?php print $head; ?>
	<title><?php print $head_title; ?></title>
	<?php print $styles; ?>
	<?php print $scripts; ?>
	<!-- backwards HTML5 compatibility for IE -->
	<!--[if lt IE 9]>
	<script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
	<![endif]-->
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

</body>
</html>