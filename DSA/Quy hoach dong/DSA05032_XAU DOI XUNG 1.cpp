#include<bits/stdc++.h>

using namespace std;

int dp[51][51];

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string re_s = s;
        reverse(re_s.begin(), re_s.end());
        int n = s.length();
        s = "@" + s;
        re_s = "@" + re_s;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(s[i] != re_s[j]){
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
                else{
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
            }
        }
        int longest = dp[n][n];
        cout << n - longest << endl;

    }
}