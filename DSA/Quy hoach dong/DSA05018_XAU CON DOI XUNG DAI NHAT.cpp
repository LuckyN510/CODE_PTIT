#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];//lưu xem s[i...j] có là palindrome không

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.length();
        s = "0" + s;
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++){
            dp[i][i] = true;
        }
        int res = 1;
        for(int len = 2; len <= n; len++){
            for(int i = 1; i <= n - len + 1; i++){
                int j = i + len - 1;
                if(len == 2 && s[i] == s[j]){
                    dp[i][j] = true;
                }
                else{
                    if(s[i] == s[j] && dp[i + 1][j - 1] == true){
                        dp[i][j] = true;
                    }
                }
                if(dp[i][j]){
                    res = max(res, len);
                }
            }
        }
        cout << res << endl;
    }
}