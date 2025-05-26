#include<bits/stdc++.h>

using namespace std;

int dp[101][101][101];

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        s1 = "0" + s1;
        s2 = "0" + s2;
        s3 = "0" + s3;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                for(int q = 1; q <= k; q++){
                    if(s1[i] == s2[j] && s2[j] == s3[q]){
                        dp[i][j][q] = dp[i - 1][j - 1][q - 1] + 1;
                    }
                    else{
                        dp[i][j][q] = max({dp[i - 1][j][q], dp[i][j - 1][q], dp[i][j][q - 1]});
                    }
                }
            }
        }
        cout << dp[n][m][k] << endl;
    }
}