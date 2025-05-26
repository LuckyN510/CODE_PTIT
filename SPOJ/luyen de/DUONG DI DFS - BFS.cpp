#include<bits/stdc++.h>

using namespace std;

vector<int> adj[10005];
int n, m;
bool visited[10005];
int parent[10005];

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            parent[v] = u;
            dfs(v);
        }
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : adj[x]){
            if(!visited[v]){
                visited[v] = true;
                parent[v] = x;
                q.push(v);
            }
        }
    }
}

void pathDFS(int s, int t){
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    dfs(s);
    if(!visited[t]){
        return;
    }
    else{
        int cur = t;
        vector<int> res;
        while(s != cur){
            res.push_back(cur);
            cur = parent[cur];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int it : res){
            cout << it << " ";
        }
        cout << endl;
    }
}

void pathBFS(int s, int t){
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    bfs(s);
    if(!visited[t]){
        return;
    }
    else{
        int cur = t;
        vector<int> res;
        while(s != cur){
            res.push_back(cur);
            cur = parent[cur];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int it : res){
            cout << it << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 2; i <= n; i++){
        pathDFS(1, i);
        pathBFS(i, 1);
    }

}