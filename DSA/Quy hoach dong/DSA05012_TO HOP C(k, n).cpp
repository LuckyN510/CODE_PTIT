#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
ll dp[1001][1001];

void ktao(){
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                dp[i][j] %= mod;
            }
        }
    }
}

int main(){
    ktao();
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
}