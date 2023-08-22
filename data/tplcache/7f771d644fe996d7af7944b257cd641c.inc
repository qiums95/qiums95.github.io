<div class="lh-culture" id="about12"> <h2 class="lh-public-h2">{dede:field name='typenameen'/}</h2>
      <h3 class="lh-public-h3">{dede:field name='typename'/}</h3>
      <pre class="lh-public-pre">{dede:field name='content'/}</pre>
      <ul class="lh-status-item clearfix lh-flex">
        {dede:arclist typeid='' row='4' flag='' titlelen='60' orderby='pubdate'}
		<li><a>
          <div class="img"><img src="[field:litpic/]"/></div>
          <h2>[field:shorttitle/]</h2>
          <h3>[field:title/]</h3>
          </a> </li>
		  {/dede:arclist}
      </ul>
    </div>