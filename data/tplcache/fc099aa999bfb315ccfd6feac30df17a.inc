<div class="floor_1_main">
    <div class="w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit">某某公司<span>{dede:field name='typename'/}</span></h3>
        <p class="subtit">{dede:field name='description'/}</p>
      </div>
      <div class="floor_1"> 
        <!--产品产品分类开始-->
        <div class="floor_1_1" aos="fade-right" aos-easing="ease" aos-duration="700" aos-delay="100">
          <h3>{dede:field name='typename'/}</h3>
          <ul>
            {dede:channel type='son' noself='yes'}
            <li><a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a></li>
            {/dede:channel}            
          </ul>
          <dl>
            <dt>联系我们</dt>
            <dd>{dede:global.cfg_tel/}</dd>
          </dl>
        </div>
        <!--产品产品分类结束-->
        <div class="floor_1_2" aos="fade-left" aos-easing="ease" aos-duration="700" aos-delay="100">
          <div class="fl_t">
            <p>{dede:field name='typename'/}</p>
            <a href="{dede:field name='typeurl'/}" title="查看更多">+查看更多</a></div>
          <div class="game163">
            <ul class="bigImg">
              {dede:arclist row='10' titlelen='50' orderby='pubdate'}
			  <li><a href="[field:arcurl/]" title="[field:title/]" class="iopo"><img class="bpic" src="[field:litpic/]" alt="[field:title/]"/></a>
                <div class="txt">
                  <h2>[field:title/]</h2>
                  <p>[field:description function="cn_substr(@me,200)"/]...</p>
                  <div class="lx"><a href="[field:arcurl/]" title="[field:title/]" title="[field:title/]" class="x1">查看详情</a><a href="http://wpa.qq.com/msgrd?v=3&uin=88888888&site=qq&menu=yes" title="立即咨询" class="x2">立即咨询</a></div>
                </div>
              </li>
			  {/dede:arclist}
            </ul>
            <div class="smallScroll"> <a class="sPrev prevStop" href="javascript:void(0)"><span>←</span></a>
              <div class="smallImg">
                <ul class="sm">
                  {dede:arclist row='10' titlelen='50' orderby='pubdate'}
				  <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"/>
                    <h2>[field:title/]<i class="icon"></i></h2>
                    </a></li>
					{/dede:arclist}
                </ul>
              </div>
              <a class="sNext" href="javascript:void(0)"><span>→</span></a></div>
          </div>
        </div>
      </div>
    </div>
  </div>