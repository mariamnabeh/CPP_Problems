/*
 ========================= 
        M.NABEH
   "The thrill of the code..."
   WA makes it more fun 
 ========================= 
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <bitset>
#include <iterator>
#include <iomanip>
using namespace std;

using ll = long long;

const int MAXN = 1000000;

vector<bool> prime(MAXN + 1, true);
vector<int> ans(MAXN + 1);

void Remy()
{
    int m;
    cin >> m;

    cout << ans[m] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Sieve
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= MAXN; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= MAXN; j += i)
                prime[j] = false;
        }
    }

    // 1 is always needed
    vector<int> special(MAXN + 1, 0);
    special[1] = 1;

    // p, p^2, p^4, p^8, ...
    for (int p = 2; p <= MAXN; p++)
    {
        if (!prime[p])
            continue;

        ll x = p;

        while (x <= MAXN)
        {
            special[x] = 1;

            if (x > MAXN / x)
                break;

            x *= x;
        }
    }

    // Prefix sum
    for (int i = 1; i <= MAXN; i++)
        ans[i] = ans[i - 1] + special[i];

    int t;
    cin >> t;

    while (t--)
        Remy();

    return 0;
}