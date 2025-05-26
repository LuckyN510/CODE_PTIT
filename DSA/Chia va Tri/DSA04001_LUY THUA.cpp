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
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << power(n, k) << endl;
    }
}