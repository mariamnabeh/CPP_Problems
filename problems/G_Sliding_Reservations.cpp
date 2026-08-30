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

void Remy() {
ll n;
cin>>n;
vll a(3),b(3);
for(int i=0;i<3;i++){
cin>>a[i];
}
for(int i=0;i<3;i++){
cin>>b[i];
}
sort(all(a));
sort(all(b));
// b[0]+k>=1
//b[2]+k<=n

ll L = 1 - b[0];
    ll R = n - b[2];

    ll k = R - L + 1;

    set<ll> d;

for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            ll x = a[i] - b[j];
// if: a[i]=k+b[j]
            if (x >= L && x <= R)
                d.insert(x);
        }
    }

    k -= d.size();

    cout << k << el;
}





int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        Remy();
    }

    see_u_later;
}