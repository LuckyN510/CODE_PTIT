#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1005];
bool visited[1005];
int parent[1005];
int u, v;

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int nxt : adj[x]){
            if(!visited[nxt]){
                q.push(nxt);
                parent[nxt] = x;
                visited[nxt] = true;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m >> u >> v;   

        for(int i = 1; i <= n; i++){
            adj[i].clear();
            parent[i] = -1;
            visited[i] = false;
        }
        
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        bfs(u);

        if(!visited[v]){
            cout << "-1\n";
        }
        else{
            int cnt = 0;
            int cur = v;
            while(cur != u){
                ++cnt;
                cur = parent[cur];
            }
            cout << cnt <<endl;
        }
    }
}
