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
 
int t;
cin >> t;
int p = 0; 
int f = 0;
for(int i =0; i<n; i++){
    if(arr[i]>=t){
        p++;
    }else{
        f++;
    }
}
 
cout << "Pass" << ": " << p << endl;
cout << "Fail" << ": " << f << endl;
}
 
 
// 5
// 45 60 30 80 50
// 50
 
// Pass: 3
// Fail: 2

// logic 
// if arr[i]>=t, p++, else f++