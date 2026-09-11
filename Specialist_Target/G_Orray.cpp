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



//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {

    // Don't judge me by my previous submission, it was a symptom of poor reading.

    ll n;
    cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
vll pre;
    ll cur=0;
for(int i=0;i<n;i++){
ll mx=cur;
ll pos=-1;
for(int k=0;k<n;k++){

    if((cur|a[k])>mx){
        mx=cur|a[k];
        pos=k;
    }}
  if(pos==-1) break;

    pre.push_back(a[pos]);
    cur|=a[pos];
    a[pos]=-1;

}
    
for(int i=0;i<n;i++){
    if(a[i]!=-1)
        pre.push_back(a[i]);
}

for(auto c:pre) cout<<c<<" ";
cout<<el;






}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }

// shortcuts:
//"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}