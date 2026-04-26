#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <numeric>

using namespace std;
using ll = long long;

ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
const ll MOD = 1e9 + 7;

void SOLVE() 
 //                        بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
{
    ll n;
    cin>>n;
    vector <ll> a(n);
    for (ll i=0; i<n; i++){
    cin>>a[i];}
int x=1;
for (int i=0; i<n-1; i++){
if (a[i+1]%a[i]!=0){
    
  ll g= gcd(a[i], a[i+1]);

    ll x_i = a[i]/g;
 x= lcm(x, x_i);
}


}

  cout << x << "\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
     cin >> t;
    while (t--)
    {
        SOLVE();
    }
}