#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n, x;
	cin >> n >> x;

	long long arr[n];
	
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}

   map<long long, long long>mp;
   long long pre = 0;
       long long ans = 0;

	for(long long i=0; i<n; i++){

	    pre +=arr[i];  // p[r]
	    long long req = pre-x; // p[r] - x = p[l-1];
	
	   if(pre==x){
         ans++;
       }

	    if(mp.count(req)){ // p[r]-x = p[l-1] ye p[l-1] nikal rhe h ye,
	        ans = ans + mp[req];
	    }
	     mp[pre]++;
	} 
		cout << ans << endl;
	}


// TC: O(n log n)
// SC : O(n)

// 5 7
// 1 2 3 4 5

// 3 4


// Logic: pre += arr[i] (current prefix sum) → req = pre - x (required previous prefix) → if(pre == x) ans++ → if(mp.count(req)) ans += mp[req] → mp[pre]++ (store frequency of current prefix).

//=+++++++++++++

// Logic: Current prefix nikalo → required prefix (pre-x) dhoondo → jitni baar mila utne subarrays add karo → current prefix ki frequency map me badha do.
