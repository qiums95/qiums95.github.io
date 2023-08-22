
	<li><a href="[field:typelink/]">[field:typename/]</a></li>
	{dede:global.itemindex runphp='yes'}
													if(@me%6==1){
														@me='1';
													}else if(@me%6==2){
														@me='2';
													}
													else if(@me%6==3){
														@me='3';
													}else if(@me%6==4){
														@me='<li class="lh-logo"><a href='/'><img src='/skin/images/logo.png'/></a></li>';
													}else if(@me%6==5){
														@me='5';
													}else{
														@me='6';
													}
													{/dede:global.itemindex}
	
	
	[field:global runphp='yes' name=autoindex]
                      $a="
	<li class="lh-logo"><a href='/'><img src='/skin/images/logo.png'/></a></li>";
                        $b="";
                        if ((@me%6)==3 && @me!=5)  @me=$a;
                        else  @me=$b;
                        [/field:global]
	