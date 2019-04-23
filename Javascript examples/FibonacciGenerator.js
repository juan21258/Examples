function fibonacciGenerator(n) {
    var output = [];
    //TODO
    if(n === 1){
        output.push(0);
    }else if (n === 2){
        output.push(0);
        output.push(1);
    }else{
        output.push(0);
        output.push(1);
        for(var i = 3; i <= n;i++){
            var last = output[i-2];
            var secondlast = output[i-3];
            var value = last + secondlast;
            output.push(value);
        }
    }

    //Return an array of fibonacci numbers.
    return output;
}

fibonacciGenerator(5);
