<?php
// $Id$

/**
 * @file
 * widget.tpl.php
 *
 * Hipfluence widget theme for Vote Up/Down
 */
?>
<div class="vud-widget vud-widget-hipfluence" id="<?php print $id; ?>">
  <?php if ($show_links): ?>
    <a href="<?php print $link_up; ?>" rel="nofollow" class="<?php print $link_class_up; ?>">
      <div class="<?php print $class_up; ?>">Vote on this idea</div>
    </a>
  <?php endif; ?>
</div>
