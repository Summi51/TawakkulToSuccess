#include <bits/stdc++.h>
using namespace std;
  
int main() {
	// your code goes here
   int n;
   cin >> n;
   
   int arr[n][n];
   
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           cin >> arr[i][j];
        //   cout << arr[i][j] << " ";
       }
    //   cout << endl;
   }
   int sum = 0;
     for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
         if(i==j){
               sum = sum + arr[i][j];
         }
       }
   }
   cout << sum;
}

// 3
// 1 2 3
// 4 5 6
// 7 8 9

// 15

// Logic
// i==j - sum = sum + a[i][j]