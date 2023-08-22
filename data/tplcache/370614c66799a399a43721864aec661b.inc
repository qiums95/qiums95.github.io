<div class="swiper-slide swiper-news" data-hash="News">
      <div class="lh-index-news">
        <div class="container clearfix">
          <div class="lh-news-l left">
            <h2></h2>
            <h3>{dede:field name='typename'/}</h3>
            <pre>{dede:field name='description'/}<br />
The&nbsp;latest&nbsp;news&nbsp;content&nbsp;is&nbsp;shared&nbsp;with&nbsp;you<br />
<br />
</pre>
            <ul>
              {dede:channel type='son' noself='yes'}
			  <li><a href="[field:typelink/]">[field:typename/]</a></li>
			  {/dede:channel}
            </ul>
          </div>
          <div class="lh-news-r right clearfix">
            <ul class="lh-news-hd clearfix">
              {dede:arclist row='3' titlelen='50' orderby='pubdate'}
			  <li data-url="[field:arcurl/]"> <img src="[field:litpic/]"/> </li>
			  {/dede:arclist}
            </ul>
            <ul class="lh-news-bd">
              {dede:arclist row='3' titlelen='50' orderby='pubdate'}
			  <li><a href="[field:arcurl/]">
                <h2>[field:title/]</h2>
                <pre>[field:description function="cn_substr(@me,200)"/]...</pre>
                <div class="time clearfix">
                  <h3 class="left">[field:pubdate function="MyDate('Y-m-d',@me)"/]</h3>
                  <h4 class="right">查看详情</h4>
                </div>
                </a></li>
				{/dede:arclist}
            </ul>
          </div>
        </div>
      </div>
    </div>