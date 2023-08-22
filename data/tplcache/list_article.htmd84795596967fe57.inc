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
$z[4]=Array("include","",1255,1290);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1573,1631);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['function']="GetTopTypename(@me)";
$z[6]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n        ",1870,2067);
$z[6][4]=array();
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li><a href='~typelink~' class='on'>~typename~</a></li>";
$z[7]=Array("list","<li><a href=\"[field:arcurl/]\">\r\n            <div class=\"img\"><img src=\"[field:litpic/]\"/></div>\r\n            <div class=\"text\">\r\n              <h2>[field:title/]</h2>\r\n              <h3>\r\n                <p> [field:description function=\"cn_substr(@me,80)\"/]...</p>\r\n              </h3>\r\n              <h4>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</h4>\r\n            </div>\r\n            </a></li>",2280,2717);
$z[7][4]=array();
$z[7][4]['pagesize']="9";
$z[8]=Array("pagelist","",2811,2877);
$z[8][4]=array();
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",2970,3007);
$z[9][4]=array();
$z[9][4]['filename']="footer.htm";

?>