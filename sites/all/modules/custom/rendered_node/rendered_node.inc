<?php


class RESTRenderedNode extends RESTServerView {
	
	public function render() {
	    switch ($this->arguments['format']) {
	      case 'html':
			if (isset($_REQUEST['build'])) {
				$build = $_REQUEST['build'];
			} else {
				$build = "full";
			}
	        return theme("rendered_node_content", array("node" => $this->model, "build" => $build));
	    }
	    return '';
	  }

}