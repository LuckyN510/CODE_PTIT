#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m;
int a[1001][1001];
int deg[1001];
int res[1001][1001];

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    if(test == 1){
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            deg[x]++;
            deg[y]++;
        }
        for(int i = 1; i <= n; i++){
            cout << deg[i] << " ";
        }
        cout << endl;
    }
    else if(test == 2){
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            res[x][y] = 1;
            res[y][x] = 1;
        }
        cout << n << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}
