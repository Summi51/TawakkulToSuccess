#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}

   int ans = 0 ;
	for(int i=0; i<n; i++){
	   int c = 0;
	    for(int j=i+1; j<n; j++){
	        if(arr[i]==arr[j]){
	            c++;
	            arr[j] = -1;  // INT_MAX used if −10^9 ≤𝐴𝑖≤ 10^9
	        }
	    }
	    if(arr[i]==-1){
	       continue;
	    }
	    ans++;
	}
  cout << ans << endl;
}

// 8
// 1 2 2 3 2 4 4 4

// 4


// Logic - -1 or INT_MAX 
// || i loop n , j=i+1 , if (a[i]==a[j]) c++; a[j] = -1 
// || if(arr[i]==-1) continue || ans++  || print ans