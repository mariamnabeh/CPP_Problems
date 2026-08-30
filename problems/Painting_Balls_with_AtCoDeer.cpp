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
ll n,k;
cin>>n>>k;
ll ans=k;
cout << k * fpower(k - 1,  - 1);





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