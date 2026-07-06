#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
int sum = 0;
long long n;
cin >> n;
long long arr[n];
int location = 1;
 
long long max;
 
for(int i=0; i<n; i++){
    cin >> arr[i];
    max = arr[0];
}
 
for(int i=0; i<n; i++){
 if(max < arr[i]){
    max = arr[i];
       location = i+1;
    }
         
}
cout << max << " " << location << endl;
}

