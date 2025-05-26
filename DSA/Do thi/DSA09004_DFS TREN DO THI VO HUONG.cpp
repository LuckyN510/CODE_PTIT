#include<bits/stdc++.h>

using namespace std;

int n, m, u;
vector<int> adj[10005];
bool visited[10005];

void DFS(int u){
    cout << u << " ";
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m >> u;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            visited[i] = false;
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
}
