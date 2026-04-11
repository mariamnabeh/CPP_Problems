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
    int n, a, b, c, ans = 0;
cin >> n;
while (n--) {
    cin >> a >> b >> c;
    if (a + b + c >= 2) ans++;
}
cout << ans;
    
    
    return 0;
}