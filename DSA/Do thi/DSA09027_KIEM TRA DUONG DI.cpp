#include <bits/stdc++.h>

using namespace std;

int n, m, s, t, q;
vector<int> adj[100005];
bool visited[100005];
int parent[100005];

void DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            DFS(x);
        }
    }
}

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        visited[i] = false;
        parent[i] = 0;
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

int main() {
    int test;
    cin >> test;
    while (test--){
        nhap();
        cin >> q;
        while (q--) {
            cin >> s >> t;
             for(int i = 1; i <= n; i++){
                visited[i] = false;
                parent[i] = 0;
            }
            DFS(s);
            if(!visited[t]) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}