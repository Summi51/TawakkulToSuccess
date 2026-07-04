#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    for(int j=1; j<=n; j++){
       if(n%j==0){
           cout << j << " ";
       }
    }
}

int main() {
    
int n;
cin >> n;

fun(n);

}

// 12

// 1 2 3 4 6 12

// void function because not return any thing