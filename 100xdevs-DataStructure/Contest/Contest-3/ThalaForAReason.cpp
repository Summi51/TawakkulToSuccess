#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin >> t;
	
// 	cout << t;
// 	cout << endl;
   
	for(int i=0; i<t; i++){
	  int n;
	  cin >> n;
     int sum = 0;
// 	  cout << n << endl;
      while(n>0){
       int val = n%10;
        sum = sum + val;
        n = n / 10;
      }
      if(sum==7){
          cout << "Thala for a reason" << endl;
      }else{
          cout << "Blocked for no reason" << endl;
      }

	}
	
}

// 5
// 7
// 16
// 34
// 70
// 1234

// Thala for a reason
// Thala for a reason
// Thala for a reason
// Thala for a reason
// Blocked for no reason

//Logic
// for loop t 
// || int n 
// || loop => last digit in while loop - val = n%10; s+=val; n=n/10 
// || sum==7