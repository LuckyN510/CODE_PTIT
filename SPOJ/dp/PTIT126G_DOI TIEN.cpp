#include<bits/stdc++.h>

using namespace std;
int dp[1001];

int main(){
    int n; cin >> n;
    int s; cin >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i <= s; i++){
        dp[i] = 1e9;
    }
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= s; j++){
            if(j >= a[i])
                dp[j] = min(dp[j], dp[j - a[i]] + 1);
        }
    }
    if(dp[s] == 1e9) cout << "-1";
    else cout << dp[s];
}