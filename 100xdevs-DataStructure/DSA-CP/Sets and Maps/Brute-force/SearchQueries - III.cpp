#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, q;
	cin >> n >> q;
// 	cout << n << q << endl;
	
	int arr[n];
	for(int i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	   // cout << arr[i] << " ";
	}

	for(int i=0; i<q; i++){ 
	int l;
	cin >> l;
	    bool found = false;
	    for(int i=0; i<n; i++){ // O(q*n)
	        if(arr[i]==l){
                 found = true;
                 cout << i + 1 << endl;
                 break;
	        }
	    }
	 if(!found)
    cout << -1 << endl;
	}

}

// TC: O(q*n)
// SC: O(1)

// 5 6
// 10 -3 7 0 20
// -3
// 7
// 5
// 10
// 21
// 20


// 2
// 3
// -1
// 1
// -1
// 5

// Logic - loop q , bool f = false 
// || loop n , a[i]==l -> i+1 print(a1 base index), bool true, break 
// || after n loop if(!f) => -1