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
// 1 3 5 7 9
// 7


// logic in short

// l=0, r=n-1 || m=l+r/2 
// || a[i]==t,flag true,break 
// || a[i]>t, //right, l = m-1 
// || a[i]<t, //left r=m+1


//===== mistake (what i did wrong)

// forget //left , right conditions - l=m-1, r=m+1