
#include <bits/stdc++.h>
using namespace std;

int main() {

    int q;
    cin >> q;

    unordered_set<int> st;

    for(int i=0; i<q; i++){ // O(q)

        int type;
        cin >> type;

        if(type==1){ // type 1 - insert

            int x;
            cin >> x;

            st.insert(x);

        }
        else if(type==2){ // type 2 - remove all occurrences {5, 5, 3} => {3}

            int x;
            cin >> x;

            if(st.count(x)){
                st.erase(x);
            }

        }
        else if(type==3){ // type 3 - print distinct elements (no duplicate)

            cout << st.size() << endl;

        }
        else{ // type 4 - 𝑥is present 

            int x;
            cin >> x;

            if(st.count(x)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

    }

}

// TC: O(q)
// SC: O(n)

// 10
// 1 5
// 1 5
// 1 3
// 3
// 4 5
// 2 5
// 4 5
// 3
// 2 7
// 3

// 2
// YES
// NO
// 1
// 1

// Logic - 1 → x insert  (duplicate ignore) 
// || 2 → x set erase (all occurrences remove) 2 or more then 2 remove. 
// || 3 → set.size() print (distinct count) // no duplicate 
// || 4 → st.count(x), x present y, else no
// take x new all times, because of pair (type x) or x only
