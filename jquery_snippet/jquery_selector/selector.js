//This select different element and format it
$(function(){
    //child selector > which means direct child of selected element
    $("#selected-plays > li").addClass("horizontal");
    
    $('#selected-plays li:not(.horizontal)').addClass('sublevel');
    
    //attribute selector, select by attribute
    var link  = $("img[alt='wathever']");
    
    //filter() to select
    $("tr").filter(":even").addClass();
});