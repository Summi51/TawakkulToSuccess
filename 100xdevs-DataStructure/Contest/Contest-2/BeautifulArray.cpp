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

bool flag = false;
int t = arr[0];
for(int i=0; i<n; i++){
    if(t!=arr[i]){
            flag = true;
            break;
        }
}
 if(flag){
        cout << "No";
    }else{
        cout << "Yes";
    }

}

// Examples
// 4
// 1 2 2 4
// OutputCopy
// NO

// InputCopy
// 5
// 7 7 7 7 7
// OutputCopy
// YES


// logic

// t=a[0], if(t!=a[i]) f=true; break;