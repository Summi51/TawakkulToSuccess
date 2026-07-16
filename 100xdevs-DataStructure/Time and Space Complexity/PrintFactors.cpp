#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin >> n;
    long long j;
    
     vector<long long>v;  
     
	for(long long i=1; i*i<=n; i++){
	    
	    if(n%i==0){
	          v.push_back(i);  // push at end
	          j=n/i;
	          
	   if(j!=i){ // duplicate factor ko rokne 6==6
	       	v.push_back(j);   // push at end
	   }
	   
	   }
}
 sort(v.begin(), v.end()); // sort 
 
 for(int i=0; i<v.size(); i++){ // vector index start 0
    cout << v[i] << " ";
  }
}

// 12

// 1 2 3 4 6 12

// Logic
// vector<long long>v; 
// || i*i<=n || 
// (n%i) v.push_back(i) 
// || j!==i , v.push_back(j) prevent duplicate 6==6