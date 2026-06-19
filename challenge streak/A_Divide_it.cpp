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

/*
 // day 12  of challenge : every day atleast one math problem :)

divisble by n=n/2, by 3= 2n/3, by 5=4n/5
2^a, 3^b, 5^c
because in every n divisble by 3 or 5 we increase a , and we wanna calc the num of steps make n=1
we must remove every adtional 2, so: a+2^b+3c => a to remove a , 2b to remove additonal a added and to remove b , c to remove the 4(2*2) added and c

example: 30= 2*3*5= a=1, b=1, c=1 = 1(1)+1(2)+1(3)=6

*/

    // بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيمِ




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
     cin >> t;
    while (t--)
    {

ll n;
cin>>n;ll a=0, b=0, c=0, ans=0;
while(n%2==0){
    a++;
    n/=2;
    

}
while(n%3==0){
   b++; 
    n/=3;

}
while(n%5==0){
  c++;  
n/=5;

}

if (n!=1){
cout<< -1 <<el;

}
else{

   cout<<a+(2*b)+(3*c)<<el;
}

    }
    return 0;
}