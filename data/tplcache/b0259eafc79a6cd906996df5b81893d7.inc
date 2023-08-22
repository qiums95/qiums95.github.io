<li>
        <div>
          <div class="img"><img src="{dede:field name='typeimg'/}"/></div>
          <h2>{dede:field name='typename'/}</h2>
          <a href="{dede:field name='typeurl'/}">查看全部</a>
          <div class="lh-product-shadow">
            <div>
              <h2>{dede:field name='typename'/}</h2>
              <ul class="lh-product-shift clearfix lh-flex">
                {dede:arclist typeid='' row='5' titlelen='60' orderby='pubdate'}
				<li> <a href="[field:arcurl/]">
                  <div class="img"><img src="[field:litpic/]"/></div>
                  <div class="text">[field:title/]</div>
                  </a> </li>
				  {/dede:arclist}
                <li><a href="{dede:field name='typeurl'/}"> <i></i> </a></li>
              </ul>
              <a href="{dede:field name='typeurl'/}">查看全部</a> </div>
          </div>
        </div>
      </li>