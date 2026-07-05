#include <bits/stdc++.h>
using namespace std;


int fun(int x){ 
   int ans = 1;
   
   for(int i=1; i<=x; i++){
       ans = ans*i;
   }

return ans;
 
}

int main() {
    
int n;
int r;
cin >> n >> r;

int facN = fun(n); 
int facR = fun(r); 
int facNR= fun(n-r); 
int factorial = facN / (facR * (facNR));
   cout << factorial << endl;

}

//logic


// create one funcion factorial - n, r and n-r;
// int nfn=fn(n), int rfn=fn(r), int nrfn=fn(n-r)  - int fn(int x) 

