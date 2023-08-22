<li><a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}" class="{dede:field.currentstyle/}">
          <p>{dede:field name='typename'/}</p>
          <i></i></a>
          <dl>
            {dede:channel type='son' noself='yes'}
            <dd><a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a></dd>
            {/dede:channel}            
          </dl>
        </li>