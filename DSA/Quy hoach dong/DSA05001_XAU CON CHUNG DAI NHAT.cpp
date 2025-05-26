#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int n1 = a.length();
        int n2 = b.length();
        a = "0" + a;
        b = "0" + b;
        int dp[n1 + 1][n2 + 1] = {};
        for(int i = 1; i <= n1; i++){
            for(int j = 1; j <= n2; j++){
                if(a[i] == b[j]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else{
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[n1][n2] << endl;
    }
}