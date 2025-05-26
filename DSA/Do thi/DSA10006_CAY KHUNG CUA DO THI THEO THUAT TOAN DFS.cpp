#include<bits/stdc++.h>

using namespace std;

int n, m, st;
vector<int> adj[10005];
bool visited[10005];
vector<pair<int, int>> v;

void nhap(){
    cin >> n >> m >> st;
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

void DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            v.push_back({u, x});
            DFS(x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        nhap();
        DFS(st);
        if(v.size() == n - 1){
            for(auto it : v){
                cout << it.first << " " << it.second << endl;
            }
        }
        else{
            cout << "-1\n"; 
        }
    }
}