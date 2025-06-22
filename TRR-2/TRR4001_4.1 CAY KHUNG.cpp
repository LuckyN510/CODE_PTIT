#include<bits/stdc++.h>

using namespace std;

set<int> adj[105];
int a[1005][105];
int n, s;
bool visited[1005];
vector<pair<int, int>> res;

void DFS(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            res.push_back({u, v});
            DFS(v);
        }
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
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int main(){
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    int test; cin >> test;
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].insert(j);
            }
        }
    }
    if(test == 1){
        DFS(s);
    }
    else if(test == 2){
        BFS(s);
    }
    if(res.size() < n - 1){
        cout << "0\n";
    }
    else{
        cout << res.size() << "\n";
        for(auto &p : res){
            cout << min(p.first, p.second) << " " << max(p.first, p.second) << "\n";
        }
    }
}