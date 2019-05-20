var str = "This is a message with a character counter";
var obj = {};

for (var i = 0; i < str.length; i++) {
  var currentChar = str.charAt(i);
  if (obj[currentChar] === undefined) {
    obj[currentChar] = 1;
  } else {
    obj[currentChar] += 1;
  }
}

var houseKeeper = {
  name: "Jane",
  yearsOfExperience: 5
};

//Access a specific object obj['name'] or object.name
//Prints the entire object with each key,value pair
obj;
