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
                <p>[field:description function="cn_substr(@me,200)"/]...</p>
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
                <li class="item"><a href="/a/chanpin/fenlei3/27.html" title="产品中心标题七">
                  <div class="img"><img src="/uploads/allimg/190514/1-1Z5140ZH62X.jpg" alt="产品中心标题七"/></div>
                  <div class="txt">
                    <h3 class="tit">产品中心标题七</h3>
                  </div>
                  </a></li>
<li class="item"><a href="/a/chanpin/fenlei2/26.html" title="产品中心标题六">
                  <div class="img"><img src="/uploads/allimg/190514/1-1Z5140Z630142.jpg" alt="产品中心标题六"/></div>
                  <div class="txt">
                    <h3 class="tit">产品中心标题六</h3>
                  </div>
                  </a></li>
<li class="item"><a href="/a/chanpin/fenlei2/25.html" title="产品中心标题五">
                  <div class="img"><img src="/uploads/allimg/190514/1-1Z5140Z5025F.jpg" alt="产品中心标题五"/></div>
                  <div class="txt">
                    <h3 class="tit">产品中心标题五</h3>
                  </div>
                  </a></li>
<li class="item"><a href="/a/chanpin/fenlei2/24.html" title="产品中心标题四">
                  <div class="img"><img src="/uploads/allimg/190514/1-1Z5140Z429C6.jpg" alt="产品中心标题四"/></div>
                  <div class="txt">
                    <h3 class="tit">产品中心标题四</h3>
                  </div>
                  </a></li>
<li class="item"><a href="/a/chanpin/fenlei1/23.html" title="产品中心标题三">
                  <div class="img"><img src="/uploads/allimg/190514/1-1Z5140Z3325N.jpg" alt="产品中心标题三"/></div>
                  <div class="txt">
                    <h3 class="tit">产品中心标题三</h3>
                  </div>
                  </a></li>

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