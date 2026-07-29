

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int n;
	cin >> n;
	
	int arr[n];
	for(int i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	}
	
	int q;
	cin >> q;
	
	for(int i=0; i<q; i++){ // O(q*n)
	    int l, r;
	    cin >> l >> r;
	    
	    l--;
	    r--;
	    int sum = 0;
	    for(int i=l; i<=r; i++){
	        sum +=arr[i];
	    }
	    
	    cout << sum << endl;
	}
}

// TC = O(q*n)
// SC = O(1)

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

// Logic - q loop inside i = l , i<=r loop 
// || l--, r-- because array is a1 
// || l r loop s+=a[i]
