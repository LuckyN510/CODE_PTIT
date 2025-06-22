#include<bits/stdc++.h>

using namespace std;

const int maxn = 105;
vector<vector<int>> a(maxn, vector<int>(maxn));
vector<pair<int, int>> adj[maxn];
int n, s, t;
vector<pair<int, int>> dsCanh;

void dijkstra(){
    vector<int> d(n + 1, 1e9);
    vector<int> parent(n + 1, -1);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    while(!pq.empty()){
        auto [du, u] = pq.top(); pq.pop();
        if(du > d[u]) continue;
        if(u == t) break;
        for(auto it : adj[u]){
            int v = it.first, w = it.second;
            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                parent[v] = u;
                pq.push({d[v], v});
            }
        }
    }
    if(d[t] == 1e9){
        cout << "0\n";
    }
    else{
        cout << d[t] << "\n";
        vector<int> res;
        int cur = s;
        while(cur != t){
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int it : res){
            cout << it << " ";
        }
    }
}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    // freopen("DN.INP", "r", stdin);
    // freopen("DN.OUT", "w", stdout);
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0 && a[i][j] != 10000){
                adj[i].push_back({j, a[i][j]});
            }
        }
    }
    dijkstra();
}