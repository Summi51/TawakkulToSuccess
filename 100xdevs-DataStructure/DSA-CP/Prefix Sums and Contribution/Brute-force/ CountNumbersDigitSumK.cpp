#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
 
	long long n, q, k;
	cin >> n >> q >> k;
 
	long long arr[n];
	for(long long i=0; i<n; i++){ // O(n)
	    cin >> arr[i];
	}
	
	long long p[n];
	long long x;
	
	for(long long i=0; i<n; i++){ // O(n)
	      long long sum = 0;
	      x = arr[i];
	      while(x>0){
	          sum +=x%10;
	          x /=10;
	      }
	      
	      p[i] = sum;
	   
	   //   cout << p[i] << " ";
	} 
 
	for(long long i=0; i<q; i++){ // O(q*n)
	    long long l, r;
	    cin >> l >> r;
	    
	    l--;
	    r--;
	    long long c = 0;
	    for(long long i=l; i<=r; i++){
	        if((p[i])==k){
	            c++;
	        }
	    }
	    
	    cout << c << endl;
	}
}
 
// TC = O(q*n)
// SC = O(n)
 
// TLE = O(q*n) = 10^5 * 10^5 = 10^10
 
// 5 3 10
// 19 55 10 37 91
// 1 3
// 2 5
// 1 5
 
// 2
// 3
// 4
 
// Logic - digit sum x=a[i] while(x>0) => sum +=x%10; x=x/10; , p[i] = sum || loop l to r || p[i] == k , c++