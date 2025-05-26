#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> dp(n + 1, 0);
    int res = 0;
    for(int i = 0; i < n; i++){
        dp[a[i]] = dp[a[i] - 1] + 1;
        res = max(dp[a[i]], res);
    }
    cout << n - res << endl;
}