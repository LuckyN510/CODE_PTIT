#include<bits/stdc++.h>

using namespace std;

vector<int> adj[101];
int n, m;
int deg[101];
int a[101][101];

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int x; cin >> x;
            a[i][x] = 1; 
            a[x][i] = 1;
        }
    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            int deg = 0;
            for(int j = 1; j <= n; j++){
                if(a[i][j]){
                    deg++;
                }
            }
            cout << deg << " ";
        }
        cout << endl;
    }
    if(test == 2){
        vector<pair<int, int>> v;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j] && i < j){
                    v.push_back({i, j});
                }
            }
        }
        int m = v.size();
        vector<vector<int>> res(n+1, vector<int>(m, 0));
        int index = 0;
        for(int i = 0; i < m; i++){
            int x = v[i].first;
            int y = v[i].second;
            res[x][i] = 1;
            res[y][i] = 1;
        }
        cout << n << " " <<m << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < m; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}