function findSmallest(arr) {

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

  let min = Infinity; // smallest value ke liye starting point

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] < min) {
      min = arr[i]; // chhota number mila
    }
  }

  return min;
}

module.exports = { findSmallest };