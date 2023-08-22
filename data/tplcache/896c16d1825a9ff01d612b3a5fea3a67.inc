<section class="floor_3_main">
    <div class="floor_3_1">
      <div class="in_title">
        <h3 class="cntit">{dede:global.cfg_g/}<span>{dede:field name='typename'/}</span></h3>
        <i>{dede:field name='description'/}</i></div>
      <div class="floor_3_2"> {dede:arclist row='4' titlelen='50' orderby='pubdate'}<dl class="dl1">
          <a href="view.php?aid=[field:id/]" title="[field:title/]">
          <dt><img src="[field:litpic/]"  alt="[field:title/]"></dt>
          <dd><i></i>
            <h3>[field:title/]<span></span></h3>
            <p>[field:description function="cn_substr(@me,80)"/]...</p>
          </dd>
          </a>
        </dl>
		{/dede:arclist}
 </div>
      <div class="more clearfix"><a href="list.php?tid={dede:field name='id'/}">查看更多</a></div>
    </div>
  </section>