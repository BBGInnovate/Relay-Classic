function load_disqus_comments(domain,id,title,url){
        jQuery('.load-disqus').remove();
        jQuery.ajax({
            type: "POST",
            url: '/custommodule/disqus/ajax',
            //data: {}, you can also pass block name and act more dynamicly
            success:function(data){
                jQuery('.views-slideshow-cycle-main-frame-row').each(function(){                    
                    if(jQuery(this).css("display")=="block"){
                        jQuery('<div class="load-disqus"></div>').appendTo(jQuery(this).find('.views-field-php-2 .field-content'));
                        jQuery(this).find('.views-field-php-2 .field-content .load-disqus').append(data);
                    }
                });
            },
            data:{domain:domain,id:id,title:title,url:url}
        });

}