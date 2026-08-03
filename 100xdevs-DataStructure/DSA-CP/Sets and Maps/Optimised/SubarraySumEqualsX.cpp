#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n, x;
	cin >> n >> x;

	long long arr[n];
	
	for(long long i=0; i<n; i++){
	    cin >> arr[i];
	}

   set<long long>st;
   long long pre = 0;
   
	for(long long i=0; i<n; i++){
	    pre +=arr[i];  // pr
	    if(pre==x){ 
	        cout << "YES";
	        return 0;	    
	    }
	    
	    if(st.count(pre-x)){ // p[r]-x = p[l-1] ye p[l-1] nikal rhe h ye,
	        cout << "YES";
	        return 0; 
	    }
	     st.insert(pre);  
	} 
		cout << "NO";
	}


// TC: O(n log n)
// SC : O(n)

// 5 3
// 1 2 3 4 5

// Logic : set, pre = 0, loop n, pre=pre+a[i] || if(pre==x) cout < y, return 0 || if(st.cout(pre-x)) cout << x; return 0; || st.insert(a[i]); || return 0 (mean out of the func int main-program finished)
