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
bool flag = false;
for(int i=0; i<n; i++){
    target = arr[i];
    int c = 0;
    for(int j=0; j<n; j++){
        if(arr[j]==target){
            c++;
        }
    }
    if(c==2){
        cout << target << endl;
        break;
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
// 0 2 1 3 1
// 7
// 0 3 1 5 4 3 2

// 1
// 3

// c==2,target. print, break;