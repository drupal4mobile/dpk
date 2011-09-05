<div class="close2u-enter-location-container" style="display:none;">
	<form action="/close2u/address" method="get" accept-charset="utf-8" id="close2u-enter-location" name="close2u-enter-location">
		<label for="close2u-enter-location-text">Enter an Address or Postal Code</label>
		<p><input id="close2u-enter-location-text" name="close2u-enter-location-text" placeholder="Enter an Address or Postal Code" style="width: 90%;">
		<input type="submit" value="find &rarr;" style="float:right; width: 70px; "></p>
		<input type="hidden" name="list_id" value="<?php echo $list_id;?>" id="list_id" class="close2u-enter-location-list-id">
	</form>
</div>
<div class='close2u-container' id='<?php echo $list_id;?>' rel='<?php echo $delta; ?>'></div>