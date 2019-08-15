//document.querySelector("button").addEventListener("click",handleClick);
var buttonNumber = document.querySelectorAll(".drum");
for(var i = 0; i < buttonNumber.length; i++){
  document.querySelectorAll("button")[i].addEventListener("click",handleClick);
}

function handleClick(){
  var buttonInnerHTML = this.innerHTML;//Gets the content of the element
  buttonAnimation(buttonInnerHTML);
  makeSound(buttonInnerHTML);
}

document.addEventListener("keypress", function(event){
  //Gets the type of event that activated the listener and sends the key
  buttonAnimation(event.key);
  makeSound(event.key);
});

function makeSound(key){
  //Switchs to the key that was pressed according to the parameter
  switch (key) {
    case "w":
    var crash = new Audio('sounds/crash.mp3');
    crash.play();
    break;
    case "a":
    var kickBass = new Audio('sounds/kick-bass.mp3');
    kickBass.play();
    break;
    case "s":
    var snare = new Audio('sounds/snare.mp3');
    snare.play();
    break;
    case "d":
    var tom1 = new Audio('sounds/tom-1.mp3');
    tom1.play();
    break;
    case "j":
    var tom2 = new Audio('sounds/tom-2.mp3');
    tom2.play();
    break;
    case "k":
    var tom3 = new Audio('sounds/tom-3.mp3');
    tom3.play();
    break;
    case "l":
    var tom4 = new Audio('sounds/tom-4.mp3');
    tom4.play();
    break;
    default: console.log(key);
  }
}

function buttonAnimation(currentKey){
  var activeButton = document.querySelector("."+currentKey);
  activeButton.classList.add("pressed");
  setTimeout(function(){
    activeButton.classList.remove("pressed");
  },150);
  // takes a function and the time that i have to wait before executing it
}
