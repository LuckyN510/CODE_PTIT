#include <bits/stdc++.h>
using namespace std;

int n, a[101][101];
vector<int> adj[105];
int color[101];

bool bfs(int u) {
    queue<int> q;
    q.push(u);
    color[u] = 0;

    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (int x : adj[v]) {
            if (color[x] == -1) {
                color[x] = 1 - color[v];
                q.push(x);
            } else if (color[x] == color[v]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    while (true) {
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            adj[i].clear();
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                if (a[i][j]) {
                    adj[i].push_back(j);
                }
            }
        }

        bool isBipartite = true;
        memset(color, -1, sizeof(color));
        // kiem tra do thi co lien thong khong
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (!bfs(i)) {
                    isBipartite = false;
                    break;
                }
            }
        }

        if (isBipartite) cout << "YES\n";
        else cout << "NO\n";
    }
}
