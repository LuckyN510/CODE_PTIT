#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> dp(n + 1, 0);
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = i;
            for(int j = 1; j <= sqrt(i); j++){
                dp[i] = min(dp[i], 1 + dp[i - j * j]);
            }
        }
        cout << dp[n] << endl;
    }
}