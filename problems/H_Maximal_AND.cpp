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
bool checkbit(int n,int i){
return (n>>i)&1;



}
void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
    
ll n ,k; cin>>n>>k; ll ans=0;
vector<ll>a(n);for(ll i=0; i<n; i++){
cin>>a[i];}
for(int bit=30; bit>=0;bit--){

ll cost=0;
for(auto &x : a){

if(checkbit(x, bit)==0) cost++;


}

if(cost<=k){
k-=cost;
 ans += (1LL << bit);

}


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