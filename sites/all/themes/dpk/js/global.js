Drupal.behaviors.mobileRedirect = {
	attach: function (context, settings) {
		if (Number(window.screen.width) <= 500 && jQuery.cookie("dpk-site-preference",  { "domain": Drupal.settings.cookie_domain, "path": "/" }) != jQuery(".block-domain-nav .content ul li a.active").attr("href")) {
			jQuery.cookie("dpk-has-been-redirected", "YES", { "domain": Drupal.settings.cookie_domain, "path": "/" });
			document.location.href=jQuery(".block-domain-nav .content ul li a").not(".active").attr("href");
		}
	}
}

