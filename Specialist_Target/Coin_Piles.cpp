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
 ll a, b;
 cin>>a>>b;

    if((a+b)%3==0){
        ll x=(2*b-a)/3;
        ll y=(2*a-b)/3;
        if(x>=0&&y>=0){
        cout<<"YES"<<el;}
    
 

else cout<<"NO"<<el;}
 else
        cout<<"NO"<<el;

    
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