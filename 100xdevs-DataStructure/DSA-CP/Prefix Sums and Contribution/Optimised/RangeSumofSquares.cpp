#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	long long n, q;
	cin >> n >> q;
	
	long long arr[n]; 
	for(long long i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	}
	
	long long p1[n]; // sc O(n)
	for(int i=0; i<n; i++){ // O(n)
	    p1[i] = arr[i]*arr[i];
	   // cout << p1[i] << " ";
	}
	
	long long p[n];  // sc O(n)
	long long sum = 0;
	
	for(long long i=0; i<n; i++){   // O(n)
	sum +=p1[i];
	p[i] = sum;
	}

   for(long long i=0; i<q; i++){ // O(q)
     long long l, r;
	 cin >> l >> r;
	  l--;  
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

// Logic - 1st p1[n] - square of array 
// || 2nd prefix sum => new array p[n], loop n , sum +=p1[i], p[i] = sum 
// || 2nd loop q, input l r, l-- r--, if l=0 p[r] else p[r] - p[l-1]