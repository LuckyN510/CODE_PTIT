#include <bits/stdc++.h>
using namespace std;

int bfs(int u, vector<bool> &visited, vector<vector<int>> &adj, int n){
    vector<int> height(n + 1, 0);
    queue<int> q;
    q.push(u);
    visited[u] = true;
    int cnt = 0;
    while (!q.empty()){
        int tmp = q.front(); q.pop();
        for (int v : adj[tmp]){
            if (!visited[v]){
                visited[v] = true;
                height[v] = height[tmp] + 1;
                cnt = max(cnt, height[v]);
                q.push(v);
            }
        }
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<vector<int>> adj(n + 1);     
        vector<bool> visited(n + 1, false); 
        for (int i = 0; i < n - 1; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x); 
        }
        cout << bfs(1, visited, adj, n) << endl;
    }

}
