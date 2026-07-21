#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s; 
  cin>> s;
  long long n = s.size();
 
   long long i = 0;
  while(i<n){
    long long j = i;
    long long c = 0;
    while(s[i]==s[j] and j<n){
           j++;
           c++;
        }
     cout << s[i];
     if(c>1){
         cout << c;   // a1 not allow print a => abbcc 
     }
       i = j;
   }
     cout << endl;
  }
  
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    solve();
	}
}

// 1
// abc
// abc

// 1
// abbcddd
// ab2cd3

// 2
// aaabbddccc
// ggttttffffrreee

// a3b2d2c3
// g2t4f4r2e3

// Logic
// 1st while(i<n) 
// || j=i, c=0 
// || while(a[i] == a[j] and j<n) j++, c++ 
// || cout s[i] || if c>1 cout c 
// || i = j;