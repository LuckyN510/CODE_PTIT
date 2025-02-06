#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        int pre[n + 1][m + 1] = {0};
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
            }
        }
        int maxValue = -1e9;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                for(int h = i; h <= n; h++){
                    for(int c = j; c <= m; c++){
                        maxValue = max(maxValue, pre[h][c] - pre[h][j - 1] - pre[i - 1][c] + pre[i - 1][j - 1]);
                    }
                }
            }
        }
        cout << maxValue << endl;
    }
}