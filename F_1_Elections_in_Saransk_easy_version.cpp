/*
    M.NABEH
*/

#include <bits/stdc++.h>
using namespace std;

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
#define see_u_later return 0 // see u later :)

// ---------- Constants ----------
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
const long long maxx = 5 * 1e5;

// ---------- Type Aliases ----------
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;

// ---------- Functions ----------
const ll MOD = 1e9 + 7;

ll fpower(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int spf[maxx + 1];

void sieve()
{
    for (int i = 0; i <= maxx; i++)
        spf[i] = i;

    for (int i = 2; i * i <= maxx; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= maxx; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void Remy()
{
    int n, m;
    cin >> n >> m;

    map<ll , ll> cnt;

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        mx = max(mx, a);

        while (a > 1)
        {
            int p = spf[a];
            cnt[p]++;

            a /= p;
        }
    }

    ll ans = 1;

  for (auto it : cnt)
{
    ans = ans * (it.second + 1) % MOD;
}
    

    cout << ans<< el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;

    while (t--)
        Remy();

    see_u_later;
}
