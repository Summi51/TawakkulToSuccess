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
	       // cout << arr[i][j] << " ";
	    }
	}
	
	for(int i=0; i<n; i++){
	      for(int j=n-1; j>=0; j--){
	         cout << arr[j][i] << " ";
	      }
	      cout << endl;
	}
}

// 3
// 1 2 3
// 4 5 6
// 7 8 9


// 7 4 1 
// 8 5 2 
// 9 6 3 

// Logic
// for i - 0 to n || for j - n-1 to 0 || a[j][i]

