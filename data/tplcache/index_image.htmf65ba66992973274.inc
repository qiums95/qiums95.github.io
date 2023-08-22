<?php
$z[0]=Array("field","",763,782);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",783,809);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",850,879);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",919,977);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1231,1266);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("channelartlist","<li>\r\n        <div>\r\n          <div class=\"img\"><img src=\"{dede:field name='typeimg'/}\"/></div>\r\n          <h2>{dede:field name='typename'/}</h2>\r\n          <a href=\"{dede:field name='typeurl'/}\">查看全部</a>\r\n          <div class=\"lh-product-shadow\">\r\n            <div>\r\n              <h2>{dede:field name='typename'/}</h2>\r\n              <ul class=\"lh-product-shift clearfix lh-flex\">\r\n                {dede:arclist typeid='' row='5' titlelen='60' orderby='pubdate'}\r\n				<li> <a href=\"[field:arcurl/]\">\r\n                  <div class=\"img\"><img src=\"[field:litpic/]\"/></div>\r\n                  <div class=\"text\">[field:title/]</div>\r\n                  </a> </li>\r\n				  {/dede:arclist}\r\n                <li><a href=\"{dede:field name='typeurl'/}\"> <i></i> </a></li>\r\n              </ul>\r\n              <a href=\"{dede:field name='typeurl'/}\">查看全部</a> </div>\r\n          </div>\r\n        </div>\r\n      </li>",1408,2367);
$z[5][4]=array();
$z[6]=Array("include","",2420,2457);
$z[6][4]=array();
$z[6][4]['filename']="footer.htm";

?>