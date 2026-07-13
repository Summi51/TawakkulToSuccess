#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i=1; i<=n; i++){
	    cin >> arr[i];
	}
	
int c0 = 0;
int c1 = 0;
int c2 = 0;
 
for(int i = 1; i<=n; i++){
    if(arr[i]==0){
        c0++;
    }else if(arr[i]==1){
        c1++;
    }else{
        c2++;
    }
}
 
for(int i=1; i<=c2; i++){
     cout << "2" << " ";
}
 
for(int i =1; i<=c1; i++){
       cout << "1" << " ";
   }
 
for(int i=1; i<=c0; i++){
      cout << "0" << " ";
 }
 
}
 
 
// 6
// 0 2 1 2 0 1
 
// 2 2 1 1 0 0 

// logic 
// c0++, c1++, c2++ || for loop c2, c1, c0 ->  '2', '1' '0'