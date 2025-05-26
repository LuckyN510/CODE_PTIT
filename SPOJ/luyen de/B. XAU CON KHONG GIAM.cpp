#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        string s; cin >> s;
        vector<int> dp(n, 1);
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < i; j++){
                if(s[i] > s[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            res = max(dp[i], res);
        }
        cout << res << endl;
    }
}