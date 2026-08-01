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
	
	map<int, int>mp;
    long long ans = 0;
	for(int i=0; i<n; i++){
	    
	    int req = target-arr[i];
	    
	    if(mp.count(req)){
	       cout << mp[req] << " " << i + 1 << endl;
	       return 0;
	    }
	    
	   if(!mp.count(arr[i])){ // 1 se start hoga 0 se nahi
	       mp[arr[i]] = i+1;
	   }
	}
	    cout << -1 << endl;
}

// TC: O(n log n)
// SC: O(n)

// 5 9
// 1 4 2 7 5

// 3 4

// Logic - loop n -> t-req, if(m.count(req)) -> print mp[req] << i+1 
// || if(!mp.count(a[i])) mp[i] = i+1 // inde 1 se start