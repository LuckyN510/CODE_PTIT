#include<bits/stdc++.h>

using namespace std;

int dp[10001][10001];
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length(), n2 = s2.length();
    s1 += "@" + s1;
    s2 += "@" + s2;
    for(int i = 0; i <= n1; i++){
        dp[i][0] = 0;
    }
    for(int i = 0; i <= n2; i++){
        dp[0][i] = 0;
    }
    for(int i = 1; i <= n1; i++){
        for(int j = 1; j <= n2; j++){
            if(s1[i] == s2[j]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[n1][n2];
}