#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> dp(n + 1, 0);
        dp[1] = x;
        for(int i = 2; i <= n; i++){
            if(i % 2 == 0){
                dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
            }
            else{
                dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
            }
        }
        cout << dp[n] << endl;
    }
}