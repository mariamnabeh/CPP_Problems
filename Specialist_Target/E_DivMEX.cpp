/*
    M.NABEH
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define el '\n'
#define F first
#define S second
#define see_u_later return 0

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

const ll INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
const ll MOD = 1e9 + 7;

void Remy() {
    ll n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vi ans;

    for (int x = 2; x <= 43; x++) {
        ll pref = 1;
        bool ok = true;

        for (int i = 1; i < x; i++) {
            pref = lcm(pref, (ll)i);
            if (pref > n) {
                ok = false;
                break;
            }
        }
        if (!ok) break;

        bool found = false;

        for (int l = 0; l < n; l++) {
            ll cur = 1;
            int r = l;
            while (r < n && lcm(cur, a[r]) % x != 0) {
                cur = lcm(cur, a[r]);
                r++;
            }

            bool valid = true;
            for (int v = 1; v < x; v++) {
                if (cur % v != 0) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                found = true;
                break;
            }
            
            
            if (r == l) continue;
        }

        if (found) ans.pb(x);
    }

    cout << ans.size() << el;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
    }
    cout << el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        Remy();
    }

    see_u_later;
}