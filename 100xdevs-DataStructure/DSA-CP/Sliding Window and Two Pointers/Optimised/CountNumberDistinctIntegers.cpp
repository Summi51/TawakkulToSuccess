#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	long long n, k;
	cin >> n >> k;
	
	long long arr[n];
	
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	map<long long, long long>mp;
	
	for(long long i=0; i<k; i++){
	   mp[arr[i]]++;
	   
	}
	
	cout << mp.size() << " ";
	
    for(long long i=k; i<n; i++){
	        
	   mp[arr[i]]++;
	  
	   mp[arr[i-k]]--;
	   
	   if(mp[arr[i-k]]==0){
	   mp.erase(arr[i-k]);
	   }
	  	    cout << mp.size() << " ";
	 }
	 
	}


// 7 4
// 1 2 1 3 4 2 3

// 3 4 4 3

// TC : O(n)
// SC : O(n)

// Logic -> map, sliding window,  || 
// 1. loop i, i<k, map[a[i]]++ -> add value in map with frequency , mp.size() print 
// || 2. loop i=k, i<n; map[a[i]]++ // add , map[a[i-k]]-- // remove 
// ||  if(mp[arr[i-k]]==0) means mp(a[i-k]) remove but still size not decrease 
// || so  mp.erase(arr[i-k]); , size also decrease || print mp.size()