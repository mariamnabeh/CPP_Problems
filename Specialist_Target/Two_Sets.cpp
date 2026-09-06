using namespace std;
#include <bits/stdc++.h>

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;
*/

// ---------- Macros ----------
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define el '\n'
#define F first
#define S second
#define see_u_later return 0

// ---------- Constants ----------
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;

// ---------- Type Aliases ----------
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

const ll MOD = 1e9 + 7;

ll fpower(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void Remy()
{
    ll n;
    cin >> n;

    vll a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }

    ll total = n * (n + 1) / 2;

    if (total % 2 != 0)
    {
        cout << "NO" << el;
        return;
    }

    cout << "YES" << el;

    ll target = total / 2;

    vll b;
    vll c;

    for (ll i = n; i >= 1; i--)
    {
        if (target >= i)
        {
            b.pb(a[i]);
            target -= i;
        }
        else
        {
            c.pb(a[i]);
        }
    }

    cout << b.size() << el;

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    cout << el;

    cout << c.size() << el;

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    cout << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--)
    {
        Remy();
    }

    see_u_later;
}