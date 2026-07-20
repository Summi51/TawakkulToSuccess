#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
	cin >> n;
	long long arr[n];
	
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	int k = 0;
    int mn = arr[0];
	for(long long i=0; i<n; i++){
	    if(arr[i]<mn){
	        mn = arr[i];
	        k = i;
	    }
	}
	
     cout << k << endl;
// 	 cout << endl;

}

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    solve();
	}
}

// 1
// 6
// 5 6 1 2 3 4

// 2

//=======

// 2
// 5
// 3 6 8 9 10
// 4
// 10 20 30 1

// 0
// 3


// Logic

// find min and its location,