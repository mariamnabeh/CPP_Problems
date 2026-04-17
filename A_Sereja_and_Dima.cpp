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
 vector<int> a(n);
 for(int i=0; i<n; i++){
 cin>>a[i];}

int l=0, r=n-1;
int s=0,d=0;
bool turn=true;// for s
while(l<=r){
int pick;
if (a[r]<a[l]){
pick=a[l];

l++;}

else {

    pick=a[r];
  r--;
}
if(turn){
    s+=pick;

}
else{d+=pick;}
  turn=!turn;
}

cout<<s<<" "<<d;



    return 0;
}