

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int n, q;
	cin >> n >> q;
	
	int arr[n];
	for(int i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	   // cout << arr[i] << " ";
	}

   int p[n];
   for(int i=0; i<n; i++){
    p[i] = arr[i]*arr[i];
    // cout << p[i] << " ";
}
	
	for(int i=0; i<q; i++){ // O(q*n)
	    int l, r;
	    cin >> l >> r;
	    
	    l--;
	    r--;
	    int sum = 0;
	    for(int i=l; i<=r; i++){
	        sum +=p[i];
	    }
	    
	    cout << sum << endl;
	}
}

// TC = O(q*n)
// SC = O(n)

// TLE = O(q*n) = 10^5 * 10^5 = 10^10

// 5
// 1 2 3 4 5
// 3
// 1 3
// 2 4
// 1 5

// 6
// 9
// 15


// Logic - take new array p[n] 
// || q loop inside i = l , i<=r loop 
// || l--, r-- because array start from a1 
// || l r loop s+=a[i]
