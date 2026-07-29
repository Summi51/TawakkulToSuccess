// case 1

var h = function(){
    console.log("hk")
} // hk

h();

//++++++++++++++++
// case 2

var h = function(p1){
    console.log(p1)
} 
function tvs(){
}

h(tvs)

// ƒ tvs(){
// }

//--------
var h = function(p1){
    console.log(p1)
} 

h(function d(){})
// ƒ d(){}

//++++++++++++++++
// case 3

var k1 = function(){
    return function s1(){
        console.log("JI")
    }
}
k1()

// ƒ s1(){
// console.log("JI")
//  }

var k = function(){
    return function s(){
        console.log("JI")
    }
}
console.log(k())

// ƒ s1(){
//         console.log("JI")
//     }