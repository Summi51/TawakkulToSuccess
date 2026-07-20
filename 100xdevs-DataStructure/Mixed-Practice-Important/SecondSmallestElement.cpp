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
     
     long long mn1 = LLONG_MAX;
     long long mn2 = LLONG_MAX;
     long long location = 0;
     long long location1 = 0;
     
    for(int i=0; i<n; i++){
        if(arr[i]<mn1){
            mn2 = mn1;
            location1 = location;
            mn1 = arr[i];
            location = i;
        }else if(mn1 < arr[i] and mn2 > arr[i]){
            mn2 = arr[i];
            location1 = i;
        }
     }
   if(mn2 == LLONG_MAX){
    cout << -1 << endl;
  }
  else{
    cout << mn1 << " " << mn2 << endl;
  }
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
