#include <bits/stdc++.h>
using namespace std;
 
void fun(int x , int y){ 
int hcf = 0;
 
for(int i= 1; i<=min(x, y); i++){
    if(x%i==0 and y%i==0){
       hcf = i;
    }
}
cout << hcf;
 
}
 
int main() {
int n;
int r;
cin >> n >> r;
 fun(n, r);
 
}
 
 
// 12 36

// logic - loop min(x, y), conditon (x%i==0, y%i==0), hcf = i;

// 2. =================================


#include <bits/stdc++.h>
using namespace std;
 
void fun(int x , int y){ 
int hcf = 0;
 
for(int i= 1; i<=x; i++){
    if(x%i==0 and y%i==0){
       hcf = i;
    }
}
cout << hcf;
 
}
 
int main() {
int n;
int r;
cin >> n >> r;
 fun(n, r);
 
}
 

// 12 36 = > n, r => x, y
 
// logic - loop x, conditon (x%i==0, y%i==0), hcf = i; 

// loop x means small number tk 