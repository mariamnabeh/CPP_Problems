#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
using ll = long long;

void SOLVE()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll g = a[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, a[i]);
    }

    ll cnt = 0;

    for (ll i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            cnt++;
            if (i != g / i) cnt++;
        }
    }

    cout << cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    SOLVE();
}