#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[10005];
int color[10005];

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        color[i] = 0;
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}

bool DFS(int u){
    color[u] = 1;
    for(int x : adj[u]){
        if(color[x] == 0){
            if(DFS(x)){
                return true;
            }
        }
        else if(color[x] == 1){
            return true;
        }
    }
    color[u] = 2;
    return false;
}


int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        bool check = false;
        for(int i = 1; i <= n; i++){
            if(color[i] == 0){
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