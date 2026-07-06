#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
   // your code goes here
   
   int n;
   cin >> n;
   
   int arr[n];
   
   for(int i=0; i<n; i++){
       cin >> arr[i];
   }
   
   int l=0;
   int r = n-1;
 
while(l<r){
    swap(arr[l], arr[r]);
        l++;
        r--;
    
//    if(l==r){
//        break;  // no need this check
//    }
}
 for(int i=0; i<n; i++){
     cout << arr[i] << " ";
 }
 
}
 
// 5
// 1 3 7 9 10

// two pointer( l<r, swap(a[l], a[r]), i++, r-- || or used reverse loop
 
// used reverse loop

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
 
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
     
for(int i=n-1; i>=0; i--){
    cout << arr[i] << " ";
}
}
 
// 5
// 1 3 7 9 10