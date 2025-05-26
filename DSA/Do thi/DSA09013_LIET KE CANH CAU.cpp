#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[10005];
vector<pair<int, int>> v;
int visited[10005];

void DFS(int u, int s, int t){
    visited[u] = true;
    for(int x : adj[u]){
        if(u == s && x == t || u == t && x == s){
            continue;
        }
        if(!visited[x]){
            DFS(x, s, t);
        }
    }
}

int tplt(int s, int t){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++cnt;
            DFS(i, s, t);
        }
    }
    return cnt;
}

void canhCau(){
    int cc = tplt(0, 0);
    for(auto it : v){
        int x = it.first, y = it.second;
        memset(visited, false, sizeof(visited));
        if(cc < tplt(x, y)){
            cout << x << " "  << y << " ";
        }
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            visited[i] = false;
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        canhCau();
        cout << endl;
    }
}