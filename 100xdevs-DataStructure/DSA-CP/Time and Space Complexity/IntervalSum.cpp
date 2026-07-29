#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long l;
    long long r;
    cin >> l >> r;
    
    // cout << l << " " << r << endl;
    long long sum = 0;
    long long sum1 = 0;
    long long sum2 =0;
    
     sum = r*(r+1)/2;
     sum1 = (l-1)*(l-1+1)/2;
     sum2 = sum - sum1;
    
    cout << sum2 << endl;
    
    
}
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	
	for(int i=0; i<t; i++){
	    solve();
	}
 
}
 
// 3
// 1 3
// 5 5
// 2 6
 
 
// 6
// 5
// 20
 

//Logic

// All natural num sum 1to r -> r*(r+1)/2 
// 1 to L-1 -> (L-1)*(L-1+1)/2 
// sum = r-L


// 3,6
// 1+2+3+4+5+6 = all natural num (1 to r)
// 1+2         = 1 to L-1
// 1+2+3+4+5+6 - 1+2 = Ans

// L = 3 , r = 6

// to

// L-1 = 2 ==> 1+2

// L + (L+1) + (L+2) + ... + (R-1) + R