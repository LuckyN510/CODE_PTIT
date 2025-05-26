#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int n, m;
bool visited[1005];
vector<vector<int>> a, b;

void dfs1(int u, vector<int>& path){
    visited[u] = true;
    path.push_back(u);
    if (u == 2) {
        a.push_back(path);
    } else {
        for (int v : adj[u]) {
            if (!visited[v]) {
                dfs1(v, path);
            }
        }
    }
    path.pop_back();
    visited[u] = false;
}

void dfs2(int u, vector<int>& path){
    visited[u] = true;
    path.push_back(u);
    if (u == 1) {
        b.push_back(path);
    } else {
        for (int v : adj[u]) {
            if (!visited[v]) {
                dfs2(v, path);
            }
        }
    }
    path.pop_back();
    visited[u] = false;
}

int count_unique_vertices(const vector<int>& p1, const vector<int>& p2) {
    set<int> s;
    for (int x : p1) s.insert(x);
    for (int x : p2) s.insert(x);
    return s.size();
}

int main(){
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            visited[i] = false;
        }
        a.clear(); b.clear();

        for (int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }

        vector<int> path1, path2;
        dfs1(1, path1);
        memset(visited, false, sizeof(visited));
        dfs2(2, path2);

        int res = INT_MAX;
        for (auto &p1 : a) {
            for (auto &p2 : b) {
                res = min(res, count_unique_vertices(p1, p2));
            }
        }

        if (res == INT_MAX) cout << -1 << endl;
        else cout << res << endl;
    }
}
