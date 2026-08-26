function countNegatives(arr) {
  // implement your solution here
  let c = 0;
  
  if (!Array.isArray(arr)) {
    return false;
  } // null, undefined, "Hi"

  if (arr.length == 0) {
    return 0;
  } // []

  for (let i = 0; i < arr.length; i++){
    if (!Number.isFinite(arr[i])){
      return false;
    }
    if ( arr[i] < 0) {
      c++;
    }
  }
  return c;
}

module.exports = { countNegatives };

