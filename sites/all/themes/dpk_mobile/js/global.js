
Drupal.behaviors.handleRedirect = {
	attach: function (context, settings) {
		if (jQuery.cookie("dpk-has-been-redirected", { "domain": Drupal.settings.cookie_domain, "path": "/" }) == "YES") {
			jQuery(document.createElement("div")).html("<h3>We've taken the liberty of redirecting you to our mobile site. <a href='javascript:setCookieAndRedirect(); return false;'>Go back to our FULL site</a></h3>").prependTo("body");
		}
	}
}

function setCookieAndRedirect() {
	fullSite = jQuery(".block-domain-nav .content ul li a").not(".active").attr("href");
	jQuery.cookie("dpk-has-been-redirected", null);
	jQuery.cookie("dpk-site-preference", fullSite, { "domain": Drupal.settings.cookie_domain, "path": "/" });
	document.location.href=fullSite;
}