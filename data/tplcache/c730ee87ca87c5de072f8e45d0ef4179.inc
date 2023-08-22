<div class="floor_5">
  <div class="index_title" aos="fade-up" aos-easing="ease" aos-duration="700">
    <h3>{dede:field name='typename'/}</h3>
    <p></p>
  </div>
  <div class="picScroll-left w1200" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
    <div class="bd">
      <ul class="picList">
        {dede:arclist row='10' titlelen='50' orderby='pubdate'}
		<li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
          <div class="con">
            <h3>[field:title/]</h3>
            <span></span>
            <p>[field:description function="cn_substr(@me,200)"/]...</p>
          </div>
          </a></li>
		  {/dede:arclist}
      </ul>
    </div>
    <div class="hd">
      <ul>
      </ul>
    </div>
  </div>
</div>