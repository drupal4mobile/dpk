<div id="node-<?php print $node->nid; ?>" <?php print $attributes; ?>>

  <?php //print $user_picture; ?>

  <?php print render($title_prefix); ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted && !$teaser): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      hide($content['links']);
      hide($content['field_tags']);
      hide($content['comments']);
      print render($content);
    ?>
  </div>

  <?php if (!$teaser): ?>
    <?php print render($content['field_tags']); ?>
    <?php print render($content['links']); ?>
    <?php print render($content['comments']); ?>
  <?php endif; ?>
</div>