#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<int> adj[10001];
bool visited[10001];
vector<int> v;
set<int> se1, se2;

void DFS(int u){
    visited[u] = true;
    se2.insert(u);
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        se1.insert(i);
    }
    DFS(1);
    for(int it : se1){
        if(!se2.count(it)){
            cout << it << endl;
        }
    }
}