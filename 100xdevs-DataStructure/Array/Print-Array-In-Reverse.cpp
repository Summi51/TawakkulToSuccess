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


for(int i=n-1; i>=0; i--){
    cout << arr[i] << " ";
}

}

// input

// 5
// 1 2 3 4 5

// 5 4 3 2 1 


//loop take input array (cin >> arr[i])