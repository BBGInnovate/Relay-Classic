(function ($) {
$(document).ready(function() {
    
	//jQuery(".views_slideshow_jcarousel_pager_item .views-field-php").insertBefore(".views_slideshow_jcarousel_pager_item .views-field-created");

	function deviceWidth() { 
	var w = document.documentElement.clientWidth;
	
	window.onresize=function(){
		w = document.documentElement.clientWidth;
	console.log('resize deviceWidth='+w);
	};
	
	return w;
}

console.log('deviceWidth='+deviceWidth());

//Carousel Pager
$('.views_slideshow_jcarousel_pager_item').click(function() {

	
	$(this).addClass('views_slideshow_active_pager_field_item').siblings().removeClass('views_slideshow_active_pager_field_item');

});

	
});
})(jQuery);
