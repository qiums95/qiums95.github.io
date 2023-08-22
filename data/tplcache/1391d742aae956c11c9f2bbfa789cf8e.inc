<div class="floor_1">
    <div class="index_title">
      <h3>{dede:field name='typename'/}</h3>
      <p></p>
    </div>
    <!--产品分类开始-->
    <dl class="clearfix">
      {dede:channel type='son' noself='yes'}
      <dd><a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a></dd>
      {/dede:channel}      
    </dl>
    <!--产品分类结束-->
    <ul class="productlist clearfix">
      {dede:arclist row='6' titlelen='50' orderby='pubdate'}
	  <li class="item"><a href="view.php?aid=[field:id/]" title="[field:title/]">
        <figure><img src="[field:litpic/]" alt="[field:title/]"></figure>
        <h3>[field:title/]</h3>
        </a></li>
		{/dede:arclist}
    </ul>
    <div class="more"><a href="list.php?tid={dede:field name='id'/}">更多产品</a></div>
  </div>