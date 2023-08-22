<div class="floor_4_main">
    <div class="floor_4_1">
      <div class="in_title">
        <h3 class="cntit">{dede:global.cfg_g/}<span>{dede:field name='typename'/}</span></h3>
        <i>{dede:field name='description'/}</i></div>
      <div class="floor_4_2"><b><img src="/m/skin/images/about.jpg"/></b>
        <p> {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),300)'/]
        {/dede:sql}...</p>
        <div class="more clearfix"><a href="list.php?tid={dede:field name='id'/}">查看更多</a></div>
      </div>
    </div>
  </div>