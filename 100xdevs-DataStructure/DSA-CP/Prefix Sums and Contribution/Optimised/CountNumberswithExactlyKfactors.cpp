#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n, q, k;
	cin >> n >> q >> k;
	
	int arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	
	int p[n];
	int p1[n];
	int sum = 0;
	for(int i=0; i<n; i++){
	   
	   int factor = 0;
	   for(int d=1; d*d<=arr[i]; d++){
	       if(arr[i]%d==0){
	              if(arr[i]/d==d){
	                  factor++;
	              }else{
	                  factor+=2;
	              }
	       }
	   }
	   
	   if(factor==k){
	       p[i] = 1;
	   }else{
	       p[i] = 0;
	   }
	   
	   sum +=p[i];
	   p1[i] = sum;
	}
	
	for(int i=0; i<q; i++){
	    int l, r;
	    cin >> l >> r;
	    l--;
	    r--;
	    if(l==0){
	        cout << p1[r] << endl;
	    }else{
	        cout << p1[r] - p1[l-1] << endl;
	    }
	}

}

// Logic - Har number ke factors count karo → jinke exactly K factors hain unhe 1 mark karo → uska prefix sum banao → har query ka answer prefix[r] - prefix[l-1] se nikal do.

TC:
SC: 