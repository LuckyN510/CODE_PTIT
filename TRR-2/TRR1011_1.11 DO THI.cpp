#include<bits/stdc++.h>
using namespace std;

struct edge{
    int x, y, w;
};
const int maxn = 105;
vector<pair<int, int>> adj[maxn];
int n, m;
vector<int> degree(maxn, 0);

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    cin >> n >> m;
    vector<vector<int>> matrix(n + 1, vector<int> (n + 1, 10000));
    for(int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
        degree[x]++;
        degree[y]++;
        matrix[x][y] = w;
        matrix[y][x] = w;
    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            cout << degree[i] << " ";
        }
    }
    else if(test == 2){
        cout << n << "\n";
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == j) cout << "0 ";
                else{
                    cout << matrix[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
}