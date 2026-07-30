#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
int n;
cin >> n;
 
string s[n];
 
for(int i=0; i<n; i++){
    cin >> s[i];
    // cout << s[i] << endl;
}
 
string target;
cin >> target;
 
// cout << target << " kk " << n;
 
bool flag = false;
 
int l = 0;
int r = n-1;
 
for(int i=0; i<n; i++){
    int mid = (l+2)/2;
    
    if(s[i]==target){
        flag = true;
        break;
        // left
    }else if(s[i]>target){
        l = mid - 1;
        // right
    }else{
        r = mid+1;
    }
}
 
if(flag){
    cout << "YES";
}else{
    cout << "NO";
}
}
 
 
// 5
// alice
// bob
// charlie
// david
// emma
// charlie

//=======
// Logic 
// string s[n], for(i=0; i<n) || as array take input string