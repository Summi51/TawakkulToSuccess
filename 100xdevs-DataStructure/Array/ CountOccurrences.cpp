#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
long long n;
long long target;
cin >> n >> target;

long long arr[n];

for(int i=0; i<n; i++){
    cin >> arr[i];
}

  bool flag = false;
  int c = 0;
for(int i=0; i<n; i++){
     
    if(arr[i]==target){
        flag = true;
        c++;
    }
}
   cout << c << endl;
}


// 6 3
// 1 5 2 3 7 3

// 2

// logic
// arr[i]==target, count++