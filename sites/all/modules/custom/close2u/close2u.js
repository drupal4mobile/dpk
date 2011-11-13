(function($){ 
	Drupal.behaviors.close2u = {
		attach: function(context) {		
			if (Drupal.settings.close2u.origin == undefined) {
				//console.log("origin undefined!");
				if (navigator.geolocation) {
					//console.log("Browser supports geolocation!");
					Drupal.settings.close2u.origin = {coords: {longitude: null, latitude: null}};
					$(Drupal.behaviors.close2u).bind("locationChange", Drupal.behaviors.close2u.locationChangeHandler);
					navigator.geolocation.getCurrentPosition(Drupal.behaviors.close2u.saveOrigin, Drupal.behaviors.close2u.locationFail);
				} else {
					//console.log("SadMac :-( no geolocation support");
					Drupal.behaviors.close2u.locationFail();
				}
			}
		},
		locationFail: function(error) {
			//console.log("location fail!"+print_r(error));
			$(".close2u-enter-location-container")
				.show()
				.find("form")
				.submit(Drupal.behaviors.close2u.userEnterLocationHandler);
		},
		locationChangeHandler: function(evt) {
			//console.log("locationChangeHandler!"+print_r(evt));
			if (Drupal.settings.close2u.origin.coords.longitude != null && Drupal.settings.close2u.origin.coords.latitude != null) {
				//console.log("close2u instances: "+print_r(Drupal.settings.close2u.instances));
				$.each($(".close2u-container"), function(idx, value) {
					$(this).load("close2u/"+$(this).attr("rel").replace(/_/g, "/"), {longitude: Drupal.settings.close2u.origin.coords.longitude, latitude: Drupal.settings.close2u.origin.coords.latitude}, Drupal.behaviors.close2u.locationListHandler).addClass("close2u-processed");
				});
				//console.log("is there a gMap?");
				// gmap module integration
				if (Drupal.settings.gmap.close2u != undefined) {
					//console.log("YES!");
					this.gmapObject = Drupal.gmap.getMap("close2u");
					//center and zoom
					//console.log("setting center!"+print_r(Drupal.settings.gmap.close2u));
					this.gmapObject.map.setCenter(new GLatLng(Drupal.settings.close2u.origin.coords.latitude, Drupal.settings.close2u.origin.coords.longitude));
					this.gmapObject.map.setZoom(11);
				
				}
				//console.log("Are there markers?");
				if (Drupal.settings.gmap.close2u != undefined 
						&& (Drupal.behaviors.close2u.markers == undefined 
						|| Drupal.behaviors.close2u.markers.length == 0)) {
					Drupal.behaviors.close2u.markers = {};
					for(i in Drupal.behaviors.close2u.gmapObject.vars.markers) {
						Drupal.behaviors.close2u.markers[Drupal.behaviors.close2u.gmapObject.vars.markers[i].rmt] 
							= Drupal.behaviors.close2u.gmapObject.vars.markers[i];
					}
				}
			} else {
				$(".close2u-enter-location").show();
			}
		},
		locationListHandler: function(evt) {
			$(".close2u-list-item")
				.not(".close2u-list-item-processed")
				.find("a.close2u-click-marker")
				.click(Drupal.behaviors.close2u.locationListItemClickHandler)
				.attr("href", "javscript:;")
				.addClass("close2u-list-item-processed");
			//first in list should be closes, click it.
			$(".close2u-list-item:first-child a").click();
		},
		locationListItemClickHandler: function(evt) {
			if(evt) evt.preventDefault();
			google.maps.Event.trigger(Drupal.behaviors.close2u.markers[$(this).parent().attr("data-node-id")].marker, "click");
			return false;
		},
		saveOrigin: function(position) {
			//console.log("Save Origin!"+print_r(position));
			if (position) {
				if (position.error != undefined) {
					$("#"+position.list_id).html(position.error);
				} else {				
					$.extend(Drupal.settings.close2u.origin, position);
					//console.log("Saved!"+print_r(Drupal.settings.close2u.origin));
					$(Drupal.behaviors.close2u).trigger("locationChange");
				}
			
			}
		},
		detach: function(context) {
		
		},
		userEnterLocationHandler: function(evt) {
			if (evt) evt.preventDefault();
			$.getJSON($(this).attr("action"), $(this).serialize(), Drupal.behaviors.close2u.saveOrigin);
			return false;
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