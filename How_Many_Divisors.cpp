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
    
    
    ll a, b,c;
    cin>>a>>b>>c;
  int count=0;
for (int i=a; i<=b; i++){
if (c%i==0){
count++;

}

}

cout<< count<<el;
    return 0;
}