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
    ll x, y;
    cin>>x>>y;
    if (2*x<=y) cout<<x<<" "<<2*x;
    else cout<<-1<< " "<< -1;
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