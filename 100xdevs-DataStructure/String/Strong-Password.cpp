#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 string s;
 cin >> s;
 int c = 0;
 int c1 = 0;
 int c2 = 0; 
 int c3 = 0;
 int c4 = 0;
 
 if(s.size()==10){
    c++;
 }

 for(int i=0; i<s.size(); i++){
  
    if(s[i]>='a' and s[i]<='z'){
         c1++;
     }else if(s[i]>='A' and s[i]<='Z'){
         c2++;
     }else if(s[i]>='0' and s[i]<='9'){
         c3++;
     }else{
         c4++;
     }
 }
 
 if(c>0 and c1>0 and c2>0 and c3>0 and c4>0){
     cout << "Strong" << endl;
 }else{
       cout << "Weak" << endl;
 }
}
 
// Abcdef1@23
// Strong
 
 
// It consists of exactly 10
//  characters.
// It contains at least one lowercase English letter.
// It contains at least one uppercase English letter.
// It contains at least one digit.
// It contains at least one special character.


// Logic

// if s.size()==10, loop - s[i]>=a and s[i]<=z , 'A' and 'Z' , '0' and '9' 
// ||  c, c1, c2, c3, c4,++ 