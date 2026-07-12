/*
 ███╗   ███╗ █████╗ ██████╗ ██╗ █████╗ ███╗   ███╗    ███╗   ██╗ █████╗ ██████╗ ███████╗██╗  ██╗
 ████╗ ████║██╔══██╗██╔══██╗██║██╔══██╗████╗ ████║    ████╗  ██║██╔══██╗██╔══██╗██╔════╝██║  ██║
 ██╔████╔██║███████║██████╔╝██║███████║██╔████╔██║    ██╔██╗ ██║███████║██████╔╝█████╗  ███████║
 ██║╚██╔╝██║██╔══██║██╔══██╗██║██╔══██║██║╚██╔╝██║    ██║╚██╗██║██╔══██║██╔══██╗██╔══╝  ██╔══██║
 ██║ ╚═╝ ██║██║  ██║██║  ██║██║██║  ██║██║ ╚═╝ ██║    ██║ ╚████║██║  ██║██████╔╝███████╗██║  ██║
 ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚═╝     ╚═╝    ╚═╝  ╚═══╝╚═╝  ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝
*/

#include <iostream>
#include <sstream>
#include <set>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <vector>
#include <map>
#include <queue>
#include <numeric>
#include <string>
#include <cmath>
#include <climits>
#include <stack>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <array>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <bitset>
#include <cassert>
#include <tuple>
#include <iterator>
#include <random>
#include <chrono>
#include <list>
using namespace std;
using ll = long long;


#define el '\n'
const ll MOD = 1e9 + 7;

ll power(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void SOLVE()
{
 
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ

ll n;
cin>>n;
vector<ll>a(n);
for(int i=0;i<n;i++) cin>>a[i];
sort(a.begin(),a.end());
ll q;
cin>>q;
while(q--){
ll x;cin>>x;
cout<<upper_bound(a.begin(),a.end(),x)-a.begin()<<el;





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

    return 0;
}