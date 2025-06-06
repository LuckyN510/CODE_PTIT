#include<bits/stdc++.h>

using namespace std;

int dp[101][101];
// biến đổi xâu 1 thành xâu 2
int main(){
    int t; cin >> t;
    while(t--){
        string s1, s2; cin >> s1 >> s2;
        int n = s1.length(), m = s2.length();
        s1 = "@" + s1;
        s2 = "@" + s2;
        for(int i = 0; i <= n; i++){
            dp[i][0] = i; // mất i bước để xoá hết xâu 1
        }
        for(int j = 0; j <= m; j++){
            dp[0][j] = j; // mất j bước để chèn hết xâu 1
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s1[i] != s2[j]){
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1; // dp[i - 1][j] là mất 1 lần chèn, dp[i][j - 1] là mất 1 lần xoá, đ[i-1][j-1] mất 1 lần xoá 1 lần chèn
                }
                else{
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }
        cout << dp[n][m] << endl;
    }
}