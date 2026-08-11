const arr = [5, 1, 3, 2, 6]

// Double
function double(x){
    return x * 2;  
}

const output = arr.map(double);
console.log(output) // [10, 2, 6, 4, 12]

// Triple

function triple(x){
    return x * 3;
}

const output1 = arr.map(triple);
console.log(output1) // [15, 3, 9, 6, 18]