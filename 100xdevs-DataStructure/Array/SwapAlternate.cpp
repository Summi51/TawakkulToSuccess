#include <bits/stdc++.h>
using namespace std;

void solve(){
    
 int n;
 cin >> n;
 
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}

for(int i=1; i<n; i=i+2){
   swap(arr[i-1], arr[i]);
}

for(int i=0; i<n; i++){
    cout << arr[i] << " ";
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

// 2
// 9
// 9 3 6 12 4 32 5 11 19
// 4
// 1 2 3 4


// 3 9 12 6 32 4 11 5 19
// 2 1 4 3


// i=i+2, i=1 to i<n, because last if no pair