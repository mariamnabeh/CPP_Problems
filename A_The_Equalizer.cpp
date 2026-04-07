#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
    }

    if (sum % 2 == 0 && (n * k) % 2 == 1)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}