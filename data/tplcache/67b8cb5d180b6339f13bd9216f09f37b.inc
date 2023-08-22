<section class="lh-welfare">
      <div class="lh-welfare-h" style="background-image:url({dede:field name='typeimg'/});" id="about13"> <h2 class="lh-public-h2">{dede:field name='typenameen'/}</h2>
        <h3 class="lh-public-h3">{dede:field name='typename'/}</h3> </div>
      <div class="container">
        <ul class="lh-welfare-item clearfix lh-flex">
          {dede:arclist typeid='' row='3' flag='' titlelen='60' orderby='pubdate'}
		  <li><a>
            <div class="img"><img id="imgs" src="[field:litpic/]"/></div>
            <div class="text">
              <h2>[field:title/]</h2>
              <pre>[field:description function="cn_substr(@me,80)"/]...</pre>
            </div>
            </a></li>
			{/dede:arclist}
        </ul>
      </div>
    </section>