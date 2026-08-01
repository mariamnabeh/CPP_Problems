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
    int n, q;
    cin >> n >> q;
    string s, t;
    cin >> s >> t;

    vector<int> a(n + 1, 0), b(n + 1, 0), c(n + 1, 0), d(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1];
        b[i] = b[i - 1];
        c[i] = c[i - 1];
        d[i] = d[i - 1];

        if (s[i - 1] == '0' && t[i - 1] == '0') a[i]++;      
        else if (s[i - 1] == '1' && t[i - 1] == '1') b[i]++; 
        else if (s[i - 1] == '0' && t[i - 1] == '1') c[i]++; 
        else d[i]++;                                          
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        ll A = a[r] - a[l - 1];
        ll B = b[r] - b[l - 1];
        ll C = c[r] - c[l - 1];
        ll D = d[r] - d[l - 1];

        bool ok = abs(C - D) <= (A + B);

        cout << (ok ? "YES" : "NO") << el;
    }
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