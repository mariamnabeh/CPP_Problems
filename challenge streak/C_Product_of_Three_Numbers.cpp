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
#include <numeric>

using namespace std;
using ll = long long;

#define el '\n' 
const ll MOD = 1e9 + 7;

void SOLVE()
{
    ll n;
    cin>>n;
    // day 8  of challenge : every day atleast one math problem :)
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
   ll a=-1, b=-1, c ;
for(ll i=2; i*i<=n; i++){
if(n%i==0){
a=i;
n/=i;
break;}
}
for(ll i=2; i*i<=n; i++){
if(n%i==0&& i != a){
b=i;
n/=i;
break;}
}
c=n;

 if (a != -1 && b != -1 && c != a && c != b && c > 1)
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

int main()
{
   
    ll t ;
     cin >> t;
    while (t--)
    {
        SOLVE();
    }
}