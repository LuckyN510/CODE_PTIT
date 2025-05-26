#include<bits/stdc++.h>

using namespace std;
using ll = long long;

char solve(int n, ll k){
    ll x = pow(2, n - 1);
    if(x == k) return n + 'A' - 1;
    if(k > x) return solve(n - 1, k - x);
    return solve(n - 1, k);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}