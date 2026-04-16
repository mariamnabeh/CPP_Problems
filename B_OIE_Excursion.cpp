#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long m;
    cin >> n >> m;
    vector<long long> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<long long> bad(n+1);
    for(int i = 1; i <= n; i++)
        bad[i] = (m - (a[i] + i) % m) % m;

    set<long long> badSet(bad.begin()+1, bad.end());

    if((long long)badSet.size() == m)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}