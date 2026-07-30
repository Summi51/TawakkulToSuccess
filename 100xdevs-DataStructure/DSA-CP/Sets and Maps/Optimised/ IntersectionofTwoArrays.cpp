#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

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
	
	set<int> st; // O(1)
	set<int> ans; // O(1)
	 
	for(int i=0; i<n; i++){ // O(n)
	   st.insert(arr[i]);  // O(log n) => O(n logn)
	}
	
	for(int i=0; i<m; i++){ // O(m)
	   if(st.count(arr1[i])){ // O(log n) => because st me arr h.
	       ans.insert(arr1[i]); // O(log m)
	   }
	}
		    
	cout << ans.size() << endl; // O(k) => O min(n+m)
	for(auto x: ans){  // O(n)
	    cout << x << " "; 
	}
}

// TC: O(n log n + m(log n + log m) + k)

// SC: O(n + m)


// 6
// 1 2 2 1 3 5
// 6
// 2 2 3 4 5 5

// 3
// 2 3 5

// Logic - set two st, ans 
// || n arr st.insert(arr) 
// || m arr1 - st.count(arr1) => ans.insert(arr1) 
// || auto x : ans = > x 
