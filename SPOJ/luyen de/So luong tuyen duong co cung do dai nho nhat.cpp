#include<bits/stdc++.h>

using namespace std;
using ll = long long;

vector<pair<int, int>> adj[100001];
int n, m;

void dijkstra(){
    vector<ll> cnt(n + 1, 0);
    vector<int> d(n + 1, 1e9);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>  pq;
    pq.push({0, 1});
    d[1] = 0;
    cnt[1] = 1;
    while(!pq.empty()){
        auto top = pq.top(); pq.pop();
        int u = top.second;
        for(auto it : adj[u]){
            int v = it.first, w = it.second;
            if(d[v] > d[u] + w){
                d[v] =  d[u] + w;
                cnt[v] = cnt[u];
                pq.push({d[v], v});
            }
            else if(d[v] == d[u] + w){
                cnt[v] += cnt[u];
            }
        }
    }
    cout << d[n] << " " << cnt[n] << endl;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({v, c});
        adj[v].push_back({u, c});  
    }
    dijkstra();
}