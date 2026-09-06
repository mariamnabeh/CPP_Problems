#include <bits/stdc++.h>
using namespace std;

struct comp
{
bool operator(ll a,ll b) cont{
return abs(b)<abs(a);




}
};


int main() {
    set<ll>s; 
    set<ll, comp> u;
    /* 
    1: all opretions takes ologn expect size() take o(n);
    2: set use  autortion not indexed
    3: orderd
    4: s.end () goes after the finall elemnt
    5: rbegin goes to the last elemnt
    6: if we wanna the set contians only postive int we use this method
    7: if we use vector we use only the fun without struct ,why?
    8: count give us 0/1 because set is uniqu

    */


multiset<ll>s;
// same thing as set expect multiset is not uniqe

unordered_set<ll>c;
/*
1: depans on hash table not atriton
2: takes o(1)
3: use it if u wanne use set but don't need to be sorted

*/
orderd_set<ll>a;
/*
1: orderd_of_key(x) : the num of element smallest the x in ologn
because in vector we can do it in o(n) so that's TLE, in SET we cann't 
use upper or lower_bound because we can only increment or discrment (t++, t--)
2: find_by_order(x) give us itroter that give us the index we wanna
3: and that solve the complexity problem and it's have the same set proplites
4: ther's no count() fun




*/

/*
map_notes:
1: if we wanna earse, find we give earse fun the key
2: sorted,fast (ologn)
3: count return 0 or 1

*/
/*
unorderd_map:
1: all map opretion on o(1)
2: hash table





*/


}
