/*
 ███╗   ███╗ █████╗ ██████╗ ██╗ █████╗ ███╗   ███╗    ███╗   ██╗ █████╗ ██████╗ ███████╗██╗  ██╗
 ████╗ ████║██╔══██╗██╔══██╗██║██╔══██╗████╗ ████║    ████╗  ██║██╔══██╗██╔══██╗██╔════╝██║  ██║
 ██╔████╔██║███████║██████╔╝██║███████║██╔████╔██║    ██╔██╗ ██║███████║██████╔╝█████╗  ███████║
 ██║╚██╔╝██║██╔══██║██╔══██╗██║██╔══██║██║╚██╔╝██║    ██║╚██╗██║██╔══██║██╔══██╗██╔══╝  ██╔══██║
 ██║ ╚═╝ ██║██║  ██║██║  ██║██║██║  ██║██║ ╚═╝ ██║    ██║ ╚████║██║  ██║██████╔╝███████╗██║  ██║
 ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚═╝     ╚═╝    ╚═╝  ╚═══╝╚═╝  ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <numeric>

using namespace std;
using ll = long long;

#define el '\n' 
const ll MOD = 1e9 + 7;
// 
void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
   // day 7 of challenge : every day atleast one math problem :)
    // draft: IF the power is even then the negtive num while be postive ,if not will stay negtive
   
    ll n;
    cin>>n;
vector<ll>a(n);
for(int i=0; i<n;i++){
cin>>a[i];
}
long long max_A = -1e18, curr_A = 0;
    long long max_B = -1e18, curr_B = 0;

for(int i=0; i<n-1; i++){

long long diff = abs(a[i] - a[i + 1]);
        long long val_A, val_B;

        if (i % 2 == 0) {
            val_A = diff;
            val_B = -diff;
        } else {
            val_A = -diff;
            val_B = diff;
        }


    

curr_A = max(val_A, curr_A + val_A);
        max_A = max(max_A, curr_A);

        curr_B = max(val_B, curr_B + val_B);
        max_B = max(max_B, curr_B);
    }

    cout << max(max_A, max_B) << "\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        SOLVE();
    }
    return 0;
}