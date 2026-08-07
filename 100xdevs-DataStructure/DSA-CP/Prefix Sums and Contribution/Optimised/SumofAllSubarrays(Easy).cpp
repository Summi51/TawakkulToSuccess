#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 long long n;
	cin >> n;
	
	long long arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	long long ans = 0;

for(long long i=0; i<n; i++){
    ans += (i+1) * (n-i) * arr[i]; // start * end;
}
cout << ans << endl;
}

// TC : O(n)
// SC : O(1)

// Logic - start * end => start - i+1 , end - (n-i) * arr[i] 
// || ans += start * end 
// || ans += (i+1) * (n-i) * arr[i] = code