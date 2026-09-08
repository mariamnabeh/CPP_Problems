#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end();
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;
const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
#define el '\n'



//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
    ll n;
    cin >> n;

    vll a(n), b(n), w(n, 1);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

   ll id=-1;
   for(int i=0;i<n;i++){
    if(a[i]>b[i]){
        id=i;
    }
   }
   if(id==-1) cour<<"NO"<<el;
   else{
    w[id]=1e18;
    cout<<"Yes"<<el;
   }
    for(auto x : w)
            cout << x << ' ';
        cout << el;
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