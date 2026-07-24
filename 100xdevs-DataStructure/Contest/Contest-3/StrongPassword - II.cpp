#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	
	bool lower = false;
	bool uppar = false;
	bool digit = false;
	bool special = false;
	
	int c=0;
	
	for(int i=0; i<s.size(); i++){
	    if(s[i]>='a' and s[i]<='z'){
	        lower = true;
	    }else if(s[i]>='A' and s[i]<='Z'){
	      uppar = true;
	    }else if(s[i]>='0' and s[i]<='9'){
	       digit = true;
	    }else{
	        special = true;
	    }
	}
	
	if(lower){
	    c++;
	}
	
	if(uppar){
	    c++;
	}
	
	if(digit){
	    c++;
	}
	
	if(special){
	    c++;
	}
	
	if(c==4){
	    cout << "Strong";
	}else if(c>=3){
	    cout << "Moderate";
	}else{
	    cout << "Weak";
	}
	
}


// Abc123!
// Strong

// abcdef
// Weak

// Logic 
// int c, u=false, l=false, d=false, s=false 
// || loop -> a to z, l=true, Ato Z , u=true, 0 to 9, d=true else s=true 
// || if u c++, if l c++, if d c++, else c++ 
// || c==4 - Strong , c>=3 Mod , else Weak;