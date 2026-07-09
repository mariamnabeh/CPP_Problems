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
#include <iomanip>
using namespace std;
using ll = long long;

#define el '\n' 
const ll MOD = 1e9 + 7;

// In a BCC unit cell:
// - 1 atom at the center.
// - 8 corner atoms, each shared by 8 cells => 8 * (1/8) = 1 atom.
// So each unit cell contains 2 atoms in total.
//
// Unit cell volume = a^3, where a = p / q.
// Therefore, the domain (Voronoi cell) volume of one atom is:
//
// volume = a^3 / 2
//        = (p^3) / (2 * q^3)

void SOLVE()
{

    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ



   double p,q;
   cin>>p>>q;
   double ans=p*p*p/(2.0*q*q*q);
   cout<<fixed<<setprecision(6)<<ans<<el;
    






}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
     cin >> t;
    while (t--)
    {
        SOLVE();
    }
    return 0;
}