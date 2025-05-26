#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

ll power(int a, int b){
    if(b == 0) return 1;
    ll x = power(a, b / 2);
    x %= mod;
    if(b % 2 == 0) return (x * x) % mod;
    return (((x * x) % mod) * a) % mod;
}



int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        cout << power(a, b) << endl;
    }
}