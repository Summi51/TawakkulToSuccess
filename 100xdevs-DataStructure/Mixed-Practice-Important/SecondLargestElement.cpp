#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin >> n;
	long long arr[n];
	
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}
	long long mx1 = LLONG_MIN;
	long long mx2 = LLONG_MIN;
	
	for(long long i=0; i<n; i++){
	    if(arr[i] > mx1){
	        mx2 = mx1;
	        mx1 = arr[i];
	    }else if((mx1 > arr[i] and arr[i] > mx2)){
	        mx2 = arr[i];
	    }
	}
	
  if(mx2 == LLONG_MIN){
    cout << -1;
   }else{
       cout << mx2;
   }
  
}

// 4
// 5 5 5 5

// -1

//====
// 7
// 13 6 31 14 29 44 3

// 31

//====
// 5
// 4 3 10 9 2

// 9

// Logic 
// case 1st  IF - ar > mx1 -> m2 = m1 -> m1 = ar ||
// case ELSE IF - ar<m1 and ar<m2 => m2 = ar ||
// case 3rd - m2 == LLONG_MIN -> -1 ||