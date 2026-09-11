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

    string s;
    cin>>s;

    map<char,ll>freq;

    for(auto c:s) {
        freq[c]++;
    }

    bool ok=1;
    ll odd=0; char oddd;
    for(auto p:freq) {
      if(p.second%2!=0) {
        odd++;
        oddd=p.first;
      }
    }

    if(odd>1) {
        cout<<"NO SOLUTION"<<el;
        return;
    }

    deque<char>b;

    for(auto p:freq) {
        for(int i=0;i<p.second/2;i++) {
            b.push_front(p.first);
       
        }
    }

if(odd)
    b.push_back(oddd);


for(auto p:freq) {
        for(int i=0;i<p.second/2;i++) {

     b.push_back(p.first);



        }

    }



    string ans="";

    for(auto d:b) {
        ans+=d;
    }

    cout<<ans<<el;
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