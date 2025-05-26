#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<int> dp(k + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= k; i++){
            for(int j = 1; j <= n; j++){
                if(i >= a[j]){
                    dp[i] += dp[i - a[j]];
                    dp[i] %= mod;
                }
            }
        }
        cout << dp[k] << endl;
    }
}