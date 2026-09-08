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



//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
ll n, q;
cin>>n>>q;
    vll a(n);
    for(auto &x : a) cin >> x;

    list<ll> d(a.begin(), a.end());

vector<it>pos(n+1);

auto it=d.begin();
while(it!=d.end()){
pos[*it]=it;
it++;

}
while(q--) { ll x; cin >> x;
 d.splice(d.end(),d,pos[x]);


}



for(auto x : d) cout << x << ' ';



    
}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
//cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }

// shortcuts:
//"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}