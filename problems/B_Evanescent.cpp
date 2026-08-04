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
int n;
    cin >> n;

    string s;
    cin >> s;

    int blocks = 1;
    for (int i = 1; i < n; i++)
        if (s[i] != s[i - 1])
            blocks++;

    int ans = blocks;

    for (int i = 1; i < n - 1; i++) {
        int cur = blocks;

        if (s[i - 1] != s[i] && s[i] != s[i + 1]) {
            if (s[i - 1] == s[i + 1])
                cur -= 2;
            else
                cur -= 1;
        }

        ans = min(ans, cur);
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