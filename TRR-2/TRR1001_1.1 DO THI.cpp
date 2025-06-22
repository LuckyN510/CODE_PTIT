#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("DT.INP","r", stdin);
    freopen("DT.OUT","w", stdout);
    int test; cin >> test;
    if(test == 1){
        int n; cin >> n;
        int a[n + 1][n + 1];
        int deg[n + 1] = {0};
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j]){
                    deg[i]++;
                }
            }
        }
        for(int i = 1; i <= n; i++){
            cout << deg[i] << " ";
        }
    }
    else{
        int n; cin >> n;
        int a[n + 1][n + 1];
        vector<pair<int, int>> v;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j] && i < j){
                    v.push_back({i, j});
                }
            }
        }
        cout << n << " " << v.size() << endl;
        for(auto it : v){
            cout << it.first << " " << it.second << endl;
        }
    }
}