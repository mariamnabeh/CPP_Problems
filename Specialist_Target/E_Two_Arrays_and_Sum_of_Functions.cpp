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
const ll MOD = 998244353;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
#define el '\n'
 
 
long long mul(long long x, long long y, const long long &mod) 
{ return ((x % mod) * (y % mod)) % mod; }
long long add(long long x, long long y, const long long &mod)
{ return (((x % mod) + (y % mod)) % mod + mod) % mod; }


ll fpow(ll a, ll b, ll mod) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}








//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
    ll n;
    cin>>n;
vll a(n), b(n);
for(int i=1;i<=n;i++) {cin>>a[i-1];
a[i-1]*=(1LL*i*(n-i+1));


}
for(int i=1;i<=n;i++) cin>>b[i-1];
sort(rall(b));
sort(all(a));
ll ans=0;
ll pre=0;
for(int i=0;i<n;i++){
    pre=mul(a[i],b[i], MOD);
    ans=add(ans,pre,MOD);
}

cout<<ans;



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