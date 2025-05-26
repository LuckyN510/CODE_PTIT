#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        vector<pair<float, float>> v(n);
        for(int i = 0; i < v.size(); i++){
            cin >> v[i].first >> v[i].second;
        }
        vector<int> dp(n + 1, 1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(v[i].first > v[j].first && v[i].second < v[j].second){
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
        } 
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
}