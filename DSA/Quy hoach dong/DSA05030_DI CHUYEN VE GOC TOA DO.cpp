#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> dp (n + 1, vector<ll>(m + 1, 0));
        for(int i = 0; i <= n; i++){
            dp[i][0] = 1;
        }
        for(int j = 0; j <= m; j++){
            dp[0][j] = 1;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        cout << dp[n][m] << endl;
    }
}