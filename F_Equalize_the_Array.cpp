/*
 ███╗   ███╗ █████╗ ██████╗ ██╗ █████╗ ███╗   ███╗    ███╗   ██╗ █████╗ ██████╗ ███████╗██╗  ██╗
 ████╗ ████║██╔══██╗██╔══██╗██║██╔══██╗████╗ ████║    ████╗  ██║██╔══██╗██╔══██╗██╔════╝██║  ██║
 ██╔████╔██║███████║██████╔╝██║███████║██╔████╔██║    ██╔██╗ ██║███████║██████╔╝█████╗  ███████║
 ██║╚██╔╝██║██╔══██║██╔══██╗██║██╔══██║██║╚██╔╝██║    ██║╚██╗██║██╔══██║██╔══██╗██╔══╝  ██╔══██║
 ██║ ╚═╝ ██║██║  ██║██║  ██║██║██║  ██║██║ ╚═╝ ██║    ██║ ╚████║██║  ██║██████╔╝███████╗██║  ██║
 ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚═╝     ╚═╝    ╚═╝  ╚═══╝╚═╝  ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <numeric>

using namespace std;
using ll = long long;

#define el '\n' 
const ll MOD = 1e9 + 7;

void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(int i=0; i<n; i++){
cin>>a[i];
}  

map<ll, ll>freq;
ll ans = 1e18;
for(auto t:a){
freq[t]++;
}
vector<ll>f;
for(auto x: freq){
 f.push_back(x.second);
 
}
sort(f.begin(), f.end());
 vector<ll>pref(f.size()+1, 0);
 for(int i=1; i<=f.size(); i++){
pref[i]=pref[i-1]+f[i-1];
}
 for(int i=0; i<f.size();i++){
    ll c=f[i];
 ll cost=0;
ll l=lower_bound(f.begin(), f.end(),c)-f.begin();









ans=min(ans,cost);
}

cout<<ans<<el;
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
    return 0;
}