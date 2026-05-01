#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <numeric>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;


void solve() {
     //                        بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
    int n;
    cin >> n;

    vector<int> div6, div2, div3, others;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x % 6 == 0) {
            div6.push_back(x);
        } else if (x % 2 == 0) {
            div2.push_back(x);
        } else if (x % 3 == 0) {
            div3.push_back(x);
        } else {
            others.push_back(x);
        }
    }

    
    for (int x : div6) cout << x<<" ";
    for (int x : div2) cout << x<<" " ;
    for (int x : others) cout<< x<<" ";
    for (int x : div3) cout << x<<" " ;
    
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}







