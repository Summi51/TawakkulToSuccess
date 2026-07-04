#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
int n;
cin >> n;
 
int arr[n];
 
for(int i=0; i<n; i++){
    cin >> arr[i];
}
 
int target;
cin >> target;
 
bool flag = false;
for(int i=0; i<n; i++){
    if(arr[i]==target){
        flag = true;
    }
}
 
if(flag){
    cout << "YES";
}else{
    cout << "NO";
}
}
 
 
// 5
// 1 3 7 9 2
// 7


//=============
// Logic

// arr[i]==target
