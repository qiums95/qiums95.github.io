<div class="floor_4_main">
    <div class="w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit">{dede:global.cfg_g/}<span>{dede:field name='typename'/}</span></h3>
        <p class="subtit">{dede:field name='description'/}</p>
      </div>
      <div class="floor_4_1"> {dede:arclist row='4' titlelen='50' orderby='pubdate'}<dl class="dl[field:global.autoindex/]" aos="fade-right" aos-easing="ease" aos-duration="700" aos-delay="100">
          <a href="[field:arcurl/]" title="[field:title/]">
          <dt><img src="[field:litpic/]" alt="[field:title/]"></dt>
          <dd><i></i>
            <h3>[field:title/]<span></span></h3>
            <p>[field:description function="cn_substr(@me,180)"/]...</p>
          </dd>
          </a>
        </dl>
		{/dede:arclist}
 </div>
    </div>
  </div>