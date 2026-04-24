#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <cctype>

using namespace std;
using ll = long long;
using ld = long double;
#define el "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int lower=0, uper=0;
    for (char&c: s){
   if (islower(c)){
lower++;

   }
    
if (isupper(c)){
uper++;
}

}
if (uper>lower) {
for (char& c:s)
c=toupper(c);
}
else {
for (char& c:s)
c=tolower(c);

}
cout<<s;
}
