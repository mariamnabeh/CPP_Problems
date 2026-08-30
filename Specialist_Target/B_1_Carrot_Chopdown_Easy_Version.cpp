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

// ---------- Functions ----------

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
    int n, m;
    cin >> n >> m;

    vll a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> freq(m + 1);

    for(int i = 0; i < n; i++)
        freq[a[i]]++;

    vector<int> suf(m + 2);

    for(int i = m; i >= 1; i--)
        suf[i] = suf[i + 1] + freq[i];

    int ans = 0;

    for(int x = 1; x <= m; x++)
    {
        int cur = suf[x];

        if(2 * x <= m)
            cur += freq[2 * x];

        ans = max(ans, cur);
    }

    cout << ans << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
    {
        Remy();
    }

    see_u_later;
}