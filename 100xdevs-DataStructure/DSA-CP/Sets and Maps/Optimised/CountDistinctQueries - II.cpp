#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unordered_map<int, int> mp;
	int q;
	cin >> q;
	
	for(int i=0; i<q; i++){
	    int type;
	    cin >> type;
	    
	    if(type==1){
	        int x;
	        cin >> x;
	        mp[x]++;
	    }else if(type==2){
	        int x;
	        cin >> x;
	       if(mp.count(x)){
	           mp[x]--;   // 1st time 2 5 = > {5,3} : 1 1
	           if(mp[x] == 0){ // 2nd time 2 5 => {3} : 1, 5 key = 0 value
                 mp.erase(x);
                  }
	       }
	    }else if(type==3){
	           cout << mp.size() << endl;
	    }else{
	           int x;
	           cin >> x;
	        if(mp.count(x)){
	            cout << "YES" << endl;
	        }else{
	            cout << "NO" << endl;
	        }
	    }
	}

}

// TC: O(q)
// SC: O(n)

// 11
// 1 5
// 1 5
// 1 3
// 3
// 2 5
// 4 5
// 2 5
// 4 5
// 3
// 2 7
// 3


// 2
// YES
// NO
// 1
// 1

// Logic - used map - for one occurrence 
// || 1, insert - map[x]++ 
// || 2. one occurrence map[x]-- if(map[0]==0) map.erase(x) 
// || 3. dictinct element map.size() 
// || 4. x present, y/n

// unordered_set:
// insert   O(1)
// erase    O(1)
// find     O(1)
// loop     O(n)