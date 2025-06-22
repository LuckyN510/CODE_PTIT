#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
vector<int> adj[1001];
int a[1001][1001];
int parent[1001];

void reset(int n) {
    for (int i = 0; i < n; ++i) {
        adj[i].clear();
        visited[i] = false;
        parent[i] = -1;
    }
}

void DFS(int u) {
    visited[u] = true;
    for (int x : adj[u]) {
        if (!visited[x]) {
            parent[x] = u;
            DFS(x);
        }
    }
}

int pathLength2(int u, int v) {
    int cnt = 0;
    for (int x : adj[u]) {
        for (int y : adj[x]) {
            if (y == v) {
                ++cnt;
                break; 
            }
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int test;
    cin >> test;

    if (test == 1) {
        int n, u, v;
        cin >> n >> u >> v;
        --u; --v;
        reset(n);

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    adj[i].push_back(j);
                }
            }

        cout << pathLength2(u, v) << '\n';
    }
    else if (test == 2) {
        int n, u, v;
        cin >> n >> u >> v;
        --u; --v;
        reset(n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    adj[i].push_back(j);
                }
            }

        DFS(u);
        if (!visited[v]) {
            cout << "0\n";
        } else {
            vector<int> path;
            for (int cur = v; cur != u; cur = parent[cur]) {
                path.push_back(cur);
            }
            path.push_back(u);
            reverse(path.begin(), path.end());
            for (int node : path) {
                cout << node + 1 << ' ';
            }
            cout << '\n';
        }
    }
}
