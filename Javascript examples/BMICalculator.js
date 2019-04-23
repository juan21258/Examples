function bmiCalculator (weight, height) {
    var interpretation = weight / (height*height);
    return interpretation;
}

var bmi = bmiCalculator(70,1.85);

if(bmi < 18.5){
    console.log("Your BMI is " + bmi + ", so you are underweight.");
}

if(bmi >= 18.5 && bmi <= 24.9){
    console.log("Your BMI is " + bmi + ", so you have a normal weight.");
}

if(bmi > 24.9){
    console.log("Your BMI is " + bmi + ", so you are overweight.");
}
