<li class="close2u-list-item" 
	id="result-<?=$result->node->uuid; ?>" 
	data-node-id="<?=$result->node->nid; ?>" 
	data-raw-distance="<?php echo $result->distance['raw']; ?>">
	<?=l($result->node->title, "node/".$result->node->nid, 
		array("attributes" => array("class" => "close2u-click-marker")))?> &mdash; <?php echo $result->distance['scalar']." ".$result->distance['distance_unit']; ?>
	</li>