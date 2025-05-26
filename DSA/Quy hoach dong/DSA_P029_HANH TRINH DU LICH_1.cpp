#include<bits/stdc++.h>
using namespace std;

const int MAX = 15;
int n, dist[MAX][MAX], dp[MAX][1 << MAX];

int tsp(int i, int mask){
    if(mask == (1 << n) - 1) return 0; // All cities visited
    if(dp[i][mask] != -1) return dp[i][mask];

    int ans = 1e9;
    for(int j = 0; j < n; j++){
        if(i != j && !(mask & (1 << j))){ // Corrected condition
            ans = min(ans, dist[i][j] + tsp(j , mask | (1 << j)));
        }
    }
    return dp[i][mask] = ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> dist[i][j];
            }
        }

        memset(dp, -1, sizeof(dp));
        int res = 1e9;
        for(int i = 0; i < n; i++){
            res = min(res, tsp(i, 1 << i)); // Try starting from each node
        }
        cout << res << endl;
    }
}
