#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, q, k;
    cin >> n >> q >> k;

    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long p[n];
    long long prefix = 0;

    for (int i = 0; i < n; i++) {

        long long x = arr[i];
        long long sum = 0;

        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }

        if (sum == k)
            prefix++;

        p[i] = prefix;
    }

    while (q--) {

        long long l, r;
        cin >> l >> r;

        l--;
        r--;

        if (l == 0)
            cout << p[r] << endl;
        else
            cout << p[r] - p[l - 1] << endl;
    }
}

// TC = O(q+n)
// SC = O(n)
 
// 5 3 10
// 19 55 10 37 91
// 1 3
// 2 5
// 1 5
 
// 2
// 3
// 4
 
// Lofic - digit sum, sum==k prifix++, p[i] = prefix || same logic p[r] and p[l-1]