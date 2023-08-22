<div class="floor_1_main">
    <div class="floor_1 w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit"><em>{dede:field name='typename'/}</em></h3>
        <p class="subtit"></p>
      </div>
      <!--产品分类开始-->
      <div class="menu1 clearfix" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">  {dede:channel type='son' noself='yes'}<a class="item" href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a> {/dede:channel}</div>
      <!--产品分类结束-->
      <div class="product">
        <div class="left" aos="fade-right" aos-easing="ease" aos-duration="700">
          <dl>
            {dede:arclist limit='0,2' titlelen='60' orderby='pubdate'}
			<dd class="d[field:global.autoindex/]">
              <div class="box1"><a href="[field:arcurl/]" title="[field:title/]">
                <h3>[field:title/]</h3>
                <p>[field:description function="cn_substr(@me,180)"/]...</p>
                <i class="icon"></i><span class="icon"></span></a></div>
              <div class="box2"><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"></a></div>
            </dd>
			{/dede:arclist}
          </dl>
        </div>
        <!--推荐内容开始-->
        <div class="right" aos="fade-left" aos-easing="ease" aos-duration="700">
          <div class="iproduct" id="product">
            <div class="bd">
              <ul class="list clearfix">
                {dede:arclist limit='2,5' titlelen='60' orderby='pubdate'}
				<li class="item"><a href="[field:arcurl/]" title="[field:title/]">
                  <div class="img"><img src="[field:litpic/]" alt="[field:title/]"/></div>
                  <div class="txt">
                    <h3 class="tit">[field:title/]</h3>
                  </div>
                  </a></li>
				  {/dede:arclist}
              </ul>
            </div>
            <div class="hd">
              <ul class="iconList">
              </ul>
            </div>
          </div>
        </div>
        <!--推荐内容结束--> 
      </div>
    </div>
  </div>