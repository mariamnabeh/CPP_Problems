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
 ll n,m;
cin>>n;
    vector<ll>a(n), b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
map<ll,ll>A,B;
ll cnt=1;
for(ll i=0;i<n-1;i++){
if(a[i]==a[i+1])
cnt++;
else{
    A[a[i]]=max(A[a[i]],cnt);
    cnt=1;
}
}
 A[a[n - 1]] = max(A[a[n - 1]], cnt);
cnt=1;
for( ll i=0;i<n-1;i++){
if(b[i]==b[i+1]) cnt++;
else{
    B[b[i]]=max(B[b[i]],cnt);
    cnt=1;
}

}
 B[b[n-1]]=max(B[b[n-1]],cnt);
ll ans=0;
for(auto x: A){
    ans = max(ans, x.second + B[x.first]);
}


for(auto y: B){
    ans = max(ans, y.second + A[y.first]);
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