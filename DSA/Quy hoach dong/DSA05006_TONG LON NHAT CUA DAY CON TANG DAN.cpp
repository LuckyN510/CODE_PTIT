#include<bits/stdc++.h>

using namespace std;

int dp[1000001];

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            dp[i] = a[i];
            for(int j = 0; j < i; j++){
                if(a[i] > a[j]){
                    dp[i] = max(dp[j] + a[i], dp[i]);
                }
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
}