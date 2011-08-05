<script type="text/javascript">

	var chart;
	jQuery(document).ready(function() {
		chart = new Highcharts.Chart({
			chart: {
				renderTo: 'container',
				defaultSeriesType: '<?php echo $options['format']['chart']['type']['value']; ?>'
			},
			title: {
				text: '<?php echo $options['format']['title']['text']['value']; ?>'
			},
			xAxis: {
				categories: <?php echo $xAxis; ?>
			},
			yAxis: {
				min: 0,
				title: {
					text: '<?php echo $options['format']['yAxis']['title']['text']['value']; ?>'
				},
				stackLabels: {
					enabled: true,
					style: {
						fontWeight: 'bold',
						color: (Highcharts.theme && Highcharts.theme.textColor) || 'gray'
					}
				}
			},
			legend: {
				align: 'right',
				x: -100,
				verticalAlign: 'top',
				y: 20,
				floating: true,
				backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColorSolid) || 'white',
				borderColor: '#CCC',
				borderWidth: 1,
				shadow: false
			},
			tooltip: {
				formatter: function() {
					return '<b>'+ this.x +'</b><br/>'+
						 this.series.name +': '+ this.y +'<br/>'+
						 'Total: '+ this.point.stackTotal;
				}
			},
			plotOptions: {
				column: {
					stacking: 'normal',
					dataLabels: {
						enabled: true,
						color: (Highcharts.theme && Highcharts.theme.dataLabelsColor) || 'white'
					}
				}
			},
		    series: <?php echo $series; ?>
		});
		
		
	});
		
</script>

<div id="container" style="width: 800px; height: 400px; margin: 0 auto"></div>
