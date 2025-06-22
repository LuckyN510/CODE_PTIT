#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
vector<int> adj[1001], re_adj[1001], un[1001];
int a[1001][1001];
set<int> path;
int n;

void DFS(int u){
    path.insert(u);
    visited[u] = true;
    for (int x : adj[u]) {
        if (!visited[x]) {
            DFS(x);
        }
    }
}

void DFS1(int u){
    path.insert(u);
    visited[u] = true;
    for (int x : re_adj[u]) {
        if (!visited[x]) {
            DFS1(x);
        }
    }
}

void DFS_u(int u){
    path.insert(u);
    visited[u] = true;
    for (int x : un[u]) {
        if (!visited[x]) {
            DFS_u(x);
        }
    }
}

bool ltm(){
    path.clear();
    memset(visited, false, sizeof(visited));
    DFS(1);
    if(path.size() != n) return false;

    path.clear();
    memset(visited, false, sizeof(visited));
    DFS1(1);
    if(path.size() != n) return false;

    return true;
}
bool lty(){
    path.clear();
    memset(visited, false, sizeof(visited));
    DFS_u(1);
    return path.size() == n;
}

int check(){
    if(ltm()) return 1;
    if(lty()) return 2;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].push_back(j);
                re_adj[j].push_back(i);
                un[i].push_back(j);
                un[j].push_back(i); 
            }
        }
    }
    cout << check();
}
