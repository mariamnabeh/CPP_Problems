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
ll n;
cin>>n;
vll a(n);
for(int i=0;i<n;i++) cin>>a[i];
sort(all(a));
ll x=1;
ll mn=a[0];
ll mx=a[n-1];
x=mn*mx;
vll div;
for(int i=1;i*i<=x;i++){
    if(x%i==0){
div.push_back(i);
        if(i!=x/i){
            div.push_back(x/i);
        }
    }
}
sort(all(div));
div.erase(div.begin());
div.pop_back();

if(a==div){
    cout<<x<<el;
}
else{
    cout<<-1<<el;
}


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        Remy();
    }

    see_u_later;
}