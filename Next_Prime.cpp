#include <iostream>
using namespace std;

using ll = long long;

void SOLVE()
{
    ll n;
    cin >> n;

    while (true)
    {
        bool f = true;

        if (n < 2)
            f = false;

        for (ll i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                f = false;
                break;
            }
        }

        if (f)
        {
            cout << n;
            return;
        }

        n++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    SOLVE();
}