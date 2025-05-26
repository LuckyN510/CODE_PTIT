#include<bits/stdc++.h>

using namespace std;
using ll = long long;

const ll mod = 1e9 + 7;

int power(ll n, ll k){
    if(k == 0){
        return 1;
    }
    ll x = power(n, k / 2);
    x %= mod;
    if(k % 2 == 0) return (x * x) % mod;
    return (((x * x) % mod) * n) % mod ;
}

int main(){
    ll n, k;
    while(true){
        cin >> n >> k;
        if(n == 0 && k == 0){
            break;
        }
        else cout << power(n, k) << endl;
    }
}

