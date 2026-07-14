/*
 ========================= 
        M.NABEH
   "The thrill of the code..."
   WA makes it more fun 
 ========================= 
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>

using namespace std;

// ---------- Macros ----------
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define All(x) (x).begin()+1, (x).end()
#define rAll(x) (x).rbegin(), (x).rend()-1
#define Sz(x) (int)(x).size()-1
#define el '\n'
#define F first
#define S second
#define see_u_later return 0 // see u later :)

// ---------- Constants ----------
const long long INF = 1e18;
const int MOD = 1e9+7;

// ---------- Type Aliases ----------
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vpii = vector<pair<int,int> >;
using vpll = vector<pair<long long,long long> >;
using vpil = vector<pair<int,long long> >;
using vpcl = vector<pair<char,long long> >;
using vplc = vector<pair<long long,char> >;

// ---------- Functions ----------
ll n,k;
bool can(ll c, vector<ll>&have, vector<ll>&need)
{
ll magic=0;
for(int i=0;i<n;i++){
    if(have[i]>=need[i]*c) continue;
    magic+=(1ll*need[i]*c-have[i]);
if(magic>k) return false;
}
   return k>=magic; 
}


void Remy() {


cin>>n>>k;
vector<ll>have(n),need(n);

for(int i=0;i<n;i++) cin>>need[i];
for(int i=0;i<n;i++) cin>>have[i];

ll l=0,r=2e9, ans=0,mid;
while(l<=r){
mid=l+(r-l)/2;
if(can(mid,have, need)){


    ans=mid;
    l=mid+1;
}



else{

r=mid-1;



}




}

cout<<ans<<el;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        Remy();
    }

    see_u_later;
}