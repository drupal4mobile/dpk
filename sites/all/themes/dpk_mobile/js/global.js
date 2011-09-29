

(function($) {
	Drupal.behaviors.handleRedirect = {
		attach: function (context, settings) {
			if (jQuery.cookie("dpk-has-been-redirected", { "domain": Drupal.settings.cookie_domain, "path": "/" }) == "YES") {
				jQuery(document.createElement("div")).html("<h3>We've taken the liberty of redirecting you to our mobile site. <a href='javascript:setCookieAndRedirect(); return false;'>Go back to our FULL site</a></h3>").prependTo("body");
			}
		}
	}
	
	Drupal.behaviors.jQMPageInit = {
		attach: function(context) { 
			$("#user-login").submit(function(evt){
				if (evt) { evt.preventDefault(); }
				toSubmit = {
					"username": $(this).find("#edit-name").val(),
					"password": $(this).find("#edit-pass").val()
				}
				$.ajax({
					url: "/rest/user/login.json",
					dataType: "json",
					data: toSubmit,
					type: "post",
					error: function(jqXHR, textStatus, errorThrown) {
						$("#form-errors").html(print_r(jqXHR)).show();
					},
					complete: function(jqXHR, textStatus){
						document.location.href = "/";
					}
				});
			});
			$("#user-logout").click(function(evt) {
				if (evt) { evt.preventDefault(); }
				$.mobile.showPageLoadingMsg();
				document.location.href = "/user/logout";
				
			})
		},
		detach: function(context){
		}
	}
})(jQuery)

function print_r(OObj, recurse, prependingSpace) {
	if(typeof OObj == 'object') {
		var treeDisplay = '\n';
		for(var key in OObj) {
			treeDisplay += prependingSpace+'['+key+'] => \''+OObj[key]+'\' ('+typeof OObj[key]+')\n';
			if(recurse && typeof OObj[key] == 'object') {
				treeDisplay += print_r(OObj[key], recurse, prependingSpace+'\t');
			}
		}
		return treeDisplay;
	} else {
		return 'not an object!';
	}
}

function setCookieAndRedirect() {
	fullSite = jQuery(".block-domain-nav .content ul li a").not(".active").attr("href");
	jQuery.cookie("dpk-has-been-redirected", null);
	jQuery.cookie("dpk-site-preference", fullSite, { "domain": Drupal.settings.cookie_domain, "path": "/" });
	document.location.href=fullSite;
}

