console.log("Start");

setTimeout(function cb(){
console.log("callback")
}, 5000)

console.log("End");

// Start
// End
// callback

console.log("Start");

setTimeout(function cb(){
console.log("callback")
}, 0)

console.log("End");

// Start
// End
// callback - because of web api


//===========


// new Date();
// Wed Aug 05 2026 18:45:14 GMT+0530 (India Standard Time)

// new Date().getDate(); // 5
new Date().getTime(); // 1785935784744

//===========


console.log("Start");

setTimeout(function cb(){
    console.log("callback")
}, 5000)

console.log("End")

// milions of code

let startDate = new Date().getTime(); // 100000
let endDate = startDate; // 100000

while(endDate < startDate + 10000){ // 100000 < 100000 + 10000 = 110000 (// while - 110000 < 110000) // Loop terminate. false 
 endDate = new Date().getTime(); // endDate = 100001 ✔, endDate = 100010 ✔....endDate = 110000 ❌
}
 console.log("While Line"); // Loop terminate. false 

// Start
// End
// While Line
// callback

//===Logic
//100000
// 100000
//100000 < 100000 + 10000 = 110000
// 100001 ✔, endDate = 100010 ✔....endDate = 110000 ❌
// 110000 < 110000 - while conditions 
// Loop terminate. false 
 
//===========
// cb saparate function.
console.log("Start");

function cb(){
    console.log("callback");
}

setTimeout(cb, 5000);

console.log("End");

// Start
// End
// callback

