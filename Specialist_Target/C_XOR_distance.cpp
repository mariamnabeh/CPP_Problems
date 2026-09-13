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
    ll a,b,r;
    cin>>a>>b>>r;
    if(a<b) swap(a,b);

ll x=0;
ll c=-1;
for(int i=60;i>=0;i--){
    if(((a>>i)&1)!=((b>>i)&1)){
        c=i;
        break;
    }
}

for(int i=c-1;i>=0;i--){
if(((((a>>i)&1)==1)&&((b>>i)&1)==0)&&x+(1LL<<i)<=r){
    x|=(1LL<<i);
}




}



    cout<<abs((a^x)-(b^x))<<el;

}








    //ll mx=max(a,b);
   // ll mn=min(a,b);
    //ll ans=abs((mx^0)-(mn^r));
    //cout<<ans<<el;
//ll mx=0,mn=INF, ans=0;
//for(int i=0;i<=r;i++){
    //for(int j=0;j<=r;j++){
//ans=abs((a^i)-(b^j));
/////if(ans<mn){
    //mn=ans;
//}


   // }
//}


//cout<<mn<<el;










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