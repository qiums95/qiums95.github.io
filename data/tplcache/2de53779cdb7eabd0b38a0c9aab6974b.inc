<div class="floor_4">
    <div class="index_title">
      <h3>{dede:field name='typename'/}</h3>
      <p></p>
    </div>
    <div class="swiper-container">
      <div class="swiper-wrapper"> {dede:arclist row='6' titlelen='50' orderby='pubdate'}<div class="swiper-slide"><a href="view.php?aid=[field:id/]" title="[field:title/]">
          <div class="img"><img src="[field:litpic/]" alt="[field:title/]"></div>
          <h3>[field:title/]</h3>
          </a></div>
		  {/dede:arclist}
 </div>
      <div class="swiper-pagination"></div>
    </div>
    <div class="more"><a href="list.php?tid={dede:field name='id'/}">更多案例</a></div>
  </div>