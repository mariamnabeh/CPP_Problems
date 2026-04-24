#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>

using namespace std;
using ll = long long;
using ld = long double;
#define el "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
   int  officer=0;
   int unreated=0;
   int x;
   for(int i=0; i<n; i++){
cin>>x;
if (x==-1){
if(officer>0)
{
    officer--;
}
    else{
        unreated++;
   
    }
    
}
else{
        officer+=x;
    }





   }
    cout<<unreated;
    return 0;
}