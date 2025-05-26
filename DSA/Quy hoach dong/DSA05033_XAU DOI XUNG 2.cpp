#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];//lưu độ dài lớn nhất của dãy con đối xứng

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.length();
        s = "@" + s;
        for(int i = 1; i <= n; i++){
            dp[i][i] = 1;
        }        
        for(int len = 2; len <= n; len++){
            for(int i = 1; i <= n - len + 1; i++){
                int j = i + len - 1;
                if(s[i] == s[j]){
                    dp[i][j] = 2 + dp[i + 1][j - 1];
                }
                else{
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << n - dp[1][n] << endl;
    }
}