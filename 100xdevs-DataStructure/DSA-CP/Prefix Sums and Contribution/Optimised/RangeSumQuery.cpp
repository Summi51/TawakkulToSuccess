#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long long n;
	cin >> n;
	
	long long arr[n];
	for(long long i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	}
	
	long long p[n]; // sc - O(n)
	long long sum = 0;
	
	for(long long i=0; i<n; i++){  // O(n)
	sum +=arr[i];
	p[i] = sum;
// 	cout << sum << " "; // 1 3 6 10 15 
	}

   long long q;
   cin >> q;
	  
   for(long long i=0; i<q; i++){ // O(q)
     long long l, r;
	 cin >> l >> r;
// 	 cout << l << r; // 1 3 6 10 15 array index
	 
	  l--;  // index start 0
	  r--;
	       if(l==0){
	         cout << p[r] << endl;
	        }else{
	            cout << p[r]-p[l-1] << endl;
	        }
	    }
}	    

// TC = O(n+q)
// SC = O(n)

// 5
// 1 2 3 4 5
// 3
// 1 3
// 2 4
// 1 5

// 6
// 9
// 15

// Logic - 1st prefix sum => new array p[n], loop n , sum +=a[i], p[i] = sum 
// || 2nd loop q, input l r, l-- r--, if l=0 p[r] else p[r] - p[l-1]