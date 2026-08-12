#include <bits/stdc++.h>
using namespace std;

bool isVowel(char s){
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U';
}

int main() {
	// your code goes here
	int n, k;
	cin >> n >> k;
	
	string s;
    cin >> s;

int count = 0;
  for(int i=0; i<k; i++){
    if(isVowel(s[i])){
        count++;
    }
  }
  
  cout << count << " ";
  
  for(int i=k; i<n; i++){
      
     if(isVowel(s[i])){
        count++;
    }
    
       if(isVowel(s[i-k])){
        count--;
    }
       cout << count << " ";
  }
  
}

// TC : O(n)
// SC : O(1)

// Logic -> isVowel create function, ch char vowel, return ch = aeiou , AEIOU 
// || 1. logic sliding 1st window -> loop i=0 to i<k if(isVowel(s[i]) c++ 
// || 2. Logic remaning window -> isVowel(s[i]) c++, // add next,
// if(isVowel(s[i-k])) c--; // remove pre