#include <bits/stdc++.h>
using namespace std;
  
int main() {
	// your code goes here
   string s;
   getline(cin, s);
    long long n = s.size();
//   cout << n;
//   cout << s << endl;
   long long mx = LLONG_MIN;
   long long i = 0;
   while(i<n){
       long long c = 0;
       long long j = i;
       
       while(j<n and s[j] != ' '){
           j++;
           c++;
       }
       i = j+1;  // because space ke bad next value 
       
       if(c>mx){
          mx = c;
       }
   }
    cout << mx; 
}

// hello world this is CP

// 5

// Logic
//