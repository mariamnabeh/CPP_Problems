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
//بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ
     // day 6 of challenge : every day atleast one math problem :)

{
 // We want to find two positive integers a and b such that:
// gcd(a, b) + lcm(a, b) = x
//
// We use the simplest possible construction:
//
// Let a = 1 and b = x - 1
//
// Step 1: Compute gcd(a, b)
// gcd(1, x - 1) = 1 because 1 divides every integer and shares no other common divisor.
//
// Step 2: Compute lcm(a, b)
// Since gcd(1, x - 1) = 1, we use:
// lcm(a, b) = (a * b) / gcd(a, b)
//           = (1 * (x - 1)) / 1
//           = x - 1
//
// Step 3: Sum them
// gcd(a, b) + lcm(a, b) = 1 + (x - 1) = x
//
// Therefore, (1, x - 1) is always a valid solution for any x >= 2.
  // OR you can think of it like this:
// we add 1 and (x - 1), so the total becomes x.
// since gcd(1, x - 1) = 1 and lcm(1, x - 1) = x - 1,
// the sum stays exactly x.
//
// In other words, we are not changing the value,
// we are just splitting x into two parts that satisfy the condition.
    
    
    
    
ll x;
cin>>x;
ll a= 1;
ll b=x-1;
cout<<a<<" "<<b<<endl;

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