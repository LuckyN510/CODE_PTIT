#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[10005];
bool visited[10005];
int parent[10005];

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

bool DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            if(DFS(x)){
                return true;
            }
        }
        else if(x != parent[u]){
            return true;
        }
    }
    return false;
}


int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        bool check = false;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                if(DFS(i)){
                    check = true;
                    break;
                }
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}