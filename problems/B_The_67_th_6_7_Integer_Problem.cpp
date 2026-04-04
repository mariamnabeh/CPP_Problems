/*
♦ ========================= ♦
        M.NABEH
   "The thrill of the code..."
   WA makes it more fun 
♦ ========================= ♦
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ---------- Functions ----------
void Remy() {
    vector<int> a(7);

    int total = 0;

    for (int i = 0; i < 7; i++) {
        cin >> a[i];
        total += a[i];
    }

    int ans = -1e9;

    for (int i = 0; i < 7; i++) {
        int cur = -total + 2 * a[i];
        ans = max(ans, cur);
    }

    cout << ans << endl;
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