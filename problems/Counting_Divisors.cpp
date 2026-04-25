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
    
    int x;
    cin>>x;
int count=0;
    while(x--){
int n;
cin>>n;
for (int i=1; i*i<n ; i++){
if (n%i==0){
count++;

}
if (i!=n/i){
count++;

}


}

}
   cout<<count<<el; 
    return 0;
}