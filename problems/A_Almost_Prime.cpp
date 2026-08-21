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

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define All(x) (x).begin()+1, (x).end()
#define rAll(x) (x).rbegin(), (x).rend()-1
#define Sz(x) (int)(x).size()-1
#define el '\n'
#define F first
#define S second
#define see_u_later return 0 

const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;

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
bool isPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void Remy() {
    ll n;
    cin >> n;
    
    vll div(n + 1);
    for (ll j = 1; j * j <= n; j++) {
        if (n % j == 0) {
            if (isPrime(j)) {
                div.push_back(j);
            }
            if (j != n / j) {
                if (isPrime(n / j)) {
                    div.push_back(n / j);
                }
            }
        }
    }
    
    ll count = 0;
    for (ll x : div) {
        if (x == 2) {
            count++;
        }
    }
    cout << count << el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        Remy();
    }

    see_u_later;
}