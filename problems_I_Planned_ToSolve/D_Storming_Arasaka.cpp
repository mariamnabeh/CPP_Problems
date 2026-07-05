/*
 ███╗    ███╗ █████╗ ██████╗ ██╗ █████╗ ███╗   ███╗    ███╗   ██╗ █████╗ ██████╗ ███████╗██╗  ██╗
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
    ll n;
    cin >> n;

    if ((n & (n - 1)) == 0) {
        cout << __builtin_ctz(n) << "\n";
         return;
    }


    ll temp = n;
    int distinct = 0, total = 0;

    for (ll i = 2; i * i <= temp; i++) {
        if (temp % i == 0) {
            distinct++;
            while (temp % i == 0) {
                total++;
                temp /= i;
            }
        }
    }

    if (temp > 1) {
        distinct++;
        total++;
    }

    if (distinct == 1)
        cout << total << '\n';
    else
        cout << total + distinct - 1 << '\n';
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