Drupal.behaviors.mobileRedirect = {
	attach: function (context, settings) {
		if (Number(window.screen.width) <= 500 && jQuery.cookie("dpk-site-preference",  { "domain": Drupal.settings.cookie_domain, "path": "/" }) != jQuery(".block-domain-nav .content ul li a.active").attr("href")) {
			jQuery.cookie("dpk-has-been-redirected", "YES", { "domain": Drupal.settings.cookie_domain, "path": "/" });
			document.location.href=jQuery(".block-domain-nav .content ul li a").not(".active").attr("href");
		}
	}
}

Drupal.behaviors.toppingsCheckbox = {
	attach: function(context, settings) {
		jQuery(".field-name-field-toppings .form-checkbox", context)
			.not(".toppings-checkbox-processed")
			.click(Drupal.behaviors.toppingsCheckbox.checkboxChangeHandler)
			.addClass("toppings-checkbox-processed");
	},
	detach: function(context, settings) { },
	checkboxChangeHandler: function(evt) {
		if (jQuery(this).val() == 0) {
			if (jQuery(this).is(":checked")) {
				jQuery(jQuery(this).parents(".field-name-field-toppings").get(0)).
					.find(".form-checkbox")
					.removeAttr("checked");
			} else {
				jQuery(jQuery(this).parents(".field-name-field-toppings").get(0))
					.find(".form-checkbox")
					.attr("checked", true);
			}
			
		}
	}	
}


Drupal.behaviors.browsers = {
	attach: function(context, settings) {
		if (Drupal.settings.isTouchDevice()) {
            // default is iPad settings, if phone, swap it out
            if ($(window).width() <= 480 ) {
                $("meta[name=viewport]").attr("content", "width=device-width, initial-scale=1, maximum-scale=1")
            }
        }
	},
	detach: function(context,settings){}
}
