#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n + 1][m + 1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }   
        int res = 0;
        dp[0][0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i][0] = 1e9;
        }
        for(int i = 1; i <= m; i++){
            dp[0][i] = 1e9;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
               dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + a[i][j];
            }
        }
        cout << dp[n][m] << endl;
    }
}