<div class="swiper-slide" data-hash="About">
      <div class="lh-index-about">
        <div class="container clearfix">
          <div class="text">
            {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content/]
        {/dede:sql}
            <a href="{dede:field name='typeurl'/}" class="lh-more gray"></a> </div>
          <div class="img"> <img src="{dede:field name='typeimg'/}" /> <a href='javascript:;' class="lh-video-btn"><i class="iconfont icon-bofang"></i></a> </div>
        </div>
      </div>
    </div>