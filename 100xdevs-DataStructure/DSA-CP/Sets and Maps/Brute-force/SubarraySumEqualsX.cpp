#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n, x;
	cin >> n >> x;

	long long arr[n];
	
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	long long p[n];
	long long sum = 0;
	for(long long i=0; i<n; i++){
	    sum +=arr[i];
         p[i] = sum;
	}
	
	for(long long l=0; l<n; l++){

	    for(long long r=l; r<n; r++){
	       long long currentSum = 0;
          if(l==0){
             currentSum =  p[r];
          }else{
             currentSum =  p[r] - p[l-1];
          }
        if(currentSum == x){
	     cout << "YES";
	        return 0;
	    }
	    }
	}
	cout << "NO";
}

// TC: O(n^2)
// SC : O(1)

// 5 3
// 1 2 3 4 5

// Logic : prefix sum logic (1st array 0 to n-1 sum)
// || loop nested l=0, l<n , r=l , r<n, (for sub array) 
// || int currentSum inside r loop 
// || if(l==0) p[r] ,  l!=0 ,, else p[r] - p[l-1] (prefix sum logic) 
// || if(currentSum==0) "yes" || end loop NO