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
const double PI = 3.14159265358979323846;
const double EPS = 1e-9;

void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
//Back to the challenge : every day geomtery and number theory problem till ECPC : Day_2 :)
    ll s, a, b;
    cin >> s >> a >> b;

    double rad = s * PI / 180.0;
    double h = a * sin(rad);

    if (s >= 90)
    {
        if (b < h - EPS)
            cout << 0 << el;
        else if (abs(b - h) < EPS)
            cout << 1 << el;
        else
        {
            if (b > a)
                cout << 1 << el;
            else
                cout << 0 << el;
        }
    }
    else
    {
        if (b < h - EPS)
            cout << 0 << el;
        else if (abs(b - h) < EPS)
            cout << 1 << el;
        else if (b < a)
            cout << 2 << el;
        else
            cout << 1 << el;
    }
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