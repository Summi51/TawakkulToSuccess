#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int arr[n][n];
	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++){
	        cin >> arr[i][j];
	    }
	}
	
	// diagonal 
	int sum = 0;
	int i = 0;
	int j = 0;
	while(i<n and j<n){
	    sum +=arr[i][j];
	    i++;
	    j++;
	}
	
	// diagonal reverse
	int sum1 = 0;
	 i = 0;
	 j = n-1;
	while(i<n and j>=0){
	    if(i!=j){
	       sum1 +=arr[i][j]; 
	     }
	    i++;
	    j--;
	}
	
	cout << sum + sum1 << " ";
}