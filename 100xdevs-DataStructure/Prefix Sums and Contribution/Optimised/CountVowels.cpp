#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin >> n;

	string s;
    cin >> s; 

    long long p[n];
    // long long p1[n];
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            sum++; 
        }
        p[i] = sum;
        // cout << p[i] << " ";
    }
    
	long long q;
	cin >> q;

	for(long long i=0; i<q; i++){ //O(q)
	    long long c=0;
	    long long l, r;
	    cin >> l >> r;
	    l--;
	    r--;
	    if(l==0){
	        cout << p[r] << endl;
	    }else{
	        cout << p[r] - p[l-1] << endl;
	    }
	         
	    }
	}


// TC: O(q+n)
// SC: O(n)
 
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
 
// Logic - sum++ = count for vowel, || vowel values -> 1 1 2 2 3 3 4 5 6 7 2 store p[i] = sum || same logic repeat formula p[r], p[r]-p[l-1]


//++++++++++++++++++++++++++

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long n;
	cin >> n;
 
	string s;
    cin >> s; 
 
    long long p[n];
    long long p1[n];
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            p1[i] = 1;
        }else{
             p1[i] = 0;
        }
        sum += p1[i];
        p[i] = sum;
        // cout << p[i] << " ";
    }
    
	long long q;
	cin >> q;
 
	for(long long i=0; i<q; i++){ //O(q)
	    long long c=0;
	    long long l, r;
	    cin >> l >> r;
	    l--;
	    r--;
	    if(l==0){
	        cout << p[r] << endl;
	    }else{
	        cout << p[r] - p[l-1] << endl;
	    }
	         
	    }
	}
 
 
// TC: O(q+n)
// SC: O(n)
 
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
 
// Logic - p1[n] = store 1 or 0 for vowel, || sum vowel values -> 1 1 2 2 3 3 4 5 6 7 2 || new sum  array store p[n] || same logic repeat formula p[r], p[r]-p[l-1]