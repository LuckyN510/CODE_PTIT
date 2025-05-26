#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[100001];
bool visited[100001];
int cnt = 0;

void DFS(int u){
    ++cnt;
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
           DFS(x);
        }
    }
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
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        int res = 1;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                cnt = 0;
                DFS(i);
                res = max(res, cnt);
            }
        }
        cout << res;
        cout << endl;
    }
}