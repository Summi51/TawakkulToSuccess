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
	
	int location = 0;
	int location1 = 0;
	for(int i=0; i<n; i++){
	    for(int j=i+1; j<n; j++){
	        if(arr[i]+arr[j]==target){
	            location = i+1;
	            location1 = j+1;
	        }
	    }
	}
cout << location << " " << location1 << endl;
}

// TC: O(n^2)
// SC: O(1)

// 5 9
// 1 4 2 7 5

// 3 4

// Logic - loop i, j, i=j+1, || arr[i]+arr[j]==target || location=i+1, location1 = j+1; || print location, location1