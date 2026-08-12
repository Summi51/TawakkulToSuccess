const arr = [5, 1, 3, 2, 6]

// Double
function double(x){
    return x * 2;  
}

const output = arr.map(double);
console.log(output) 
// [10, 2, 6, 4, 12]

// Triple

function triple(x){
    return x * 3;
}

const output1 = arr.map(triple);
console.log(output1) 
// [15, 3, 9, 6, 18]

// Binary +++++++++++++++++++++

// function binary(x){
//  return x.toString(2);
// }

// const output2 = arr.map(binary)
// console.log(output2); 

// ['101', '1', '11', '10', '110']

//========= another method

// const output2 = arr.map(function binary(x){
//  return x.toString(2);
// })

// console.log(output2); 

 // ++++++++++++ or Arrow func 

 const output2 = arr.map((x) => x.toString(2));

console.log(output2); 