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
#include <numeric>
#include<cmath>

using namespace std;
using ll = long long;

#define el '\n' 
const ll MOD = 1e9 + 7;

bool prime(ll n){
    if(n < 2) return false;

    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;}


void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
      // day 6 of challenge : every day atleast one math problem :)
// T-prime == threee prime, so what's numbers has three Prime lik 1, x, y
// prefect square andd the square root of it is prime!
ll n;
cin >>n;
while(n--){
    ll x;
    cin>>x;
    ll sq=sqrt(x);
if(sq*sq==x&& prime(sq)){
cout<<"YES"<<el;
}
else{

    cout<<"NO"<<el;
}

}



      
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1 ;
    //cin >> t;
    while (t--)
    {
        SOLVE();
    }
}