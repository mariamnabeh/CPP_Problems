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

const int N = 1e6 + 5; int spf[N];
void sieve()
{
    for (int i = 0; i < N; i++)
        spf[i] = i;

    for (int i = 2; i * i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int kernel(int x)
{
    int res = 1;

    while (x > 1)
    {
        int p = spf[x];
        int cnt = 0;

        while (x % p == 0)
        {
            x /= p;
            cnt++;
        }

        if (cnt & 1)
            res *= p;
    }

    return res;
}


void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
   
  ll n;
  cin>>n;
vector<int> a(n + 1);

for (int i = 1; i <= n; i++)
{
    cin >> a[i];
    a[i] = kernel(a[i]);
}


vector<vector<int>> adj(n + 1);

for (int i = 0; i < n - 1; i++)
{
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
}





}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
     cin >> t;
        sieve();
    while (t--)
    {
        
        SOLVE();
    }
    return 0;
}