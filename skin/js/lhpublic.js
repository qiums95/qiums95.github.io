var Public = {
	winWidth: $(window).width(),
	//初始化
	Init: function(){
		smoothScroll.init({offset:95});
		if($('.timer').length>0){
			var a = Math.round($('.lh-power').offset().top+100);
			var b = Math.round($(window).scrollTop()+$(window).height());
			if(a<b && !$('.timer').hasClass('aa')){
				$('.timer').addClass('aa');
				$('.timer').countTo();
			}
			$(window).scroll(function(){
				var a = Math.round($('.lh-power').offset().top+100);
				var b = Math.round($(window).scrollTop()+$(window).height());
				if(a<b && !$('.timer').hasClass('aa')){
					$('.timer').addClass('aa');
					$('.timer').countTo();
				}
			});
		}
		new WOW().init();
		$('[data-animated="fadeIn"]').addClass('wow animated fadeIn');
		$('[data-animated="fadeInRight"]').addClass('wow animated fadeInRight');
		$('[data-animated="fadeInDown"]').addClass('wow animated fadeInDown');
		$('[data-animated="fadeInLeft"]').addClass('wow animated fadeInLeft');
		$('[data-animated="fadeInUp"]').addClass('wow animated fadeInUp');
		$('[data-animated="show1"]').addClass('wow animated show1');
		$('[data-animated="show2"]').addClass('wow animated show2');
		if($(window).width()<=785){
			document.body.addEventListener('touchstart', function(){ });
		}else{
			if($('.lh-ban').length>0){
				$(window).scroll(function(){
					var s= $(this).scrollTop()/3;
					$('.lh-ban .img').css({
						'background-position':'center '+s+'px'	
					});	
				});
			}
			//文字效果
			/*if($('.tlt').length>=1){
				$('.tlt').each(function() {
					var offsetTop = $(this).offset().top;
					var window_bottom_position = $(document).scrollTop() + $(window).height();
					if(offsetTop < window_bottom_position){
						$(this).textillate();
					}
				});	
				$(window).scroll(function(){
					var _this = $(this);
					$('.tlt').each(function() {
						var offsetTop = $(this).offset().top;
						var window_bottom_position = $(document).scrollTop() + $(window).height();
						if(offsetTop < window_bottom_position){
							$(this).textillate();
						}
					});	
				});	
			}*/
		}
		//导航
		this.Nav();
	},
	//banner
	Banner : function(a){
		var a = a || {};
		var opt = $.extend({
			boxCell : '.lh-banner',
			stopOnLastSlide:true,
			slidesPerView:1,
			spaceBetween:0,
			parallax:true,
			pagination:'.hd',
			paginationType:'bullets',
			speed:1000,
			loop:false,
			clickable:true,
			grabCursor:false,
			direction:'horizontal',
			initialSlide:0,
			effect:'fade',
			mousewheel:false,
			scrollbar: {
			   el: 'null',
			},
			slideToClickedSlide:false,
			nextEl:'.next',
			prevEl:'.prev',
			noSwipingClass:'stop-swiping',
			on:'',
			renderBullet:null
		},a);
		if($(opt.boxCell).find('.next').length>=1){
			var nextEl = $(opt.boxCell).find('.next'),prevEl = $(opt.boxCell).find('.prev');
		}else{
			var nextEl =opt.nextEl,prevEl =opt.prevEl;
		}
		var mySwiper = new Swiper(opt.boxCell, {
			parallax : opt.parallax,//data-swiper-parallax
			slidesPerView:opt.slidesPerView,
			initialSlide :opt.initialSlide,
			slideToClickedSlide:opt.slideToClickedSlide,
			pagination : {
				el : opt.pagination,
				type:opt.paginationType,
				clickable :opt.clickable,
				renderBullet:opt.renderBullet
			},
			speed:opt.speed,
			loop:opt.loop,
			paginationClickable :opt.paginationClickable,
			effect : opt.effect,
			fadeEffect: {
			  crossFade: true,
			},
			spaceBetween:opt.spaceBetween,
			navigation: {
			  nextEl: nextEl,
			  prevEl: prevEl,
			},
			grabCursor :opt.grabCursor,
			direction:opt.direction,
			mousewheel:opt.mousewheel,
			scrollbar:opt.scrollbar,
			noSwipingClass:opt.noSwipingClass,
			on:opt.on
		});
	},//banner end
	//banner1 autoPlay
	Banner1 : function(a){
		var a = a || {};
		var opt = $.extend({
			boxCell : '.lh-banner',
			stopOnLastSlide:true,
			parallax:true,
			pagination:'.hd',
			renderBullet:null,
			paginationType:'bullets',
			speed:1000,
			loop:true,
			clickable:true,
			grabCursor:false,
			direction:'horizontal',
			initialSlide:0,
			effect:'fade',
			mousewheel:false,
			scrollbar: {
			   el: 'null',
			},
			slidesPerView:1,
			spaceBetween:0,
			on:''
		},a);
		if($(opt.boxCell).find('.next').length>=1){
			var nextEl = $(opt.boxCell).find('.next'),prevEl = $(opt.boxCell).find('.prev');
		}else{
			var nextEl =opt.nextEl,prevEl =opt.prevEl;
		}
		var mySwiper1 = new Swiper(opt.boxCell, {
			autoplay:{
			delay: 4500,
			stopOnLastSlide: false,
			disableOnInteraction: true,
			},
			parallax : opt.parallax,//data-swiper-parallax
			pagination : {
				el : opt.pagination,
				type:opt.paginationType,
				clickable :opt.clickable,
				renderBullet:opt.renderBullet
			},
			spaceBetween:opt.spaceBetween,
			speed:opt.speed,
			loop:opt.loop,
			paginationClickable :opt.paginationClickable,
			effect : opt.effect,
			fadeEffect: {
			  crossFade: true,
			},
			navigation: {
			  nextEl: nextEl,
			  prevEl: prevEl,
			},
			slidesPerView:opt.slidesPerView,
			grabCursor :opt.grabCursor,
			direction:opt.direction,
			mousewheel:opt.mousewheel,
			scrollbar:opt.scrollbar,
			on:opt.on
		});
		$(opt.boxCell).mouseenter(function () {
		   mySwiper1.autoplay.stop();
		})
		$(opt.boxCell).mouseleave(function () {
		   mySwiper1.autoplay.start();
		})
	},//banner end
	//导航
	Nav : function(){
		//视频
		if($('.lh-video-btn').length>0){
		var video = document.getElementById('Video');
		  $('.lh-video-btn').click(function(){
			 $('body').addClass('Video');
			 video.play();
		  });
		  $('.lh-video-close').click(function(){
			 $('body').removeClass('Video');
			 video.pause();
		  });
		  video.onended = function() {
			 $('body').removeClass('Video');
		  };
		}
		//加入我们
		if($('.lh-join-item').length>0){
			$('.lh-join-h').click(function(){
				var _this = $(this).parents('dd');
				if(_this.hasClass('on')){
					_this.removeClass('on');
					_this.find('.lh-join-info').slideUp();
				}else{
					_this.addClass('on').siblings().removeClass('on');
					_this.siblings().find('.lh-join-info').slideUp();
					_this.find('.lh-join-info').slideDown();	
				}
			});	
		}
		//产品详情
		if($('.lh-proDetails-banner').length>0){
			this.Banner({boxCell:'.lh-proDetails-banner',effect:'slide'});	
		}
		//详情
		if($('.lh-ones-cont').length>0){
			$('.lh-ones-cont').find('p,h1,h2,h3,h4,ul').addClass('wow animated fadeInUp');	
		}
		//社会责任
		if($('.lh-welfare-item li').eq(0).find('img').length>0){
			welFareTop();
			$(window).resize(function(e) {
                welFareTop();
            });	
			function welFareTop(){
				var height = $('.lh-welfare-item li').eq(0).find('img').eq(0).height();
				$('.lh-welfare-item').css({'margin-top':-height});	
			}
		}
		//发展历程
		if($('.lh-history-banner').length>0){
			var slidesPerView=3;
			if(this.winWidth<=850){
				slidesPerView=1;	
			}
			this.Banner({boxCell:'.lh-history-banner',effect:'slide',slidesPerView:slidesPerView})	
		}
		//搜索
		$('.lh-search-btn').click(function(){
			$('body').addClass('Search');	
		});
		$('.lh-search-layer a.lh-search-close').click(function(){
			$('body').removeClass('Search');	
		});
		//导航
		$('.lh-nav-btn').on('click',function(){
				var _this = $(this);
				if(_this.hasClass('on')){
					_this.removeClass('on');
					$('body').removeClass('Nav');
				}else{
					_this.addClass('on');
					$('body').addClass('Nav');	
				}
			});
		//首页新闻
		$('.lh-news-hd li').eq(0).addClass('on');
		$('.lh-news-bd li').eq(0).fadeIn();
		$('.lh-news-hd li').hover(function(){
			var _this = $(this),_index = _this.index();
			_this.addClass('on').siblings().removeClass('on');
			$('.lh-news-bd li').fadeOut();
			$('.lh-news-bd li').eq(_index).stop(true,true).fadeIn();	
		},function(){});
		//banner
		var effect='coverflow';
			if(this.winWidth<=850){
				effect='slide';	
			}
			if (!!window.ActiveXObject || "ActiveXObject" in window){
			 effect='slide';
			}
		this.Banner1({boxCell:'.lh-banner',effect:effect,pagination:'.lh-banner-hd'});
	},
	//阻止默认行为
	preventDefault:function(el){
		el.addEventListener('touchmove',function(e){
			e.preventDefault();	
		});		
	},
	//效果
	Mouse : function(a){
		var a = a || {};
		var opt = $.extend({
			boxCell : '.lhMouse',
			boxFun : function(_this,e){
						
			}
		},a);
		$(opt.boxCell).on('mousemove',function(e){
			var pointX = e.pageX;
			var pointY = e.pageY;
			var w = $(window).width()/2;
			var h = $(window).height()/2;
			var pianyiX = pointX - w ;
			var pianyiY = pointY - h- $(window).scrollTop();
			var jiaodux = (15/w)*pianyiX;
			var jiaoduy = (15/h)*pianyiY;
			var _this = $(this);
			opt.boxFun(_this,jiaodux);
		})	
	},
	ReturnTop : function(){
		$('.lhTop').on('click',function(){
			$('html,body').animate({scrollTop:'0px'});	
		});	
	},
	FixedNav:function(){
		var p=0;t=0;
		$(window).scroll(function(){
			p = $(this).scrollTop();
			if(t<=p){
				$('body').addClass('fixed');
			}else{
				$('body').removeClass('fixed');
			}
			t=p;
		});	
	}
}
Public.Init();