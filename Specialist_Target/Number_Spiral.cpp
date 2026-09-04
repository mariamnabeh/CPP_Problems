/*
    M.NABEH
*/

#include <bits/stdc++.h>
using namespace std;

// ---------- Macros ----------
#define el '\n'
#define see_u_later return 0

// ---------- Type Aliases ----------
using ll = long long;

void Remy() {
    ll t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x; 

        ll ans = 0;
        if (y >= x) {
       
            if (y % 2 == 0) {
                ans = (y * y) - (x - 1);
            } else {
                ans = (y - 1) * (y - 1) + x;
            }
        } else {
         
            if (x % 2 == 0) {
                ans = (x - 1) * (x - 1) + y;
            } else {
                ans = (x * x) - (y - 1);
            }
        }

        cout << ans << el;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Remy();

    see_u_later;
}