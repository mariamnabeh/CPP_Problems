#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void SOLVE()
// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
{
    ll n;
    cin >> n;

    vector<ll> a;

    ll num = 2;
    while (a.size() < n) {

        bool prime = true;

        for (ll i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            a.push_back(num);
        }

        num++;
    }

    for (ll x : a) {
        cout << x << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    SOLVE();
}