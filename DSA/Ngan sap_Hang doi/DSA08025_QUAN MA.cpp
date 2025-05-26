#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int s, t, u, v;
int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
bool visited[9][9]; 

int BFS() {
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {s, t}});
    visited[s][t] = true;
    while (!q.empty()) {
        auto it = q.front(); q.pop();
        int i = it.second.first, j = it.second.second;
        int step = it.first;
        if (i == u && j == v) {
            return step;
        }
        for (int k = 0; k < 8; k++) {
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if (i1 >= 1 && i1 <= 8 && j1 >= 1 && j1 <= 8 && !visited[i1][j1]) {
                q.push({step + 1, {i1, j1}});
                visited[i1][j1] = true;
            }
        }
    }
    return -1;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        cin >> s1 >> s2;
        memset(visited, false, sizeof(visited));
        s = s1[0] - 'a' + 1;
        t = s1[1] - '0';
        u = s2[0] - 'a' + 1;
        v = s2[1] - '0';
        cout << BFS() << endl;
    }
}
