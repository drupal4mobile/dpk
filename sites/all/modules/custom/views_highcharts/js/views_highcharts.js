Drupal.behaviors.views_highcharts = {
	charts: [],
	attach: function(context) {
		jQuery.each(jQuery(".views-highchart-chart", context), function(idx, value) {
			chart_id = jQuery(value).attr("id");
			if (Drupal.settings.views_highcharts[chart_id] != undefined) {
				Drupal.behaviors.views_highcharts[chart_id] = new Highcharts.Chart(Drupal.settings.views_highcharts[chart_id]);
			}
		})
	},
	detach: function(context) {
		
	}
}