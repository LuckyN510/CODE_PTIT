#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll dp[25001];

int main(){
    int C, n; cin >> C >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = C; j >= 0; j--){
            if(j >= a[i]){
                dp[j] = max(dp[j - a[i]] + a[i], dp[j]);
            }
        }
    }
    cout << dp[C];
    // for(int i = 1; i <= n; i++){
    //     for(int j = 0; j <= C; j++){
    //         if(j >= a[i]){
    //             dp[i][j] = max(dp[i - 1][j - a[i]] + a[i], dp[i - 1][j]);
    //         }
    //         else{
    //             dp[i][j] = dp[i - 1][j];
    //         }
    //     }
    // }
    // cout << dp[n][C];
}