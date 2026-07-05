#include <bits/stdc++.h>
using namespace std;

void fun(long long n){ 
    int c = 0;
    long long a = 0;
    if(n==0){
        c++;
        cout << c << endl;
    }else{
      while(n>0) {
      a = n%10;
      if(a==0){
          c++;
      }
      n = n/10;
  }
     cout << c << endl;
    }

}

int main() {
    
long long n;
cin >> n;
fun(n);

}

// 0 
//1

//logic
// if - n=0 c++, else - n>0 loop =>> a = n%10; if(a==0) c++, n=n/10