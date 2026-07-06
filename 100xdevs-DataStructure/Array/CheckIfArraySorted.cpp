












#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
long long n;
cin >> n;
long long arr[n];
 
bool flag = false;
 
for(int i=0; i<n; i++){
    cin >> arr[i];
}
 
for(int i=1; i<n; i++){
    if(arr[i-1] > arr[i]){
       flag = true;
    }
    }
    
    if(flag){
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
    }
}


// 5
// 1 2 3 4 5

// a[i-1] > a[i] , flag = true; no, yes






// break sirf nearest loop (for, while, do-while) ya switch ko todta hai.

// if ko break nahi kiya ja sakta, kyunki if loop hi nahi hai.