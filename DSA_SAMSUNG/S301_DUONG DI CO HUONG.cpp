#include<bits/stdc++.h>

using namespace std;

vector<int> adj[10005];

void bfs(int u, vector<int> &parent, vector<bool> &visited){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : adj[x]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                parent[v] = x;
            }
        }
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        int n, m, s, t;
        cin >> n >> m >> s >> t;
        vector<int> parent(n + 1, -1);
        vector<bool> visited(n + 1, false);
        for (int i = 1; i <= n; i++) {
            adj[i].clear(); 
        }
        for (int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        bfs(s, parent, visited);

        if(!visited[t]){
            cout << "-1\n";
        }
        else{
            int cur =  t;
            vector<int> res;
            while(s != cur){
                res.push_back(cur);
                cur = parent[cur];
            }
            res.push_back(s);
            reverse(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++){
                cout << res[i];
                if(i != res.size() - 1){
                    cout << " -> " ;
                }
                else{
                    cout << endl;
                }
            }
        }
    }
}