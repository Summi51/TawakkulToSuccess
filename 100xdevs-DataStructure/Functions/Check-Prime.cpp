#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    int c=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            c++;
        }
    }
    
    if(c==2){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
    
}

int main() {
    
int n;
cin >> n;

fun(n);

}

// 17
// Prime

// fectors is 2 prime, c==2