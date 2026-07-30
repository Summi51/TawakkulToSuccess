#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
int n;
cin >> n;
 
int arr[n];
 
for(int i=0; i<n; i++){
    cin >> arr[i];
}
 
// last se sort
for(int i=n-1; i>=1; i--){
    int swaped = 0;
    for(int j=0; j<i; j++){
        if(arr[j]> arr[j+1]){
            swap(arr[j], arr[j+1]);
            swaped++;
        }
    }
    
    
    cout << "Pass " << n-i << ": ";
 
    for(int k=0; k<n; k++){
        cout << arr[k] << " ";
    }
    
    cout << ", " << "swaps" << " = " << swaped << endl;
    
    // last itreation swaped = 0, then break suddenly, so add in last then print last line also.
    
        if(swaped==0){
            break;
        }
}
 
}
 
 
// 5
// 5 1 4 2 8
 
 
// Pass 1: 1 4 2 5 8 , swaps = 3
// Pass 2: 1 2 4 5 8 , swaps = 1
// Pass 3: 1 2 4 5 8 , swaps = 0

//================
//Logic 

// i=n-1, i>=1 bacause last se sort || j<i less iteration || if(swape==0) because alrady  swap array

// 1. swap last (i=n-1) | 2. compair 2 pair j<i; 