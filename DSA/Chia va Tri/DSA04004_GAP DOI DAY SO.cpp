#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int tinh(int n, ll k){
    if(n == 0) return 1;
    ll x = pow(2, n - 1);
    if(k == x) return n;
    if(k > x) return tinh(n - 1, k - x);
    return tinh(n - 1, k);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; 
        ll k;
        cin >> n >> k;
        cout << tinh(n, k) << endl;
    }
}