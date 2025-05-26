#include<bits/stdc++.h>

using namespace std;

int color[1001];
int n, m;
vector<int> adj[1001];

bool bfs(int u){
    queue<int> q;
    q.push(u);
    color[u] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(color[v] == -1){
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if(color[v] == color[u]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool check = true;
        memset(color, -1, sizeof(color));
        for(int i = 1; i <= n; i++){
            if(color[i] == -1){
                if(!bfs(i)){
                    check = false;
                    break;
                }
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}