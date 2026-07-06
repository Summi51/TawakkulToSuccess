#include <bits/stdc++.h>
using namespace std;

void solve(){
    
 int n;
 cin >> n;
 
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}

int c0 = 0;
int c1 = 0;

for(int i=0; i<n; i++){

if(arr[i]==0){
    c0++;
}else{
    c1++;
}
    
}

for(int i=0; i<c0; i++){
    cout << '0' << " ";
}
for(int i=0; i<c1; i++){
    cout << '1' << " ";
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
// 8
// 1 0 1 1 0 1 0 1
// 5
// 0 1 0 1 0


// 0 0 0 1 1 1 1 1 
// 0 0 0 1 1 


// c0++, c1++, for c0, c1 => print '0' and '1'