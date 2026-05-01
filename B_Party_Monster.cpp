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
const ll MOD = 1e9 + 7;

void SOLVE() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int open = 0, close = 0;

    for (char c : s) {
        if (c == '(') open++;
        else close++;
    }

    if (open == close) cout << "YES\n";
    else cout << "NO\n";
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