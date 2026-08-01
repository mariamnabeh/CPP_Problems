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
#define All(x) (x).begin()+1, (x).end()
#define rAll(x) (x).rbegin(), (x).rend()-1
#define Sz(x) (int)(x).size()-1
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
using pll = pair<long long,long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vpii = vector<pair<int,int> >;
using vpll = vector<pair<long long,long long> >;
using vpil = vector<pair<int,long long> >;
using vpcl = vector<pair<char,long long> >;
using vplc = vector<pair<long long,char> >;

// ---------- Functions ----------
const ll MOD = 1e9 + 7;
ll power(ll a, ll b)
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
ll n,a;
cin>>n>>a;
ll ans = 1e9;
    ll x = a;


    for (ll p = 2; p * p <= x; p++) {
        if (x % p == 0) {
            ll cnt = 0;
            while (x % p == 0) {
                cnt++;
                x /= p;
            }

          
            ll hmmm = 0;
            for (ll cur = p; cur <= n; cur *= p) {
                hmmm += n / cur;
                if (cur > n / p) break;
            }

            ans = min(ans, hmmm / cnt);
        }
    }

    if (x > 1) {
        ll ah = 0;
        for (ll cur = x; cur <= n; cur *= x) {
            ah += n / cur;
            if (cur > n / x) break;
        }

        ans = min(ans, ah);
    }

    cout << ans << el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;
    while (t--) {
        Remy();
    }

    see_u_later;
}
// k team c-> a members
// total balones =!n and !n divisble by a^k
// find the max team k 