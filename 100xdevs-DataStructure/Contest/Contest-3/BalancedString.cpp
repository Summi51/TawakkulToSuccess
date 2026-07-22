#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	
	
    int c1 = 0;
    int c2 = 0;
	for(int i=0; i<s.size(); i++){
	     if(s[i]=='a'){
	         c1++;
	     }else if(s[i]=='b'){
	         c2++;
	     }
	}
// 	cout << c1  << " " << c2;
	if(c1==c2){
	    cout << "YES";
	}else{
	    cout << "NO";
	}
}

// abab
// YES


// a
// NO

// Logic
// if (s[i]==a) c1++
// || else (s[i]==b) c2++


