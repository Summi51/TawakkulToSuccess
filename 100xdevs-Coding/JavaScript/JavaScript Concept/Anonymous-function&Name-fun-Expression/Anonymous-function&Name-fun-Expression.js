x(); 
s();

function x(){
    console.log('x called') // x called 
}  

let s = function () {
    console.log('b called') 
    //  ReferenceError: s is not defined
} 

//=++++++++++++++

//Name function Expression

var d = function xyz(){
    console.log("hh") // hh
}
d() 

//+++++++++++++++


var d = function xyz(){
    console.log("hh") // hh
}
xyz() // ReferenceError: xyz is not defined

//+++++++++++++++
//solution doubt

var d1 = function xyz1(){
 console.log(xyz1);
}
d1(); 

// ƒ xyz1(){
//  console.log(xyz1);
// }

//=====
// Parameters and arguments

var s2 = function(p1, p2){ // Parameters
    console.log(p1, p2) 
}
s2(1, 2); //arguments //1 2