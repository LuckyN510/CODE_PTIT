#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];

int main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.length(), m = s2.length();
        s1 = "0" + s1;
        s2 = "0" + s2;
        dp[0][0] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s1[i] == s2[j]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else{
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[n][m] << endl;
    }
}