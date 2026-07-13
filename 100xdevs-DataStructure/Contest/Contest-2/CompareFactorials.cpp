#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long a;
	long long b;
	cin >> a >> b;
 
 
if(a==b){
    cout << "Yes";
}else if(a==0 and b==1){
    cout << "Yes";
}else if(a==1 and b==0){
    cout << "Yes";
}else{
     cout << "No";
}
 
}
 
// Examples
// InputCopy
// 0 1
// OutputCopy
// Yes
 
// InputCopy
// 1 2
// OutputCopy
// No
 
// InputCopy
// 1 1
// OutputCopy
// Yes
 
// InputCopy
// 1 0
// OutputCopy
// Yes

// Logic

// condition - a==b, a==1 and b==0 , b==0 a==1 - yes || else no