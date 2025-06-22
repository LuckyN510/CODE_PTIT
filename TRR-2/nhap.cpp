#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int n, s, t;
int a[101][101];
vector<pair<int, int>> adj[101];
int parent[101];
void Dijkstra() {
    vector<int> d(n + 1, INF);
    d[s] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [du, u] = pq.top();
        pq.pop();

        if (du > d[u]) continue;

        for (auto &[v, w] : adj[u]) {
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                parent[v] = u;
                pq.push({d[v], v});
            }
        }
    }
    if(d[t] == 1e9){
        cout << "0\n" ;
    }
    else{
    cout << d[t] << endl;
    int cur = s;
    vector<int> res;
    while(cur != t){
        res.push_back(t);
        t = parent[t];
    }
    res.push_back(s);
    reverse(res.begin(), res.end());
    for(int it : res){
        cout << it << ' ';
    }
}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    cin >> n >> s >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] != 0 && a[i][j] != 10000) {
                adj[i].push_back({j, a[i][j]});
            }
        }
    }
    Dijkstra();
    return 0;
}
