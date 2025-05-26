#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10005];
bool visited[10005];
int parent[10005];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int curr = q.front(); q.pop();
        for(int v : adj[curr]){
            if(!visited[v]){
                visited[v] = true;
                parent[v] = curr;
                q.push(v);
            }
        }
    }
}

int path(int s, int t, int n){
    for(int i = 1; i <= n; i++){
        visited[i] = false;
        parent[i] = -1;
    }
    bfs(s);
    if(!visited[t]) return -1;
    int cur = t;
    vector<int> res;
    while(cur != s){
        res.push_back(cur);
        cur = parent[cur];
    }
    reverse(res.begin(), res.end());
    return res.size();
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }

        for(int i = 0; i < n - 1; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int q; cin >> q;
        while(q--){
            int u, v; cin >> u >> v;
            cout << path(u, v, n) << endl;
        }
    }
}
