

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	long long n, q;
	cin >> n >> q;
	
	long long arr[n];
	for(long long i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	   // cout << arr[i] << " ";
	}

   long long p[n];
   for(long long i=0; i<n; i++){
    p[i] = arr[i]*arr[i];
    // cout << p[i] << " ";
}
	
	for(long long i=0; i<q; i++){ // O(q*n)
	    long long l, r;
	    cin >> l >> r;
	    
	    l--;
	    r--;
	    long long sum = 0;
	    for(long long i=l; i<=r; i++){
	        sum +=p[i];
	    }
	    
	    cout << sum << endl;
	}
}

// TC = O(q*n)
// SC = O(n)

// TLE = O(q*n) = 10^5 * 10^5 = 10^10

// 5 3
// 2 3 1 4 2
// 1 3
// 2 5
// 4 4

// 14
// 30
// 16


// Logic - take new array p[n] 
// || q loop inside i = l , i<=r loop 
// || l--, r-- because array start from a1 
// || l r loop s+=a[i]

