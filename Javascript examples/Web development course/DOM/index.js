document.querySelector("li a").style.color = "red";
for(var i = 0; i < 3; i++){
	document.querySelectorAll("li")[i].style.color = "blue";
}
document.firstElementChild.lastElementChild.children[3].lastElementChild.innerHTML = "Finally";
document.querySelector("h1").classList.add("huge");
document.querySelector("a").setAttribute("href","https://www.youtube.com");
