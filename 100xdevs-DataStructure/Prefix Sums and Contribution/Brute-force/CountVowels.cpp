#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin >> n;

	string s;
    cin >> s; 

	long long q;
	cin >> q;
// 	cout << q << endl;

	for(long long i=0; i<q; i++){ //O(q)
	    long long c=0;
	    long long l, r;
	    cin >> l >> r;
	    l--;
	    r--;
	    
	    for(long long i=l; i<=r; i++){ // O(n)
	        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
	            c++;
	        }
	         
	    }
	   cout << c << endl;
	}
	
}

// TC: O(q*n)
// SC: O(1)

// 10
// abacodeeee
// 3
// 1 3
// 4 7
// 5 10

// 2
// 2
// 5

//======

// 8
// bcdfghjk
// 2
// 1 4
// 5 8

// 0
// 0

// Logic - loop q -> loop l to r -> if s[i] = a, e, i, o u ->c++ || string s take as a input