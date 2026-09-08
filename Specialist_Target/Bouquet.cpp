#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using it = list<ll>::iterator;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;
const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
#define el '\n'
 
 
long long mul(long long x, long long y, const long long &mod) 
{ return ((x % mod) * (y % mod)) % mod; }

long long add(long long x, long long y, const long long &mod)
{ return (((x % mod) + (y % mod)) % mod + mod) % mod; }

long long sub(long long a, long long b, const long long &mod = MOD)
{ return (((a % mod) - (b % mod) + mod) % mod); }

ll fpow(ll a, ll b, ll mod) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll fact(ll r) {
    ll res = 1;
    for (ll i = 1; i <= r; i++) res = mul(res, i, MOD);
    return res;
}

ll factInv(ll r) {
    return fpow(fact(r), MOD - 2, MOD);
}
ll ncr(ll n, ll r) {
    if (r > n || r < 0) return 0;
    
    ll ret = 1;
    for (ll i = n - r + 1; i <= n; i++) {
        ret = mul(ret, i, MOD);
    }
    
    return mul(ret, factInv(r), MOD);
}







//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
    
ll n, a,b;
cin>>n>>a>>b;
ll total = sub(fpow(2, n, MOD), 1);
ll ans = sub(sub(total, ncr(n, a)), ncr(n, b));
cout << ans << el;






}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
//cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }

// shortcuts:
//"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}