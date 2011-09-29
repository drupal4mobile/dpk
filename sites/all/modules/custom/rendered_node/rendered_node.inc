<?php


class RESTRenderedNode extends RESTServerView {
	
	public function render() {
	    switch ($this->arguments['format']) {
	      case 'html':
	        return $this->render_html($this->model);
	    }
	    return '';
	  }
	
	public function render_html($data) {		
		if (isset($_REQUEST['build'])) {
			$build = $_REQUEST['build'];
		} else {
			$build = "full";
		}
		echo drupal_render(node_view($data, $build));
	}
}