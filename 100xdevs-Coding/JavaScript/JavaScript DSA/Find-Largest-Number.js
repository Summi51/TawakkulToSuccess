function findLargest(arr) {

  if (!Array.isArray(arr)) {
    return false; // input array nahi hai
  }

  if (arr.length === 0) {
    return null; // empty array
  }

  for (let i = 0; i < arr.length; i++) {
    if (!Number.isFinite(arr[i])) {
      return false; // element valid number nahi hai
    }
  }

  let max = -Infinity; // largest value ke liye starting point

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > max) {
      max = arr[i]; // bada number mila
    }
  }

  return max;
}

module.exports = { findLargest };