#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[1001][1001];
int n, m;
pair<int, int> s, t;

void BFS() {
    queue<pair<pair<int, int>, int>> q;
    q.push({{s.first, s.second}, 0});
    a[s.first][s.second] = 0;

    while (!q.empty()) {
        pair<int, int> u = q.front().first;
        int count = q.front().second;
        q.pop();

        if (u == t) {
            cout << count;
            return;
        }

        for (int k = 0; k < 4; k++) {
            int i1 = u.first + dx[k];
            int j1 = u.second + dy[k];

            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
                q.push({{i1, j1}, count + 1});
                a[i1][j1] = 0;
            }
        }
    }

    cout << -1;
}

int main() {
    cin >> n >> m >> s.first >> s.second >> t.first >> t.second;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    if (s == t) {
        cout << 0 << endl;
    } else if (a[t.first][t.second] == 0) {
        cout << -1 << endl;
    } else {
        BFS();
        cout << endl;
    }

    return 0;
}
