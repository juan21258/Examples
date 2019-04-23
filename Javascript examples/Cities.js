var city = prompt("What cool city did you visit?");
var cities = ["Prague","Amsterdam","Bruges","Ghent","Brussels","Cusco","Paris"];
console.log(cities[0]);
if(cities.includes(city)){
  alert("The city is in the list!");
}
else{
  alert("The city is not in the list!");
}
