#include <bits/stdc++.h>
using namespace std;

// yêu cầu của đề bài là tìm trọng số lớn nhất trên dường đi nhỏ nhất

vector<pair<int, int>> adj[301];
int n, m, q;

int dijkstra(int s, int t){
    vector<int> d(n + 1, 1e9);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    d[s] = 0;
    while(!pq.empty()){
        auto tmp = pq.top(); pq.pop();
        int u = tmp.second;
        if(tmp.first > d[u]) continue; 
        for(auto it : adj[u]){
            int v = it.first, w = it.second;
            int max_weight = max(d[u], w);  
            if(d[v] > max_weight){
                d[v] = max_weight;
                pq.push({d[v], v});
            }
        }
    }
    if(d[t] != 1e9) return d[t];
    return -1;
}

int main(){
    cin >> n >> m >> q;
    for(int i = 0; i < m; i++){
        int x, y, z;
        cin >> x >> y >> z;
        adj[x].push_back({y, z});
        adj[y].push_back({x, z});
    }
    while(q--){
        int s, t;
        cin >> s >> t;
        cout << dijkstra(s, t) << endl;
    }
}
