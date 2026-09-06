#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
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
    ll n, k;
    cin>>n>>k;
  string s;
  cin>>s;
  ll ans=0;

for(int i=0;i<n;i+=k){
  bool ok=1;
for(int j=i;j<k+i;j++)
    if(s[j]=='0'){
        ok =0;
        break;
    }


if (ok) {
            ans++;
        }
    
    }
    cout << ans << el;


    }


    //while (i < n) {
        //if (s.substr(i, k).find('0') == string::npos) {
            //ans++;
       // }
       // i += k;
   // }







int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
cin >> t;
    while (t--) {

        Remy();
    }

// shortcuts:
//"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}