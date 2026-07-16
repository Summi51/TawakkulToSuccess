
// var a1 = 100; // Global
// {
//     var a1 = 200; // Global  // shadow
//     console.log(a1); // 20
// }
// console.log(a1);  // 20

//============

// debugger;
// let b1 = 200;  // script memory

// {      // block memory
//     let b1 = 400;  // shadow 
//     console.log(b1); // print block value
// }
// console.log(b1); // print script value

//=============
// same as let 

// debugger;
// const c1 = 2400;
// {
//     const c1 = 4400;  // shadows
//     console.log(c1);
// }
// console.log(c1);

//==============
// shadows - function, block 

// var w = 80;
// function x(){
//     var w = 20;  // 
//     console.log(w) 
// }
// x();
// console.log(w) 

//====================

// var a1 = 100; // Global

// {
//     var a1 = 200; // Global  // shadow
//     console.log(a1); // 20
// }
// console.log(a1);  // 20

//============

// var s1 =  200; // global memory
// {
//     let s1 = 390; // shadow // block memory
// }
// console.log(s1)  // global memory

//==============
// debugger;
let s2 = 300;
{ 
    var s2 = 200; //illegal shadow
}
console.log(s2)

// SyntaxError: Identifier 's2'
// has already been declared

