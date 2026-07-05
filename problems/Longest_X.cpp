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
  string s;
  cin>>s;
  ll k, count=0, dots=0,l=0, ans=0;
  cin>>k;
  for(int i=0;i<s.size();i++){
if(s[i]=='.') dots++;
while(dots>k){
if(s[l]=='.')
dots--;
l++;

}
//l++;



ans=max(ans, i-l+1);

  }  





cout<<ans;

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