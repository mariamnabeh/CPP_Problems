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

int main(){
using namespace std;


int n,x,four=0,three=0,two=0,one=0;
   cin>>n;
   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       if(x==4)
        four++;
       else if(x==3)
        three++;
       else if(x==2)
        two++;
       else
        one++;
   }
   int groups=four;
   groups+=three;
   if(three>=one)
   {
       one=0;
   }
   else{
    one-=three;
   }

   groups+=two/2;
   two=two%2;

   if(one<=2)
   {
       if(one>0 || two>0)
        groups++;
   }
   else{
    if(two==1)
    {
        groups++;
        one-=2;
    }

    groups+=one/4;

    if(one%4!=0)
    {
        groups++;
    }
   }
   cout<<groups;

return 0;}








