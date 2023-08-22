
	<li><a href="[field:typelink/]">[field:typename/]</a></li>
	[field:global name=autoindex runphp="yes"]if(@me==1)@me="";elseif(@me==14)@me="<li class='lh-logo'><a href='/'><img src='/skin/images/logo.png'/></a></li>";else @me="";[/field:global]
	[field:global runphp='yes' name=autoindex]
                      $a="
	<li class="lh-logo"><a href='/'><img src='/skin/images/logo.png'/></a></li>";
                        $b="";
                        if ((@me%6)==3 && @me!=5)  @me=$a;
                        else  @me=$b;
                        [/field:global]
	