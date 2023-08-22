
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
														@me='<li class="lh-logo"><a href='/'><img src='/skin/images/logo.png'/></a></li>';
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
	
	[field:global runphp='yes' name=autoindex]
                      $a="
	<li class="lh-logo"><a href='/'><img src='/skin/images/logo.png'/></a></li>";
                        $b="";
                        if ((@me%6)==3 && @me!=5)  @me=$a;
                        else  @me=$b;
                        [/field:global]
	