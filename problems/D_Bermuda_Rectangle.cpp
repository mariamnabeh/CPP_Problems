/*
 ========================= 
        M.NABEH
    "The thrill of the code..."
    WA makes it more fun 
 ========================= 
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <bitset>
#include <iterator>
#include <iomanip>
using namespace std;

// ---------- Macros ----------
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define All(x) (x).begin() + 1, (x).end()
#define rAll(x) (x).rbegin(), (x).rend() - 1
#define Sz(x) (int)(x).size() - 1
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
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<long long, long long>>;
using vpil = vector<pair<int, long long>>;
using vpcl = vector<pair<char, long long>>;
using vplc = vector<pair<long long, char>>;

// ---------- Functions ----------
const ll MOD = 1e9 + 7;
long long power(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void Remy()
{
    long long s, q; 
    cin >> s >> q;

    vector<long long> d;
    for (long long i = 1; i * i <= s; i++)
    {
        if (s % i == 0)
        {
            d.push_back(i);
            if (i * i != s)
                d.push_back(s / i);
        }
    }

    sort(d.begin(), d.end());

    long long tot = s / d[0];
    for (size_t i = 1; i < d.size(); ++i) {
        tot += (d[i] - d[i - 1]) * (s / d[i]);
    }

    while (q--)
    {
        long long x, y; 
        cin >> x >> y;

        long long lstx = x, lsty = y;
        auto it = upper_bound(d.begin(), d.end(), x);
        long long minus = 0;
        
        while (it != d.end()) {
            minus += ((*it) - lstx) * (s / (*it));
            lstx = (*it);
            it++;
        }

        long long ans = tot - minus;
        minus = 0;
        auto ity = upper_bound(d.begin(), d.end(), y);
        
        while (ity != d.end()) {
            minus += ((*ity) - lsty) * min(x, (s / (*ity)));
            lsty = (*ity);
            ity++;
        }

        cout << ans - minus << el;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        Remy();
    }

    see_u_later;
}