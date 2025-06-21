#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n + 1, vector<int>(n + 1, INF));
    for(int i = 1; i <= n; i++){
        mat[i][i] = 0;
    }
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        mat[u][v] = min(mat[u][v], w); // Nếu có nhiều cạnh, lấy cạnh nhỏ nhất
        mat[v][u] = min(mat[v][u], w);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(mat[i][k] < INF && mat[k][j] < INF)
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
            }
        }
    }
    int q; cin >> q;
    while(q--){
        int u, v;
        cin >> u >> v;
        if(mat[u][v] >= INF) cout << "-1\n"; // Không có đường đi
        else cout << mat[u][v] << "\n";
    }
}