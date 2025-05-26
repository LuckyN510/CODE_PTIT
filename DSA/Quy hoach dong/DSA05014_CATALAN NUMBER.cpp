#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll catalan(ll n){
    ll res = 1;
   if(n == 0) return 1;
    for(int i = 0; i <= n; i++){
       res *= 2 * i /(i % (n + 1));
    }
    return C[n];
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << catalan(n) << endl;
    }
}