#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
int n;
cin >> n;
 
int arr[n];
 
for(int i=0; i<n; i++){
    cin >> arr[i];
}
 
for(int i=0; i<n-1; i++){
    int mn = arr[i];
    int location = i;
    
    for(int j=i+1; j<n; j++){
        if(arr[j]<mn){
            mn = arr[j];
            location = j;
        }
    }
    
    swap(arr[i], arr[location]);
    
cout << "Pass " << i+1 << ": ";
 
for(int k=0; k<n; k++){
    cout << arr[k] << " ";
}
 
cout << ", " << "min_selected" << " = " << mn << endl;
}
 
 
 
}
 
// 6
// 30 10 50 20 40 60
 
// Pass 1: 10 30 50 20 40 60 , min_selected = 10
// Pass 2: 10 20 50 30 40 60 , min_selected = 20
// Pass 3: 10 20 30 50 40 60 , min_selected = 30
// Pass 4: 10 20 30 40 50 60 , min_selected = 40
// Pass 5: 10 20 30 40 50 60 , min_selected = 50

//==========
// Logic

// 1. find min | 2. location | swap(a[i], a[location]