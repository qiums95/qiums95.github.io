<?php
$z[0]=Array("field","",89,118);
$z[0][4]=array();
$z[0][4]['name']="typename";
$z[1]=Array("channel","\r\n      <dd><a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a></dd>\r\n      ",240,400);
$z[1][4]=array();
$z[1][4]['type']="son";
$z[1][4]['noself']="yes";
$z[2]=Array("arclist","<div class=\"swiper-slide\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n          <div class=\"img\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\"></div>\r\n          <h3>[field:title/]</h3>\r\n          <p class=\"cont\">[field:description function=\"cn_substr(@me,80)\"/]...</p>\r\n          </a></div>\r\n		  ",553,940);
$z[2][4]=array();
$z[2][4]['limit']="0,6";
$z[2][4]['titlelen']="50";
$z[2][4]['orderby']="pubdate";
$z[3]=Array("arclist","\r\n	  <li class=\"item\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n        <figure><img src=\"[field:litpic/]\" alt=\"[field:title/]\"></figure>\r\n        <h3>[field:title/]</h3>\r\n        </a></li>\r\n		",1265,1549);
$z[3][4]=array();
$z[3][4]['limit']="6,2";
$z[3][4]['titlelen']="50";
$z[3][4]['orderby']="pubdate";

?>