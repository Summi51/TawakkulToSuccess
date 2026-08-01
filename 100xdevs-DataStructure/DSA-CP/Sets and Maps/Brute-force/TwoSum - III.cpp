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
	
    int c = 0;
    
	for(int i=0; i<n; i++){
	    
	    for(int j=i+1; j<n; j++){
	        if(arr[i]+arr[j]== target){
	            c++;
	        }
	    }
	}
	cout << c << endl;
}

// TC: O(n^2)
// SC: O(1)

// 6 10
// 1 9 2 8 3 7

// 3

// Logic - i, j loop, condition arr[i]+arr[j]== target , c++ 
// || print c