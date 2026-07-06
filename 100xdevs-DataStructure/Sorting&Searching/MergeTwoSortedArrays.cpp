#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
	// your code goes here
int n;
int m;
cin >> n >> m;
 
long long arr[n];
long long arr1[m];
int c;
c = (n+m);
long long arr2[c];
 
for(int i=0; i<n; i++){
    cin >> arr[i];
}
 
for(int j=0; j<m; j++){
    cin >> arr1[j];
}
 
int i = 0;
int j = 0;
int k = 0;
 
while(n>i and m>j){
    if(arr[i]<arr1[j]){
        arr2[k] = arr[i];
        i++;
    }else{
        arr2[k] = arr1[j];
        j++;
    }
    k++;
}
 
while(i<n){
   arr2[k] = arr[i];
   i++;
   k++;
}
 
 
while(j<m){
   arr2[k] = arr1[j];
   j++;
   k++;
}
 
for(int k=0; k<c; k++){
    cout << arr2[k]<< " ";
}
 
}
 
 
// 3 4
// 1 3 5
// 2 4 6 8
 
// 1 2 3 4 5 6 8

// Logic

// 1. n+m = c || 
// 2. while(i<n and j<m) 
// | if(a[i]<a[j] ) - a[k] = a[i] - i++, else a[k] = a[j] - j++ 
// | k++ always || 
// 3. remaning copy - while(i<n) i++, k++, | whilw(j<m) j++, k++; 