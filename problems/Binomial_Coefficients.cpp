/*
    M.NABEH
*/

#include <bits/stdc++.h>
using namespace std;

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
ll const N = 1e6 + 5;
ll mull(ll a,ll b)
{
    return (a %MOD* b%MOD) % MOD;
}
void Remy()
{
    vll fac(N);
    fac[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fac[i]=mull(fac[i - 1] ,i);
    }

    ll n;
    cin>>n;
    ll x, y;
    while (n--)
    {
        cin >> x >> y;
       cout << mull(fac[x], fpower(mull(fac[y], fac[x - y]), MOD - 2)) << el;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Remy();
    }

    see_u_later;
}