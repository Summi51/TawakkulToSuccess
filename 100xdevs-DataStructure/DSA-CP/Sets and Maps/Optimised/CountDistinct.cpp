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
	
	unordered_set<int>st;
	
	for(int i=0; i<n; i++){
	    st.insert(arr[i]);
	}
    cout << st.size();
}
// TC: O(n)
// SC : O(n)

// 8
// 1 2 2 3 2 4 4 4

// 4

// Logic - unordered_set<int>st || loop n, st.insert(a[i) || print(st.size())