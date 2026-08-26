function generateAtoZ() {
  // your solution here
 
  let res = [];
   
  for (let i = 65; i < (65 + 26); i++){
    res.push(String.fromCharCode(i)) // number to char (ASCII)
  }
  return res;
}

module.exports = { generateAtoZ };

// [
//   'A', 'B', 'C', 'D', 'E', 'F',
//   'G', 'H', 'I', 'J', 'K', 'L',
//   'M', 'N', 'O', 'P', 'Q', 'R',
//   'S', 'T', 'U', 'V', 'W', 'X',
//   'Y', 'Z'
// ]