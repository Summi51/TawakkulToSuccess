#include <bits/stdc++.h>
using namespace std;

  
int main() {
	// your code goes here
	string s; 
	cin>> s;
	
     int sum = 0;
	for(long long i=0; i<s.size(); i++){
	   sum = sum + s[i] - 48;  // or sum + s[i] - '0';
	}
	
	cout << sum;
}

// 1000000000000000000003 

// 4

// Logic
// sum = sum + a[i] - 48