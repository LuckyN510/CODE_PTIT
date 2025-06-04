#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        if(k > n) cout << "0\n";
        else if(k == n) cout << "1\n";
        else{
            ll res = 1;
            for(int i = n; i >= n - k + 1; i--){
                res *= i;
                res %= mod;
            }
            cout << res << "\n";
        }
        
    }
}