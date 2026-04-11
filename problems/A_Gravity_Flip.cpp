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
    vector<int> a (n);
    for (int i=0; i<n; i++){

cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n;i++) cout<<a[i]<<" ";
    return 0;
}