#include<bits/stdc++.h>

using namespace std;

int dp[5001];

int main(){
    int c, n; cin >> c >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = c; j >= 0; j--){
            if(j >= a[i]){
                dp[j] = max(dp[j - a[i]] + a[i], dp[j]);
            }
        }
    }
    cout << dp[c];
}