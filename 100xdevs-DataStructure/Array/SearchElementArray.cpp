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

for(int i=0; i<n; i++){
 
    if(arr[i]==target){
        flag = true;
    }

}
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}


// 5 7
// 1 7 5 3 2

// arr[i]==target