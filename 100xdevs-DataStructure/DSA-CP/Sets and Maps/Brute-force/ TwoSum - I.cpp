#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, target;
	cin >> n >> target;
	
	int arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	int c=0;
	for(int i=0; i<n; i++){
	    for(int j=i+1; j<n; j++){
	        if(arr[i]+arr[j]==target){
	            c++;
	            break;
	        }
	    }
	}
	if(c>0){
	    cout << "TRUE";
	}else{
	    cout << "FALSE";
	}
}

// TC : O(n^2)
// SC: O(1)

// 5 9
// 1 4 2 7 5

// TRUE

// Logic - i, j=i+1, a[i]+a[j]=target || c++ || c>0 - true/false