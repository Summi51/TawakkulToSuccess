function x(y){
console.log("x")
}
x(function y(){
    console.log("y")
});

// x 
// y 

// check screen short for better under standing

setTimeout(function(){
console.log("timer");
}, 5000)

function x(y){
console.log("x");
}
x(function y(){
    console.log("y");
});

// possible for only callback function - async function 
// because 