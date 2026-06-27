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

void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
  
   // Another way to solve this problem
// draft
/*
let the size of the first string s = m, and the second string t = n
g = gcd(n, m)
lcm = (m * n / g) and that's == n * (m / g) or m * (n / g)

If you repeat n (m / g) times it equals the lcm, and also for m.
So, if they are equal, print them.
Else, print -1;
*/
ll q;
cin>>q;
while(q--){
    string s,t;
cin >>s>>t;
ll n=s.size();
ll t_1=t.size();
ll g=gcd(n, t_1);
ll lcm=(n/gcd(n, t_1)*t_1);

if((n*t_1/g)==(t_1*n/g)){
string ans="";
while(ans.size()<lcm){
ans+=s;

}

 cout << ans << el;    

}


else{
     cout<<-1<<el;
   return; }
 
}

    

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
   // cin >> t;
    //while (t--)
    {
        SOLVE();
    }
    return 0;
}