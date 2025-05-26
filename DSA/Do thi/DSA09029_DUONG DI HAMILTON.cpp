#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[10005];
bool visited[10005];
bool check = true;

void DFS(int u, int cnt){
    if(cnt == n){
        check = true;
        return;
    }
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            DFS(x, cnt + 1);
        }
    }
    visited[u] = false;
}

void nhap(){
    cin >> n >> m;
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
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        check = false;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                DFS(i, 1);
            }
        }
        if(check) cout << "1\n";
        else cout << "0\n";
    }
}