#include<bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        for(int d = 1; d <= 9; d++){
            if(d <= k)
                dp[1][d] = 1;
        }
        for(int i = 2; i <= n; i++){
            for(int j = 0; j <= k; j++){
                for(int d = 0; d <= 9; d++){
                    if(j >= d){
                        dp[i][j] += dp[i - 1][j - d];
                        dp[i][j] %= mod;
                    }
                }
            }
        }
        cout << dp[n][k] << endl;
	}
}