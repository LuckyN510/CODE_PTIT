#include<bits/stdc++.h>
using namespace std; 

vector<pair<int, int>> adj[2001];
int n, m, q;
int d[2005];

int bfs(int u, int v){
    for(int i = 1; i <= n; i++){
        d[i] = 1e9;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, u});
    d[u] = 0;
    while(!q.empty()){
        pair<int, int> top = q.top(); q.pop();
        int x = top.second;
        for(auto it : adj[x]){
            int v = it.first, kc = it.second;
            if(d[v] > d[x] + kc){
                d[v] = d[x] + kc;
                q.push({d[v], v});
            }
        }   
    }
    return d[v];
}

int main(){
    cin >> n >> q;
    m = n - 1;
    for(int i = 0; i < m; i++){
        int x, y, l; cin >> x >> y >> l;
        adj[x].push_back({y, l});
        adj[y].push_back({x, l});
    }
    while(q--){
        int u, v;
        cin >> u >> v;
        cout << bfs(u, v) << endl;
    }
}