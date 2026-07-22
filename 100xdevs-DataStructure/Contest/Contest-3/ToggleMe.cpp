#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    string s;
    cin >> s;

	for(int i=0; i<s.size(); i++){
	    if(s[i]>='a' and s[i]<='z'){
	        s[i] = s[i]-32;
	    }else if(s[i]>='A' and s[i]<='Z'){
	        s[i] = s[i]+32;
	    }
	}
      cout << s;
}

// HeLLo

// hEllO

// string s || s[i]>=a and s[i]<=z || s[i]= s[i]-32 || else if s[i]>=A and s[i]<=Z || s[i] + 32 || cout s