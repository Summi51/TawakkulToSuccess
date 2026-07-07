#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int n;
    int target;
    cin >> n >> target;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
  
  //𝐴[𝑖]−2∗𝐴[𝑗]+3∗𝐴[𝑘]−4∗𝐴[𝑙]=𝑥

    int c = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
            if((arr[i]-2*arr[j]+3*arr[k]-4*arr[l])==target){
                c++;
                  }
                }
          
            }
        
        }
    }
    cout << c << endl;
}

// 8 -10
// 1 2 3 4 5 6 5 6

// 5

// logic - i = 0 and j = i+1 loop k = j+1 l=k+1 
// || arr[i]-2*arr[j]+3*arr[k]-4*arr[l])==target 
// || c++