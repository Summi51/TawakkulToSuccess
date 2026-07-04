#include <bits/stdc++.h>
using namespace std;
 
void fun(int n){
    long long ans = 1;
    for(int j=1; j<=n; j++){
     ans = ans * j;
}
cout << ans << endl;
}
 
int main() {
    
int n;
cin >> n;
 
fun(n);
 
}
 
// 5
 
// 120

// long long, ans = 1 inside function