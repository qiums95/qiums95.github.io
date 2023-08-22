<div class="lh-history" style="background-image:url({dede:field name='typeimg'/});" id="about11">
      <div class="container"> <h2 class="lh-public-h2">{dede:field name='typenameen'/}</h2>
        <h3 class="lh-public-h3">{dede:field name='typename'/}</h3>
        <div class="lh-history-a">
          <div class="lh-history-banner">
            <ul class="swiper-wrapper">
              {dede:arclist typeid='' row='10' flag='' titlelen='60' orderby='pubdate'}
			  <li class="swiper-slide">
                <h2>[field:shorttitle/]</h2>
                <div class="cont clearfix">
                  <p><strong>[field:title/]</strong></p>
                  <p><img src="[field:litpic/]" title="[field:title/]" alt="[field:title/]" width="280" height="210" border="0" vspace="0" style="width: 280px; height: 210px;"/></p>
                </div>
              </li>
			  {/dede:arclist}
            </ul>
          </div>
          <div class="lh-history-btn"> <a href="javascript:;" class="prev"></a> <a href="javascript:;" class="next"></a> </div>
        </div>
      </div>
    </div>