#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	int sum = 0;
	int mn = INT_MAX;
	int max = INT_MIN;
	int avg = 0;
	for(int i=0; i<n; i++){
	   sum +=arr[i]; 
	      
	    if(arr[i]>max){
	          max = arr[i];
	    }
	    
	    if(arr[i]<mn){
	        mn = arr[i];
	    }
	    
	    avg = (sum)/n;
	}
	cout << sum << " " << max << " " << mn << " " << avg;
}

// 5
// 1000 2000 1500 3000 2500

// 10000 3000 1000 2000

//Logic
// Average = Total Sum / Number of Elements
// sum || mx || mn || avg = sum / n