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

	for(long long i=0; i<n; i++){

	    pre +=arr[i];  // pr
	    long long req = pre-x;
	    
	   if(pre==x){
        cout << 1 << " " << i+1;
        return 0;
       }

	    if(mp.count(req)){ // p[r]-x = p[l-1] ye p[l-1] nikal rhe h ye,
	        cout << mp[req]+1 << " " << i+1;
	        return 0; 
	    }
	     mp[pre] = i+1;
	} 
		cout << -1;
	}


// TC: O(n log n)
// SC : O(n)

// 5 7
// 1 2 3 4 5

// 3 4


// Logic : 

//+++++++++++++++++++++++++++++++++++++++++++
// understand this logic

// cout << mp[req]+1 << " " << i+1;

// Isko tod ke samjho:

// 1) mp[req]

// Ye map ki value hai.

// Map me hum kya store kar rahe the?

// mp[pre] = i+1;

// Matlab:

// key = prefix sum
// value = us prefix sum ka index

// Example:

// Array:

// 1 2 3 4 5

// Target:

// 7

// Dry run:

// i = 1

// Prefix:

// pre = 1+2 = 3

// Store:

// mp[3] = 2

// Matlab:

// prefix sum 3 index 2 tak bana
// i = 3

// Ab:

// pre = 1+2+3+4
// pre = 10

// Target:

// x = 7

// Required:

// req = pre - x
// req = 10 - 7
// req = 3

// Ab map me check:

// mp.count(3)

// mil gaya.

// Map:

// mp[3] = 2

// Matlab:

// pehle index 2 tak sum 3 tha

// Ab formula:

// current prefix - old prefix = answer
// 10 - 3 = 7

// Array:

// index:  1 2 3 4 5
// value:  1 2 3 4 5
//         ---- ----
//         3     7

// Jo remove hua:

// 1 2

// Bacha:

// 3 4

// Ab print line:

// cout << mp[req]+1 << " " << i+1;

// Value:

// mp[req] = 2

// To:

// 2+1 = 3

// Ye left index hai.

// Aur:

// i = 3

// To:

// i+1 = 4

// Ye right index hai.

// Output:

// 3 4

// Simple language me:

// mp[req]+1

// = subarray ka starting index

// i+1

// = subarray ka ending index

// Ye key/value print nahi hai.

// Map sirf help kar raha hai index dhoondhne me.

// Ek line yaad rakhna:

// map me:
// prefix sum -> us prefix ka index

// output me:
// index -> subarray position

// Tumhare case me:

// 3 -> 2

// map ka data hai.

// Aur output:

// 3 4

// array ka answer hai.