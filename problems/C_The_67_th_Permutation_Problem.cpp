#include <iostream>
#include <vector>
using namespace std;

void Remy() {
    int n;
    cin >> n;

    vector<int> p;
    int l = 1, r = 3 * n;

    for (int i = 0; i < n; i++) {
        p.push_back(l);       // small
        p.push_back(r - 1);   // median (important big)
        p.push_back(r);       // big

        l++;
        r -= 2;
    }

    for (int x : p) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        Remy();
    }

    return 0;
}