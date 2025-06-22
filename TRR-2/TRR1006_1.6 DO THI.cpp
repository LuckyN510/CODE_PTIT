#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n, m;
int deg[1001];
int res[1001][10001];

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
            int x, y; 
            cin >> x >> y;
            res[x][i] = 1;
            res[y][i] = 1;
        }
        cout << n << " " << m << endl;
        for(int i = 1; i <= n; i++){
            for (int j = 0; j < m; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}