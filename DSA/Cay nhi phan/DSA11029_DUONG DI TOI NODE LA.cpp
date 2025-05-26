#include<bits/stdc++.h>

using namespace std;

vector<int> adj[10005];
bool visited[10005];
int parent[10005];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void path(int s, int t){
    bfs(1);
    if(!visited[t]){
        cout << "-1" << endl;
    }
    else{
        int cur = t;
        vector<int> res;
        while(s != cur){
            res.push_back(cur);
            cur = parent[cur];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int it : res){
            cout << it << " ";
        }
        cout << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            visited[i] = false;
            parent[i] = -1;
        }
        for(int i = 0; i < n - 1; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<int> v;
        for(int i = 2; i <= n; i++){
            if(adj[i].size() == 1){
                v.push_back(i);
            }
        }
        for(int it : v){
            path(1, it);
        }

    }
}