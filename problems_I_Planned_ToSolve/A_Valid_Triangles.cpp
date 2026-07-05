
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
const double PI = 3.14159265358979323846;
const double EPS = 1e-9;


void SOLVE()
{
    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ

ll s, a, b;
cin>>s>>a>>b;
double rad= s* PI/180.0;
double h= b*sin(rad);
ll count=0;
if(s>=90){
if(h>a+EPS){
count =0;}
else count =1;
}
else{
 if(h>a+EPS)
count =0;   
 else if (abs(a - h) < EPS)
{
    count = 1;
}
else if ( a < b)
{
    count = 2;
}
else
{
    count = 1;
}

}
cout<<count<<el;
    
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