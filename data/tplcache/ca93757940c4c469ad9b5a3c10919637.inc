
	<li><a href="[field:typelink/]">[field:typename/]</a></li>
	[field:global runphp='yes' name=autoindex]
													if(@me%8==1){
														@me='';
													}else if(@me%8==2){
														@me='';
													}
													else if(@me%8==3){
														@me='';
													}else if(@me%8==4){
														@me='<li class='lh-logo'><a href='/'><img src='/skin/images/logo.png'/></a></li>';
													}else if(@me%8==5){
														@me='';
													}else if(@me%8==6){
														@me='';
													}else if(@me%8==7){
														@me='';
													}else{
														@me='';
													}
												[/field:global]	
	
  </ul>
  <a href="/33930" class="lh-home"><i class="iconfont icon-yemian-copy-copy"></i></a> 
  <!--电脑版导航展开-->
  <div class="lh-toggle"> 
    <!--线条-->
    <div class="lh-toggle-line lh-flex">
      <div class="line1"></div>
      <div class="line2"></div>
      <div class="line3"></div>
      <div class="line4"></div>
    </div>
    <div class="lh-toggle-l left">
      <ul class="lh-toggle-nav clearfix lh-flex">
        {dede:channelartlist row='12' typeid='top' currentstyle='hover'}
		<li>
          <dl>
            <dt><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></dt>
            {dede:channel type='son' noself='yes'}
            <dd><a href="[field:typelink/]">[field:typename/]</a></dd>
            