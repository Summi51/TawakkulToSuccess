#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	set<int> st; 
	int n;
	cin >> n;
	
	int arr[n];
	for(int i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	   // cout << arr[i] << " ";
	}

	int m;
	cin >> m;
	
	int arr1[m]; // O(m)
	for(int i=0; i<m; i++){
	    cin >> arr1[i];
	   // cout << arr1[i] << " ";
	}
	 
	for(int i=0; i<n; i++){ // O(n)
	   st.insert(arr[i]); // O(log n) => O(n logn)
	}
	
	for(int i=0; i<m; i++){ // O(m)
	   st.insert(arr1[i]); // O(long m) => O(m log m)
	}
		    
	cout << st.size() << endl; // O(k) => O(n+m)
	for(auto x: st){  // O(n+m)
	    cout << x << " "; 
	}
}

// TC: O(n) + O(m) + O(n logn) + O(m log m) + O(n+m) => O(n log n + m log m)
// SC: O(n+m)

// 6
// 1 2 2 1 3 5
// 6
// 2 2 3 4 5 5

// 5
// 1 2 3 4 5

// Logic - used set - ordered 
// || set insert a in n loop, set insert b in m loop 
// || for(auto x: st) union set x (union a and b set) 
// || st.size()


// set: ordered
// insert   O(log n)
// erase    O(log n)
// find     O(log n)
// loop     O(n)