#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, target;
	cin >> n >> target;
	
	int arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	set<int>st;
	int c=0;
	
	for(int i=0; i<n; i++){
	    
	   if(st.count(target-arr[i])){
	        cout << "TRUE";
	        return 0;
	   }else{
	       st.insert(arr[i]);
	   }
	}
	cout << "FALSE";
}

// TC: O(n longn)
// SC : O(n)

// 5 9
// 1 4 2 7 5

// TRUE

// Logic - set 
// || if st.count(target - arr[i]) cout << true, return 0, st.insert(a[i]) 
// || loop ke bahar cout << false 
// 7 + ? = 9 || ? = 9 - 7 ||  target - arr[i] || 9 - 7 = 2 || 2 + 7 = 9 
// 9 - 5 = 4 same repeat