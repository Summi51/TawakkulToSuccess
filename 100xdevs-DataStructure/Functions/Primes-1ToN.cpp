#include <bits/stdc++.h>
using namespace std;
 
 
 int checkPrime(int n){
       int c = 0;
 for(int i=1; i<=n; i++){
     if(n%i==0){ 
         c++;
  }
}
return c==2;
 }
 
int main() {
int n;
cin >> n;
 
for(int i=1; i<=n; i++){
    if(checkPrime(i)){
    cout << i << " ";
}
 }
 
}

// return c==2, loop inside fun(i) call