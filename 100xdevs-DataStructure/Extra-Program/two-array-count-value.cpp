#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	map<int, int> mp; 
	int n;
	cin >> n;
	
	int arr[n];
	for(int i=0; i<n; i++){ // 
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
	 
	for(int i=0; i<n; i++){ //
	   if(mp.count(arr[i])){
	       mp[arr[i]]++;
	   }else{
	       mp[arr[i]] = 1;
	   }
	}
	
	for(int i=0; i<m; i++){ // 
	    if(mp.count(arr1[i])){
	        mp[arr1[i]]++;
	    }else{
	        mp[arr1[i]] = 1;
	    }
	}
		    
	cout << mp.size() << endl; 
	for(auto x: mp){  // O(n+m)
	    cout << x.first << " " << x.second << endl; 
	}
}


// 6
// 1 2 2 1 3 5
// 6
// 2 2 3 4 5 5

// 5
// 1 2
// 2 4
// 3 2
// 4 1
// 5 3
