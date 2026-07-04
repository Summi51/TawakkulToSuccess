

#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
int n;
cin >> n;
 
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}
// start from 1 because this is unsorted array
for(int i=1; i<n; i++){
    
    int temp = arr[i];  // because value should not be lossed 
    int j = i-1; // i is unsorted array so privious sorted array is i-1 position
    int shifts=0;
    
    while(arr[j]>temp and j>=0){ // condition
        arr[j+1] = arr[j];     // shift value
        j--;  
        shifts++;
    }
    
    arr[j+1] = temp;  // j value is same as found in while loop (not global)
 
    cout << "Pass " << i << ": ";
    
    for(int k=0; k<n; k++){
        cout << arr[k] << " ";
    }
    
    cout << ", ";
 
     for(int k=0; k<n; k++){
        cout <<  arr[k] << " ";
        
        if(i==k){
            cout << "| ";
        }
    }
    
   cout << " , " << "shifts" << " = " << shifts << endl;
}
 
 
}
 
 
// Pass 1: 1 5 4 2 3 , 1 5 | 4 2 3 , shifts = 1
// Pass 2: 1 4 5 2 3 , 1 4 5 | 2 3 , shifts = 1
// Pass 3: 1 2 4 5 3 , 1 2 4 5 | 3 , shifts = 2
// Pass 4: 1 2 3 4 5 , 1 2 3 4 5 | , shifts = 2



















// Logic

// 1. i=1, because unsorted array 
// | 2. j=i-1 sorted array, before i privious val i-1; 
// | 3. temp = arr[i] not loss value; 
// | 4. while(j>=0 and a[j] > temp;) => a[j+1] = ar[j] value shift unsorted side 
// | 5. after loop a[j+1] = temp; sort array side shift value.