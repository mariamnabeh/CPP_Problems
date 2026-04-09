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
  ll n;
  string s;
  cin >> n >> s;
  int a=0, d=0;
  for (char i:s){
if ( i=='A'){
a+=1;
 } 
 if ( i=='D'){
    d+=1;
 }}
 if (a<d) cout<<"Danik" ;
 if(a>d) cout<< "Anton";
 if (a==d) cout<<"Friendship";

    
   
 return 0;
}