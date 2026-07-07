#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int c =0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                c++;
            }
        }
    }
    cout << c << endl;
}


int main() {
	// your code goes here
int t;
cin >> t;
for(int i=0; i<t; i++){
    solve();
}

}


// 1. - tc
// 9 - n
// 1 3 6 2 5 4 3 2 4
// 7 - target

// 7 


// logic - i = 0 and j = i+1 loop || a[i] + a[j] == target , c++