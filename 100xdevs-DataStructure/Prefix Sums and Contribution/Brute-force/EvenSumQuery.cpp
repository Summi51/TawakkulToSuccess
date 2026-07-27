#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
	cin >> n;

	int arr[n];
	
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	   // cout << arr[i] << " ";
	}

    int q;
    cin >> q;
    
   for(int i=0; i<q; i++){
       int l, r;
       
       cin >> l >> r;
       l--;
       r--;
       int sum = 0;
       
       for(int i=l; i<=r; i++){
           if(i%2!=0){
            sum +=arr[i];
            // cout << sum << " ";
           }
       }
      cout << sum << endl;
   }
	}

// 5
// 1 2 3 4 5
// 3
// 1 3
// 2 4
// 1 5

// 2
// 6
// 6

//========

// 4
// 7 7 7 7
// 2
// 1 2
// 2 4

// 7
// 14

// Logic - loop q=0 , q<n, 
// || l-- , r-- || i=l, i<=r 
// || if i%2!=0 , sum+=arr[i] 
// || print sum

