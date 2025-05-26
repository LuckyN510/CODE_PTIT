#include<bits/stdc++.h>

using namespace std;

int dp[101];
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i = 0; i < n; i++){
        for(int j = m; j >= 0; j--){
            if(j >= a[i]){
                dp[j] = max(dp[j - a[i]] + b[i], dp[j]);
            }
        }
    }
    cout << dp[m];
}