/*B. Prefix Max
time limit per test1.5 seconds
memory limit per test256 megabytes
You are given an array of n
 integers a1,a2,…,an
.

The value of an array is the sum of the maximums of each prefix of the array. More formally, the value of an array a
 is ∑ni=1max(a1,…,ai)
. For example, the value of the array [1,2,1
] is max(1)+max(1,2)+max(1,2,1)=1+2+2=5
.

You can choose two indices i
 and j
 and swap elements ai
 and aj
; this operation can be applied at most one time.

Find the maximum possible value of the array a
 after at most one operation.

Input
The first line of the input contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (2≤n≤50
) — the length of the array a
.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤104
) — the array a
.

Output
For each test case, output the maximum possible value of the array a
 after the swap has been performed.*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>

using namespace std;

#define el "\n"
typedef long long ll;
typedef long double ld;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    FIO;
ll n;
cin>> n;
ll count=0;
ll max_val=0;
vector<int> arr(n);
for (int i=0; i<n; i++){
cin >>arr[i];
if (arr[i]>max_val){
count+=max_val;


}


}


}


