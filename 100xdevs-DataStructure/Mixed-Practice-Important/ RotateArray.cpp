#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
	cin >> n;
// 	cout << n << endl;

	long long arr[n];
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	   // cout << arr[i] << " ";
	}

	 long long d;
	 cin >> d;
    //  cout << endl << d;
     
    for(int i=d; i<n; i++){
        cout <<  arr[i] << " ";
    }
    
    for(int i=0; i<d; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;
  }
  
int main() {
	// your code goes here
	int t;
	cin >> t;
// 	cout << t << endl;
	for(int i=0; i<t; i++){
	    solve();
	}
}

// 1
// 7
// 1 2 3 4 5 6 7
// 2

// 3 4 5 6 7 1 2 


// Logic

// 1st loop - i = d to i<n || 2nd loop i = 0 to i<d