<div class="swiper-slide" data-hash="Solution">
      <div class="lh-solution">
        <div class="lh-solution-top" style="background-image:url(/skin/images/v2.jpg);">
          <div class="text"> 
            <!--<h2></h2><h3>{dede:field name='typename'/}</h3>--> 
          </div>
        </div>
        <div class="container clearfix">
          <ul class="lh-solution-item clearfix lh-flex">
            {dede:arclist row='6' titlelen='50' orderby='pubdate'}
			<li><a href="[field:arcurl/]">
              <div class="img"><img src="/skin/images/a[field:global.autoindex/].jpg" /></div>
              <div class="text">
                <h2>[field:title/]</h2>
                <pre>[field:description function="cn_substr(@me,100)"/]...</pre>
                <h3>see more +</h3>
              </div>
              </a></li>
			  {/dede:arclist}
          </ul>
        </div>
      </div>
    </div>