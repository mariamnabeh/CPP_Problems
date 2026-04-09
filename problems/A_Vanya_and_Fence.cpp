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
    
    ll n, h; // n= num of friends, k= height
    cin>>n>>h;
    int count=0;
    vector <int> friends(n);
    for(int i=0; i<n;i++){
cin>> friends[i];
if(friends[i]>h) {
count+=2;}
else{
   count+=1 ;
}
   


}
cout<<count;

return 0;
}