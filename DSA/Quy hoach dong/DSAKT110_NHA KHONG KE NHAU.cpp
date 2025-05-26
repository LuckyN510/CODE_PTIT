#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int dp[n + 1] = {0};
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        for(int i = 2; i <= n; i++){
            dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
        }
        cout << dp[n] << endl;
    }
}