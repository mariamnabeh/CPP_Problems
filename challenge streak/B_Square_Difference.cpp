/*
 ███╗   ███╗ █████╗ ██████╗ ██╗ █████╗ ███╗   ███╗    ███╗   ██╗ █████╗ ██████╗ ███████╗██╗  ██╗
 ████╗ ████║██╔══██╗██╔══██╗██║██╔══██╗████╗ ████║    ████╗  ██║██╔══██╗██╔══██╗██╔════╝██║  ██║
 ██╔████╔██║███████║██████╔╝██║███████║██╔████╔██║    ██╔██╗ ██║███████║██████╔╝█████╗  ███████║
 ██║╚██╔╝██║██╔══██║██╔══██╗██║██╔══██║██║╚██╔╝██║    ██║╚██╗██║██╔══██║██╔══██╗██╔══╝  ██╔══██║
 ██║ ╚═╝ ██║██║  ██║██║  ██║██║██║  ██║██║ ╚═╝ ██║    ██║ ╚████║██║  ██║██████╔╝███████╗██║  ██║
 ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚═╝     ╚═╝    ╚═╝  ╚═══╝╚═╝  ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝
*/
 // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
      // day 6 of challenge : every day atleast one math problem :)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <numeric>
#include<cmath>

using namespace std;
using ll = long long;
#define el '\n' 
const ll MOD = 1e9 + 7;
// draft:
// to check the num is prime and  the differnce notv" fast" , we can't use the tradtional way. it will cause TLE
// so, lrt p= prime number
// p= n*1
// if we have (x^2)-(y^2) == (x-y)(x+y)
// must brackt = 1, and the anther = prime num
// hance , (x-y) logically can =1 because it's must = smallest value
// finally , (x-y) must=1&& (x+y) must be prime

bool prime(ll n){
    if(n < 2) return false;

    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;}

void SOLVE()
{
   
ll x,y;
cin>>x>>y;

if ((x-y)==1&&prime(x+y)){
    cout<<"YES"<<el;
}

else{

cout<<"NO"<<el;


}
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
}