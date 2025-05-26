#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[10005];
bool visited[10005];

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
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        int cnt = 0;
        for(int i = 1; i < n; i++){
            if(!visited[i]){
                BFS(i);
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}