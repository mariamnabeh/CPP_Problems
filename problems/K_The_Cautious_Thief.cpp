#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <numeric>
#include <map>
#include <climits>

using namespace std;

using ll = long long;

ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

const ll MOD = 1e9 + 7;

void SOLVE()

//                                بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ

{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n + 1);

    for (ll i = 1; i <= n; i++) cin >> a[i];

    ll bad = LLONG_MAX, sum = 0;

    for (ll i = 1; i <= n; i++) {
        bad = min(bad, a[i] / x);
    }

    ll day = bad + 1;

    sum = bad * n * x;

    if (day % 2 != 0) {

        for (ll i = 1; i <= n; i++) {

            if (a[i] / x == bad) {
                cout << day << " " << i << " " << sum << endl;
                break;
            }

            sum += x;
        }

    }
    else {

        for (ll i = n; i >= 1; i--) {

            if (a[i] / x == bad) {
                cout << day << " " << i << " " << sum << endl;
                break;
            }

            sum += x;
        }

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    //cin >> t;

    while (t--) {
        SOLVE();
    }
}