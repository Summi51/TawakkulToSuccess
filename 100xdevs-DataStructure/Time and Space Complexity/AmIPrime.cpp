#include <bits/stdc++.h>
using namespace std;
 
int main() {
long long n;
cin >> n;

int c = 0;
for(long long i=1; i*i<=n; i++){
    int j;
    if(n%i==0){
        j = n/i;
        
    if(j==i){
        c++;
    }else{
        c=c+2;
    }
    }
  
}
 if(c==2){
     cout << "YES";
 }else{
     cout << "NO";
 }
}
 
 
 
// 12

//NO

// 17

// YES


// Logic
// root - i*i<=n || (n%i) -> j=n/i || i==j -> c++ else c=c+2; || c==2 , yes else No

//================

//  12 => 1 2 3 4 6 12

//  1*12 = 12
//  2*6 =  12
//  3*4 = 12

//  loop root n means , half chal rha

//  n = 12 , root n mean 3. somthing

//  loop 1, 2, 3 chalega
// if(n%i==0) - > 12%1 == 0 YES
// j = n/i => 12/i = 12
// i - 1 , j = 12 
// so 1 and 12 mila to c = c+2
// means 2 factor mil gye 

// same as
// i=2 , 6 , c = c+2
// i=3 , 4 , c = c+2

// at last c = 6; means 12 total factors is 6


// //==========
// if(i==j) - c++
// if no pair then only 1 factor count then c++


// c==2 , Yes or No
