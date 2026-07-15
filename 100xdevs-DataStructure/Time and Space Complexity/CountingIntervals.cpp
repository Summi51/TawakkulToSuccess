#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long T;
    long long L;
    long long R;
    cin >> T >> L >> R;
    
    // cout << T << " " << L << " " << R <<endl;
    
    if(L>R){
        cout << 0 << endl;  // Hidden TC
    }
    else if(T==1){
        if(R==L){ // Hidden TC
            cout << 0 << endl;
        }else{
             cout << R-L-1 << endl;
        }
           
    } else if(T==2){
         cout << R-L << endl;
    } else if(T==3){
          cout << R-L << endl;
   }else{
     cout << R-L+1 << endl;
   }
    
}
 
int main() {
	// your code goes here
	long long t;
	cin >> t;
	
	for(int i=0; i<t; i++){
	    solve();
	}
 
}
 
// 4
// 1 2 7
// 2 2 7
// 3 2 7
// 4 2 7
 
 
// 4
// 5
// 5
// 6

// Logic
// TC Hidden Handle - R-L+1 , R-L, R-L, R-L-1, L>R, R==L