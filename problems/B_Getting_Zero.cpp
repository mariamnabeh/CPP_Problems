#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define el '\n'
#define F first
#define S second
#define see_u_later return 0

const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

const ll MOD = 1e9 + 7;

ll fpower(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void Remy() {
    ll n;
    cin >> n;
//32768 = 2¹⁵
    vll a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];
ll count=0, cnt=0;
    for(int j = 0; j < n; j++) {
        ll ans = 1e18;
for(int i=0;i<=15;i++){
ll v=(a[j]+i) % 32768;
count=i;
while(v!=0&&v%2==0){
    v=(v*2)% 32768;
count++;
}
if(v==0){
ans=min(ans, count);
}
}
     

        cout << ans << " ";
    }

    cout << el;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--) {
        Remy();
    }

    see_u_later;
}