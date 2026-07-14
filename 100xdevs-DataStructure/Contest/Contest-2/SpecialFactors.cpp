#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin >> n;
	int x;
	bool flag = false;
	for(int i=1; i<=n; i++){
	    if(n%i==0){ // factors
	         x = i%10;  // last digit 
	         if(x==2 or x==7){ // last digit 2 or 7
	             cout << i << " "; // print factors
	             flag = true;
	         }
	    }
	}
	
   if(flag==false){
	    cout << "-1";
	}
 
}
 
 
// InputCopy
// 12
// OutputCopy
// 2 12
 
// InputCopy
// 84
// OutputCopy
// 2 7 12 42
 
// InputCopy
// 5
// OutputCopy
// -1


//Logic

// factors- n%i || last digit x = i%10; || x==2 or x==7, print, flag = true - at last -1