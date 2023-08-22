<section class="floor5">
    <section class="indexTit clearfix">
      <h3 class="tit"><em>{dede:field name='typename'/}</em></h3>
      <p class="subtit"></p>
    </section>
    <div class="textlist">
      <ul class="list">
        {dede:arclist row='5' titlelen='50' orderby='pubdate'}
		<li><a href="view.php?aid=[field:id/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
          <div class="tl"><em >[field:title/]</em>
            <p>[field:description function="cn_substr(@me,80)"/]...</p>
            <i>[field:pubdate function="MyDate('Y-m-d',@me)"/]</i></div>
          </a></li>
		  {/dede:arclist}
      </ul>
    </div>
    <a class="kMore" href="list.php?tid={dede:field name='id'/}">更多新闻</a></section>