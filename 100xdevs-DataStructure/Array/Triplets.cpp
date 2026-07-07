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
            for(int k=j+1; k<n; k++){
            if(arr[i]+arr[j]+arr[k]==target){
                c++;
            }
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


// 2
// 7
// 1 2 3 4 5 6 7
// 19
// 9
// 2 -5 8 -6 0 5 10 11 -3
// 10

// 0 
// 5


// logic - i = 0 and j = i+1 loop k = j+1 || a[i] + a[j] + a[k] == target , c++