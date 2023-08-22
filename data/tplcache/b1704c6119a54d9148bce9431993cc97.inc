<section class="floor_5_main">
    <div class="index_title">
      <h3>{dede:field name='typename'/}</h3>
      <p></p>
    </div>
    <div class="textlist">
      <ul class="list">
        {dede:arclist row='5' titlelen='50' orderby='pubdate'}
		<li><a href="view.php?aid=[field:id/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
          <div class="tl"><em>[field:title/]</em>
            <p>[field:description function="cn_substr(@me,80)"/]...</p>
            <i>[field:pubdate function="MyDate('y-m-d',@me)"/]</i></div>
          </a></li>
		  {/dede:arclist}
      </ul>
    </div>
    <div class="more"><a href="list.php?tid=9">更多新闻</a></div>
  </section>