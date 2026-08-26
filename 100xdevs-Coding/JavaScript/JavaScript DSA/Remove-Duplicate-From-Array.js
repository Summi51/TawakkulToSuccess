function removeDuplicates(arr) {
  // your code here
  let myset = new Set()

  for (let i = 0; i < arr.length; i++){
    if (!myset.has(arr[i])) {
      myset.add(arr[i])
    } 
  }
  return [...myset];
}
removeDuplicates([1, 2, 2, 3, 4, 4])
module.exports = removeDuplicates;

// Time Complexity: O(n) average case
// Space Complexity: O(n)