#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n, k;
	cin >> n >> k;
	
	long long arr[n];
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	long long sum = 0;
	long long ans;
	// for 1st subarray windiow size of k
	for(long long i=0; i<k; i++){
	    sum += arr[i];
	}
	ans = sum;

	// Remaning sliding window of size k
    for(long long i=k; i<n; i++){
	    sum +=arr[i]; // add next
	    sum-=arr[i-k]; // remove privious
	    
	 ans = max(ans, sum);
	}
 cout << ans;
}

// TC : O(n)
// SC : O(1)

// Logic -> 1. 1st sliding window of size k 0, 1, 2 array loop(i=0; i<k) 
// || sum of all 1st window of size k 
// || ans = sum || 2. All remaning window of size k loop(i=k; i<n) 
// || sum+=arr[i] // add next || sum-=arr[i-k] // remove prevoius 
// || ans = max(ans, sum) || print ans
