#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int n;
 cin >> n;
 
 string s;
 cin >> s;
//  cout << s;

 int c = 0;
 for(int i=0; i<n; i++){
    if(s[i]=='x' 
    and (i==0 || s[i-1]== 'x') 
    and (s[i+1] == 'x' || i==n-1)){
        c++;
    }
}
 cout << c << endl;
}

// 8
// xxoxxxox

// 2

// 5
// ooooo

// 0

// 1
// x

// 1