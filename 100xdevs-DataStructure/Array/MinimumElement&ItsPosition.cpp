#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
long long n;
cin >> n;

long long arr[n];

for(int i=0; i<n; i++){
    cin >> arr[i];
}

  int mn = arr[0];
   int location = 1;
for(int i=0; i<n; i++){
 
    if(arr[i]<mn){
        mn = arr[i];
        location = i+1;
    }

}
    cout << mn << " " << location;
}

// 6
// 7 3 4 5 3 10

// 3 2

// Remember position 1 because 1st element arr[0] is 1st position
// min=arr[0], position = 1, position=i+1,