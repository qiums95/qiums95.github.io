<div class="swiper-slide" data-hash="Service">
      <div class="lh-index-service" style="background-image:url({dede:field name='typeimg'/});">
        <div class="container">
          <h2></h2>
          <h3>{dede:field name='typename'/}</h3>
          <pre>{dede:sql sql='Select content from dede_arctype where id=34'} 
        [field:content/]
        {/dede:sql}</pre>
          <ul class="lh-service-item clearfix lh-flex">
            {dede:channel type='son' noself='yes'}
			<li><a href="[field:typelink/]">
              <div class="img"><img src="[field:typeimg/]" /></div>
              <h4>[field:typename/]</h4>
              </a></li>
			  {/dede:channel}
          </ul>
        </div>
      </div>
    </div>