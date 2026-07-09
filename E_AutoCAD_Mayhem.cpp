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

void SOLVE(){

    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
 vector<ll> a(3), b(3);

for (int i = 0; i < 3; i++) cin >> a[i];
for (int i = 0; i < 3; i++) cin >> b[i];

sort(a.begin(), a.end());
sort(b.begin(), b.end());

vector<pair<ll, ll>> o;

for (int i = 0; i < 3; i++) {
    ll g = gcd(a[i], b[i]);
    o.push_back({a[i] / g, b[i] / g});
}

if (o[0] == o[1] && o[1] == o[2])
    cout << "YES\n";
else
    cout << "NO\n"; 

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1 ;
    // cin >> t;
    while (t--)
    {
        SOLVE();
    }
    return 0;
}