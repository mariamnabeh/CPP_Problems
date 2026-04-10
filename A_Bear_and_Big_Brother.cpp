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
    
    int a,b;
    cin>>a>>b;
    int count=0;
    while (a<=b){
a*=3;
b*=2;

count++;
    }
    cout<<count;
    return 0;
}