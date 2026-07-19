#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
	cin >> n;
	long long arr[n];
	
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	long long c0 = 0;
	long long c1 = 0;
	
	for(long long i=0; i<n; i++){
	    if(arr[i]==0){
	       c0++;
	    }else{
	        if(arr[i]!=0){
	            cout << arr[i] << " ";
	        }
	    }
	}
	
	for(long long i=0; i<c0; i++){
	        cout << "0" << " ";
	}
	
	cout << endl;

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
// 7
// 2 0 0 1 3 0 0

// 2 1 3 0 0 0 0

//====
// 2
// 5
// 0 3 0 2 0
// 5
// 9 0 0 8 2

// 3 2 0 0 0
// 9 8 2 0 0


//Logic 
// if ar==0 , c0++ else => if ar!=0 cout ar[i] || loop c0 -> cout "0";