#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;
 cin >> n;
 int odd = 0;
 int ev = 0;
int store = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            ev++;
        }else{
             odd++;
        }
    }
    
 for(int i=1; i<=odd; i++){
     cout << (2*i)-1 << " ";
 }
 for(int i=ev; i>=1; i--){
     cout << 2*i << " ";
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
// 5

// 1 3 5 4 2 


// 3
// 6
// 7
// 8

// 1 3 5 6 4 2 
// 1 3 5 7 6 4 2 
// 1 3 5 7 8 6 4 2 

// logic 

// find even++, odd++ or loop 2*i and 2*i-1 