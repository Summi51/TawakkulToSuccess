#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n, q;
	cin >> n >> q;
	
	long long arr[n];
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}

   long long sum = 0;
   long long p[n]; 
  for(long long i=0; i<n; i++ ){
    if(i%2==0){
        sum += arr[i];
    }else{
        sum -= arr[i];
    }
    p[i] = sum;
    // cout << p[i] << " ";
   }


for(long long i=0; i<q; i++){
    long long l, r;
    long long ans;
    cin >> l >> r;
    l--;
    r--;
    if(l==0){
        ans = p[r];
    }else{
        ans =  p[r] - p[l-1];
    }
    if(l%2==1){
        ans = -ans;
    }
    cout << ans << endl;
}

}

// TC = O(N + Q)
// SC = O(N)

// Logic: Build alternating prefix sum (+,-,+,-) → 
// for each query convert to 0-based (l--, r--) → 
// ans = (l==0 ? p[r] : p[r]-p[l-1]) → 
// if(l%2==1) ans = -ans (original L was even, so flip sign) → print ans.