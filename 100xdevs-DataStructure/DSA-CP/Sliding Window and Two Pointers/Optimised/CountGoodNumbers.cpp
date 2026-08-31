#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n, m, k;
    cin >> n >> m >> k;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    set<int>good;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        good.insert(x);
        // cout << x;
    }
    
    
    // 1st 
    int c = 0;
    for(int i=0; i<k; i++){
        if(good.count(arr[i])){
            c++;
        }
    }
    
    cout << c << " ";
    
    for(int i=k; i<n; i++)
    {
        if(good.count(arr[i])){
            c++;
        }
        
        if(good.count(arr[i-k])){
            c--;
        }
        
         cout << c << " ";
        
    }
    
    
}

// TC: O(N + M) 
// SC: O(M)

// Logic - m list good number insert set 
// || 1st window loop i = 0 to k -> set.count(arr[i]) // age value h set me c++ 
// // || 2nd window i = k to n -> if set.count(arr[i]) value h to c++ and add next vlaue, 
// // ||  if set.count(arr[i-k]) , remove privious value c--; 