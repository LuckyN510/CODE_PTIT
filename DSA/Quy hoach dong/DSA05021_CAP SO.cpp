#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < v.size(); i++){
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        vector<int> dp(n, 1);
        int res = 1;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(v[j].second < v[i].first){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
}
// int main(){
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         vector<pair<int, int>> v(n);
//         for(int i = 0; i < v.size(); i++){
//             cin >> v[i].second >> v[i].first;
//         }
//         sort(v.begin(), v.end());
//         int cur = v[0].first, cnt = 1;
//         for(int i = 1; i < v.size(); i++){
//             if(cur < v[i].second){
//                 cur = v[i].first;
//                 ++cnt;
//             }
//         }
//         cout << cnt << endl;
//     }
// }