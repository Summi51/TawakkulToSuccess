#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
    long long n;
	cin >> n;
	
	long long arr[n];
	for(long long i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	   // cout << arr[i] << " ";
	}

    // prefix sum
    long long p[n];
    long long sum =0;
   for(long long i=0; i<n; i++){ // O(n)
        if(i%2==0){ 
            arr[i] = 0;
       }
    //   cout << arr[i]; // 7 0 7 0
       sum +=arr[i];
       p[i] = sum;  
    //   cout << p[i] << " "; // 7 7 14 14 
   }
   
   // q 
   long long q;
   cin >> q;
   for(long long i=0; i<q; i++){ // O(q)
       long long l, r;
       cin >> l >> r;
       l--;
       r--;
    //   cout << l << r;
        if(l==0){
            cout << p[r] << endl;
        }else{
            cout <<p[r] - p[l-1] << endl;
        }
   }
	}

// TC - O(q+n) 
// SC - O(n)

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


// Logic - 1st odd index value = 0 
// || 7 0 7 0 
// || sum array - 7 0 7 0 and store p[i] = 7 7 14 14 
// || new array 2nd loop q, input l r, l-- r--, if l=0 p[r] else p[r] - p[l-1] 