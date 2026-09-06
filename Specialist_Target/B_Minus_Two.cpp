#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;

const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
#define el '\n'

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

void Remy() {
    int n;
  cin>>n;

    int even = 0, odd = 0;
    int mod0 = 0, mod2 = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (x % 2 == 1) {
            odd++;
        }
        else {
            even++;

            if (x % 4 == 0)
                mod0++;
            else
                mod2++;
        }
    }

    cout << max({odd, mod0, mod2}) << el;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    if (cin >> t) {
        while (t--) {
            Remy();
        }
    }

    M_NABEH
}