#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// tinh a * b mod c
ll mul(ll a, ll b, ll c){
    ll res = 0;
    while(b > 0){
        if(b % 2 != 0) res = (res + a) % c;
        b /= 2;
        a = (a + a) % c;
    }
    return res;
}


ll power(ll a, ll b, ll c){
    ll res =  1;
    while(b > 0){
        if(b % 2 != 0) res = mul(res, a, c);
        b /= 2;
        a = mul(a, a, c);
    }
    return res;
}


int main() {
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c; 
        cout << power(a, b, c) << endl;
    }
    return 0;
}
