#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
int n, m;
int parent[1005];
bool visited[1005];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : adj[x]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        visited[i] = false;
    }
    for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    bfs(1);
    bool check = false;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cout << i << "\n";
            check = true;
        }
    }
    if(!check) cout << "0";
}