#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n; 
   
    int arr1[n];
    
    for(int i=0; i<n; i++){
       cin >> arr1[i];
    //   cout << arr1[i] << " ";
   }
 
//   cout << endl;
   
    int m;
    cin >> m;
    
    int arr2[m];
     
    for(int j=0; j<m; j++){
       cin >> arr2[j];
    //   cout << arr2[j] << " ";
   }

//   cout << endl;
  
   int target;
  for(int i=0; i<n; i++){
      
    int c=0;
    target = arr1[i];
     
     for(int j=0; j<m; j++){
        if(target==arr2[j]){
            c++;
            arr2[j] = -1;    // ya koi aisi value jo input me kabhi na aaye
            break;
        }
     }
     
      if(c>0){
         cout << target << " ";
        }
        
         }
         
            cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    for(int i=1; i<=t; i++){
           solve();
    }
    
}

// 2
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7
// 2
// 10 10
// 1
// 10

// 2 4 3 
// 10 

//target==arr2[j], c++, a2[j]=-1, break, 

// arr2 = [-1]
// Ab outer loop dobara chalta hai.

// target = 10

// Inner loop:

// 10 == -1 ❌

// Match nahi mila.

// Isliye print nahi hoga.

// Output:

// 10