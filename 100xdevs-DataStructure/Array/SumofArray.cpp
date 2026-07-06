#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
long long sum = 0;
long long n;
cin >> n;
long long arr[n];
 
 
for(int i=0; i<n; i++){
    cin >> arr[i];
}
 
for(int i=n-1; i>=0; i--){
    sum = sum + arr[i];
}
cout << sum << endl;
}


// Input
// 5
// 1 2 3 4 5

// Output
// 15


// Logic-----


// loop take input array (cin >> arr[i]), sum