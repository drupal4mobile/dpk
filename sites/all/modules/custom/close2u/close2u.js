Drupal.behaviors.close2u = {
	attach: function(context) {		
		if (Drupal.settings.close2u.origin == undefined) {
			if (navigator.geolocation) {				
				Drupal.settings.close2u.origin = {longitude: null, latitude: null};
				jQuery(Drupal.behaviors.close2u).bind("locationChange", Drupal.behaviors.close2u.locationChangeHandler);
				navigator.geolocation.getCurrentPosition(Drupal.behaviors.close2u.saveOrigin, Drupal.behaviors.close2u.locationFail);
				Drupal.settings.close2u.watchId = navigator.geolocation.watchPosition(Drupal.behaviors.close2u.saveOrigin);
			} else {
				Drupal.behaviors.close2u.locationFail();
			}
		}
	},
	locationFail: function(error) {
		jQuery(".close2u-enter-location-container")
			.show()
			.find("form")
			.submit(Drupal.behaviors.close2u.userEnterLocationHandler);
	},
	locationChangeHandler: function(evt) {
		if (Drupal.settings.close2u.origin.longitude != null && Drupal.settings.close2u.origin.latitude != null) {
			jQuery.each(Drupal.settings.close2u.instances, function(idx, value) {
				url = jQuery("#"+value).attr("rel").replace(/_/g, "/");
				jQuery("#"+value).load("close2u/"+url, Drupal.settings.close2u.origin, Drupal.behaviors.close2u.locationListHandler).addClass("close2u-processed");
			});
			// gmap module integration
			if (Drupal.settings.gmap.close2u != undefined) {
				this.gmapObject = Drupal.gmap.getMap("close2u");
				//center and zoom
				this.gmapObject.map.setCenter(new GLatLng(Drupal.settings.close2u.origin.latitude, Drupal.settings.close2u.origin.longitude));
				this.gmapObject.map.setZoom(11);
				
			}
			if (Drupal.settings.gmap.close2u != undefined && (Drupal.behaviors.close2u.markers == undefined || Drupal.behaviors.close2u.markers.length == 0)) {
				Drupal.behaviors.close2u.markers = {};
				for(i in Drupal.behaviors.close2u.gmapObject.vars.markers) {
					Drupal.behaviors.close2u.markers[Drupal.behaviors.close2u.gmapObject.vars.markers[i].rmt] = Drupal.behaviors.close2u.gmapObject.vars.markers[i];
				}
			}
		} else {
			jQuery(".close2u-enter-location").show();
		}
	},
	locationListHandler: function(evt) {
		jQuery(".close2u-list-item")
			.not(".close2u-list-item-processed")
			.find("a.close2u-click-marker")
			.click(Drupal.behaviors.close2u.locationListItemClickHandler)
			.attr("href", "javscript:;")
			.addClass("close2u-list-item-processed");
		//first in list should be closes, click it.
		jQuery(".close2u-list-item:first-child a").click();
	},
	locationListItemClickHandler: function(evt) {
		if(evt) evt.preventDefault();
		google.maps.Event.trigger(Drupal.behaviors.close2u.markers[jQuery(this).parent().attr("rel")].marker, "click");
		return false;
	},
	saveOrigin: function(position) {
		if (position) {
			if (position.error != undefined) {
				$("#"+position.list_id).html(position.error);
			} else {
				Drupal.settings.close2u.origin = position.coords;
				Drupal.settings.close2u.origin.timestamp = position.timestamp;
				jQuery(Drupal.behaviors.close2u).trigger("locationChange");
			}
			
		}
	},
	detach: function(context) {
		
	},
	userEnterLocationHandler: function(evt) {
		if (evt) evt.preventDefault();
		jQuery.getJSON(jQuery(this).attr("action"), jQuery(this).serialize(), Drupal.behaviors.close2u.saveOrigin);
		return false;
	}
	
}


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