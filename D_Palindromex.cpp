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
    string a;
    cin >> a;

    int l = 0, r = (int)a.size() - 1;
    bool ok = true;

    while (l < r) {
        if (a[l] != a[r]) {
            ok = false;
            break;
        }
        l++;
        r--;
    }

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