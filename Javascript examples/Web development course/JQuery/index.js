$("h1").addClass("big-title margin-50");
//Change text -> $("h1").text("text");
$("#htext").text("modified text");
$("a").attr("href","https://www.youtube.com");
$("h1").click(function(){
  $("h1").css("color","red");
});
$("button").click(function(){
  $("h1").css("color","blue");
  $("h1").animate({opacity: 0.6});
  //the animate method only allows css with numerical values
});
$(document).keypress(function(event){
  $("h1").text(event.key);
});
//Remove all buttons -> $("button").remove();
