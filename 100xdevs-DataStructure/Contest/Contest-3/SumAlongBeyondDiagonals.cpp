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
	
long long diagSum = 0, nonDiagSum = 0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i == j || i + j == n - 1)
            diagSum += arr[i][j];
        else
            nonDiagSum += arr[i][j];
    }
}
cout << diagSum << " " << nonDiagSum;
}


// 3
// 1 2 3
// 4 5 6
// 7 8 9

// 25 20

//========

// 5
// 7 -3 14 2 9
// 0 5 -6 8 11
// 13 -4 1 10 -7
// 6 12 -2 -5 4
// 15 3 19 -8 20

// 72 52

// Logic 
// if diagonal L & R - ( i==j or i+j == n-1) || else Non diagonal