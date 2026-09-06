#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;

#define all(x) (x).begin(), (x).end();
#define rall(x) (x).rbegin(), (x).rend();
#define M_NABEH return 0;
#define el '\n'

const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;

// وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

// let's solve this problem :)
// Deleting a[i] breaks the chain between a[i-1] and a[i+1].
// We must reduce a[i+1] (and next elements) to fix the gap <= k.
// We use Binary Search to find where this effect stops.
// We use Prefix Sum to compute the total operations in O(1).  
// the end^^




void Remy() {
    int n;
    ll k;
    cin >> n >> k;

    vll a(n+1), p(n + 1, 0);
for(int i=1;i<=n;i++){
    cin>>a[i];
    p[i]=p[i-1]+a[i];
}
for (int i = 1; i <= n; i++) {
       
        if (i == 1 || i == n) {
            cout << 0 << " ";
            continue;
        }
    

 long long l=1, r=n-i;
   ll st=a[i-1];
   long long ans=0;

   while(l<=r){
    ll mid=l+(r-l)/2;
if(st+k*mid<a[i+mid]){
    ans=mid;
    l=mid+1;
}
else{
r=mid-1;
}


   }

if(ans==0){
    cout<<0<<" ";
    continue;

}

ll lol=i+1, rr=ans+i;
long long sum=p[rr]-p[lol-1];
ll sz=ans;
ll new_s=sz * st + k * (sz * (sz + 1) / 2);

cout<<sum-new_s<<" ";
   }
cout<<el;
// this eqation is pretty cool let's prove it :)
// the old sum = a[L] + a[L+1] + ... + a[R]
// the new sum = (st + 1*k) + (st + 2*k) + ... + (st + sz*k)

// = (st + st + ... sz times) + k * (1 + 2 + ... + sz)
// let the num of elements = sz
// so finally = (sz * st) + k * (1 + 2 + ... + sz)
// (1 + 2 + ...) , Arithmetic Series = (sz * (sz + 1) / 2)

// the ops = old_sum - new_sum







}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    cin >> t;

    while (t--) {
        Remy();
    }

    // shortcuts:
    //"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)

    M_NABEH
}