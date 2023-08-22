<div class="floor_5_main">
    <div class="floor_5 w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit">某某公司<span>{dede:field name='typename'/}</span></h3>
        <p class="subtit">{dede:field name='description'/}</p>
      </div>
      <div class="floor_5_1"> 
        <!--推荐内容开始--> 
        {dede:arclist limit='0,1' titlelen='50' orderby='pubdate'}
		<div class="floor_5_z" aos="fade-right" aos-easing="ease" aos-duration="700" aos-delay="100"><a href="[field:arcurl/]" title="[field:title/]"><b><img src="[field:litpic/]" alt="[field:title/]"></b><em><span>[field:pubdate function="MyDate('d',@me)"/]</span>[field:pubdate function="MyDate('Y-m',@me)"/]</em>
          <div class="dk">
            <h3>[field:title/]</h3>
            <p>[field:description function="cn_substr(@me,200)"/]...</p>
            <i>查看详情</i></div>
          </a></div>
		  {/dede:arclist}
 
        <!--推荐内容结束-->
        <div class="floor_5_y" aos="fade-left" aos-easing="ease" aos-duration="700" aos-delay="100">
          <ul>
            {dede:arclist limit='1,3' titlelen='50' orderby='pubdate'}
			<li><a href="[field:arcurl/]" title="[field:title/]"><em><span>[field:pubdate function="MyDate('d',@me)"/]</span>[field:pubdate function="MyDate('Y-m',@me)"/]</em>
              <h3>
                <p>[field:title/]<span>[field:description function="cn_substr(@me,300)"/]...</span></p>
              </h3>
              </a></li>
			  {/dede:arclist}
          </ul>
        </div>
      </div>
    </div>
  </div>