#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> adj[10005];
bool visited[10005];
int cnt = 0;
int parent[10005];

void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        visited[i] = false;
        parent[i] = -1;
    }
    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
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
bool check1(){
    bool ok = false;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(DFS(i)){
                ok = true;
                break;
            }
        }
    }
    return ok;
}

bool isConected(){
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        if(!check1() && isConected()){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}