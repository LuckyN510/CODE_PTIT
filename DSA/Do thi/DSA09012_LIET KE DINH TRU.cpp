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

void DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i);
            ++cnt;
        }
    }
    return cnt;
}

void dinhTru(){
    int cc = tplt();
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if(cc < tplt()){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        dinhTru();
    }
}