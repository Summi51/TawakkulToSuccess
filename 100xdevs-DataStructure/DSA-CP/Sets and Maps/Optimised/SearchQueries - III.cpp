
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    int arr[n];
    
    unordered_map<int, int> mp; // O(n)
    
    for(int i=0; i<n; i++){ // O(n)
        cin >> arr[i];
  
        mp[arr[i]] = i+1;  // key = value
        // cout << mp[arr[i]] << " ";
    }
    
    for(int i=0; i<q; i++){ // O(q)
        int l;
        cin >> l;
        
        if(mp.count(l)){ // Kya key l map ke andar exist karti hai?
            cout << mp[l] << endl;  // Key : Value -> 7 :  3
        }else{
            cout << -1 << endl;
        }
    }
    
}

// TC: O(q+n)
// SC: O(n)
// count() average case → O(1)
// mp[l] average case → O(1)

// 5 6
// 10 -3 7 0 20
// -3
// 7
// 5
// 10
// 21
// 20


// 2
// 3
// -1
// 1
// -1
// 5

// Logic - map take input 
// || map[a[i]] = i+1 -> key : value , i+1 1 based indexing 
// || q loop , if map.count(l) -> l key prasent? print map[l] key 
// || else print -1