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
	       ans += mp[req]; 
	    }
	   if(mp.count(arr[i])){
	       mp[arr[i]]++;
	   }else{
	       mp[arr[i]] = 1;
	   }
	}
	cout << ans;
}

// TC: O(n log n)
// SC: O(n)

// 6 10
// 1 9 2 8 3 7

// 3

// Logic - loop n - > req = t-a[i] 
// || if(mp.count((req))) ans +=mp[req] 
// || i(mp.count([a[i]]) => mp[a[i]]++ else mp[a[i]] = 1;