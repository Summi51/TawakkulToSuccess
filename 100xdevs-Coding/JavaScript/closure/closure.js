
// function x(){
//     var a = 10;
//     function y(){
//        debugger;   console.log(a)
//     }
//     y()
// }

// x();

// Wnen //debugger;   console.log(a)

// Local
// this : Window
// Closure (x)
// a:10
// Global

//++++++++++++++

// function x(){
//     let a = function y(){
//        debugger;   console.log(a)
//     }
//     a();
// }
// x();

// // Local
// // this: Window
// // Closure (x)
// // a: ƒ y()
// // Global

//++++++++++++++

// function x(y){
//   var B = 100;
//   debugger;  y(B);
// }
// x(function y(B){
//     console.log(B)
// })

// Local
// this: Window
// B: 100
// y: ƒ y(B)
// Global

//******* Note ********

// function x(y){
//    debugger; var B = 100;
//   y(B);
// }
// x(function y(B){
//     console.log(B)
// })

// Global
// │
// ├── x
// │
// └── function y(B)
//       │
//       └── B (parameter)

// Closure tab banta hai jab function apne outer scope ka variable use kare.


// function s(){
//    let b = 900;
//    function p(){
//      debugger; console.log(b)
//    }
//    return p
// }

// const q = s();
// q()



// Local
// this: Window

// Closure (s)
// b: 900

// Script
// q: ƒ p()

// Global
// s: ƒ s()

// Ab jo value s() ne return ki p
// function p() wo q me store ho gayi.
// Memory: Script
// q ─────► function p()
// Isliye DevTools likhta hai:
// Script q: ƒ p()
// Kyuki q ki value function p hai.

// Global

// s ───────────────► function s()
//                         │
//                         │ creates
//                         ▼
//                   function p()
//                         │
//                         │ hidden [[Environment]]
//                         ▼
//                  Lexical Env of s
//                      b = 900

// q ─────────────────────► function p()

// ===============
// return directly function
// function s(){
//    let b = 900;
//   return function p(){
//      debugger; console.log(b)
//    }
// }

// const q = s();
// q();

//+++++++++++++++++

// function s(){
//   debugger; let b = 900;
//   function p(){
//      debugger; console.log(b)
//    }
//    b = 333;
//    return p
// }

// const q = s();   // 333
// q();

//+++++++++++++++++

// function a(){
//    let x = 100;
//    function b(){
//       let y = 200;
//       function c(){
//        debugger; console.log(x, y);
//       }
//       c()
//    }
//  b()
// }
//  a();

//=================

// Local
// this: Window
// Closure (b)
// y: 200
// Closure (a)
// x: 100
// Global
// a: ƒ a()