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
 
	int leftmid = (n/2)-1;
	int rightmid = n/2;
	
    	while((leftmid < rightmid) and leftmid>=0){
	       cout << arr[leftmid] << " ";
	       cout << arr[rightmid] << " ";
	       leftmid--;
	       rightmid++;
	    }
}
 
 
// 6
// 10 20 30 40 50 60
 
// 30 40 20 50 10 60

// l=n/2-1 , r=n/2 || while(l<r and l>=0) || cout l , r || l--, r++