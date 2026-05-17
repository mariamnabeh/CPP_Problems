#include <iostream>
#include <cmath>
using namespace std;

using ll = long long;

bool prime(ll n){
    if(n < 2) return false;

    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;

}