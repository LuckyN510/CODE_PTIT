#include<bits/stdc++.h>

using namespace std;

int n, m, st;
vector<int> adj[10005];
bool visited[10005];
vector<pair<int, int>> res;

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

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x : adj[v]){
            if(!visited[x]){
                res.push_back({v, x});
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        nhap();
        BFS(st);
        if(res.size() == n - 1){
            for(auto it : res){
                cout << it.first << " " << it.second << endl;
            }
        }
        else{
            cout << "-1\n"; 
        }
    }
}