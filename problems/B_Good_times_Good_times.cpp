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
    string x;
    cin >> x;
    int d = x.size();

    ll y = 10;
    for (int i = 0; i < d; i++) 
    y *= 10;
    y += 1;

    cout << y << el;
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