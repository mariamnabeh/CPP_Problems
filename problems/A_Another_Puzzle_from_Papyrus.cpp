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
ll n,c;
cin>>n>>c;
vector<ll>a(n) ,b(n);
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
bool ok=true;
ll sum=0;
for(int i=0;i<n;i++){
    if(a[i]>=b[i]) {
        sum+=a[i]-b[i];
    }
    else {

ok=false;
break;
    }
}
 ll ans=-1;
 if(ok) ans=sum;

sort(a.begin(), a.end());
sort(b.begin(), b.end());
bool ok2=true;
ll sum2=c;
for(int i=0;i<n;i++){
if(a[i]>=b[i]){
    sum2+=a[i]-b[i];
}

else{

ok2=false;
break;

}

}
if(ok2){
if(ans==-1||sum2<sum){ans=sum2;}
}
cout<<ans<<el;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
     cin >> t;
    while (t--)
    {
        SOLVE();
    }
    return 0;
}