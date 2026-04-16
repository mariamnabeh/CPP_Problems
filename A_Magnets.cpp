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
    
    int n, prev, cre;
    cin >> n>> prev;
    int count=1;
    for(int i=1; i<n; i++){
cin>>cre;
if(cre!=prev){
count++;

}
prev=cre;


    }

    cout<<count;
    return 0;
}