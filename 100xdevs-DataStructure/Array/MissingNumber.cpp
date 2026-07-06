#include <bits/stdc++.h>
using namespace std;

void solve(){
    
 int n;
 cin >> n;
 
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}

bool flag = false;
for(int i=0; i<n; i++){
    int target = arr[i];
    int c = 0;
    for(int j=0; j<n; j++){
        if(arr[j]==target){
            c++;
        }
    }
    
    if(c==1){
        cout << target << endl;
    }
    
}
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
// 5
// 2 4 7 2 7
// 9
// 1 3 1 3 6 6 7 10 7


// 4
// 10

// logic

// c==1 => print target, loop nested i, j and target == a[j]