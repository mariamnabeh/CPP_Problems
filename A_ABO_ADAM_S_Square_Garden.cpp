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
#include <cmath>
#include <iomanip>

using namespace std;
using ll = long long;

#define el '\n'
const ll MOD = 1e9 + 7;
ll count_valid (ll x){
   if (x<5) return 0;
ll count =(x/6)*2;
ll rem = x % 6;
    if (rem >= 1) count++;
    if (rem >= 5) count++;
    return count - 1;

}

void SOLVE()
{

  //draft:
// x^2=24k+1
//24k= (x^2-1)
//24k=(x+1)(x-1)
 // so , that's means (x^2-1) must be divisble by 24 , k>=1
// if we try k=1, x^2=25, x=5
// x >=5
// x^2%24=1
// x^2 % 24 = 1 must be coprime to 2 and 3.
// Numbers coprime to 2 and 3 repeat every 6 integers: (1, 5, 7, 11, 13, 17...)
// In each block of 6, there are exactly 2 valid numbers (1 and 5).
// count = (n / 6) * 2 + (rem >= 1) + (rem >= 5)
// Since k >= 1, then x^2 >= 25 -> x >= 5.
// We must exclude x = 1 from the count.
//valid_count =count valid(r) - count valid(l - 1)
//total_count = r-l+1
//probability: valid_count / total_count
 
// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ

ll l,r;

ll valid_r=0, valid_l=0;

   cin>>l>>r;
   
ll valid_count= count_valid(r)-count_valid(l-1);
ll total= r-l+1;
 double result = (double)valid_count / total;

    cout << fixed << setprecision(12) << result << el;
  

//Wait,Since when we helping our enemies tho? O_o

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        SOLVE();
    }
}