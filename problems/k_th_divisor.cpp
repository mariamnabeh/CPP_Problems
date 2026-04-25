#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>

using namespace std;
using ll = long long;
using ld = long double;
#define el "\n"
int main() {
     ios::sync_with_stdio(false);
    cin.tie(NULL); 
    long long n, k;
    cin >> n >> k;

    vector<long long> d;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            d.push_back(i);

            if (i != n / i)
                d.push_back(n / i);
        }
    }

    sort(d.begin(), d.end());

    if (k > d.size())
        cout << -1;
    else
        cout << d[k - 1];

    return 0;
}