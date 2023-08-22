<!--天井钻机系列开始-->
        <div class="con clearfix">
          <div class="left">
            <dl>
              {dede:arclist limit='0,2' titlelen='50' orderby='pubdate'}
			  <dd class="d[field:global.autoindex/]">
                <div class="box1"><a href="[field:arcurl/]" title="[field:title/]">
                  <h3>[field:title/]</h3>
                  <p>[field:description function="cn_substr(@me,200)"/]...</p>
                  <i class="icon"></i><span class="icon"></span></a></div>
                <div class="box2"><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"></a></div>
              </dd>
			  {/dede:arclist}

            </dl>
          </div>
          <!--推荐内容开始-->
          <div class="right">
            <div id="slideBox" class="slideBox">
              <div class="bd2">
                <ul>
                  {dede:arclist limit='2,8' titlelen='50' orderby='pubdate'}
				  <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"/>
                    <h3>[field:title/]</h3>
                    </a></li>
					{/dede:arclist}

                </ul>
              </div>
              <div class="hd2">
                <ul>
                  {dede:arclist limit='2,6' titlelen='50' orderby='pubdate'}
				  <li></li>
				  {/dede:arclist}
                </ul>
              </div>
            </div>
          </div>
          <!--推荐内容结束--> 
        </div>
        <!--天井钻机系列结束-->