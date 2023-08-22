<div class="floor_6_main">
    <div class="w1200 clearfix"> 
      <!--公司简介开始-->
      <div class="floor_6_1" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
        <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
          <h3 class="tit">{dede:global.cfg_g/}<span>{dede:field name='typename'/}</span></h3>
          <p class="subtit">{dede:field name='description'/}</p>
        </div>
        <div class="floor_6_2"> <b></b><img src="/skin/images/about.jpg"/>
          <div class="f_z">
            <h3>{dede:field name='typename'/}</h3>
            <p> {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),300)'/]
        {/dede:sql}...</p>
            <a href="{dede:field name='typeurl'/}">查看详情</a></div>
        </div>
      </div>
      <!--公司简介结束--> 
      <!--厂房展示-荣誉资质开始-->
      <div class="floor_6_3">
        <div class="parHd" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100"> <s></s><b></b>
          <ul>
            {dede:type typeid='3'}<li><a href="[field:typelink /]" title="[field:typename /]">[field:typename /]</a></li>{/dede:type} 
            {dede:type typeid='4'}<li><a href="[field:typelink /]" title="[field:typename /]">[field:typename /]</a></li>{/dede:type}
          </ul>
        </div>
        <div class="parBd" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
          <div class="slideBox"><a class="sPrev" href="javascript:void(0)"><span class="icon"></span></a>
            <ul>
              {dede:arclist typeid='3' row='10' titlelen='50' orderby='pubdate'}
			  <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
                <p>[field:title/]</p>
                </a></li>
				{/dede:arclist}
            </ul>
            <a class="sNext" href="javascript:void(0)"><span class="icon"></span></a></div>
          <div class="slideBox"><a class="sPrev" href="javascript:void(0)"><span class="icon"></span></a>
            <ul>
              {dede:arclist typeid='4' row='10' titlelen='50' orderby='pubdate'}
			  <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
                <p>[field:title/]</p>
                </a></li>
				{/dede:arclist}
            </ul>
            <a class="sNext" href="javascript:void(0)"><span class="icon"></span></a></div>
        </div>
      </div>
      <!--厂房展示-荣誉资质结束--> 
    </div>
  </div>