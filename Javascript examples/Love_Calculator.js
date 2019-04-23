prompt("What is your name");
prompt("What is their name");
var loveScore = Math.random();
//Gives a number between 0(inclusive) and 1 (exclusive)
loveScore = Math.floor(loveScore * 100) + 1;//Numbers between 1 and 100
console.log(loveScore);

if(loveScore > 70){
  alert("Your love is high, love score: " + loveScore + "%");
}

if(loveScore > 30 && loveScore <= 70){
  alert("Your love is medium, love score: " + loveScore + "%");
}

if(loveScore <= 30){
    alert("Your love score is low, love score: " + loveScore + "%");
}
