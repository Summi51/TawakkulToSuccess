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

int mn = arr[0]; 
int location = 1;
for(int i =0; i<n; i++){
    if(mn>arr[i]){
        mn = arr[i];
    }
    if(mn==arr[i]){
        location = i+1;
        // cout << "kk  " << location << endl;
    }
}

cout << location << endl;
}


// 5
// 12 9 15 9 10

// 4

// Logic

// if - mn>arr[i], mn = arr[i]; || if mn==arr[i],  location = i+1;