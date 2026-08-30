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

string t, s;
vll a;
ll n;

bool can(ll mid){
    vector<bool> d(n+1, false);
    
   
    for(int i = 1; i <= mid; i++){
        d[a[i]] = true;
    }
    
    ll p = 0;
    for(int i = 0; i < n; i++){
        if(!d[i] && t[i-1] == s[p]){
            p++;
            if(p == s.size()) return true;
        }
    }
    return p == s.size();
}

void Remy() {
    cin >> t >> s;
    n = t.size();
    a.resize(n+1);
    
    for(int i = 1; i <=n; i++) {
        cin >> a[i];
       
    }

    ll l = 0, r = n - s.size(), ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(can(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    cout << ans << el;
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