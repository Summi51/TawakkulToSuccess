debugger; // shorted program in glo bal space i.e no code

window; // GEC create along global object i.e window created.

window == this; // true 

this;  // window 



//=============

console.log(h) // reference error

let d = 3;
console.log(window.d);    
console.log(d);


function fun1(){
    let g = 23;
    console.log(g);
}