#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
vector<int> adj[1001];
int a[1001][1001];
int parent[1001];
set<int> path;

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        path.insert(x);
        for(int v : adj[x]){
            if(!visited[v]){
                parent[v] = x;
                visited[v] = true;
                q.push(v);
            }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    int cnt = 0;
    vector<set<int>> res;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            BFS(i);
            res.push_back(path);
            path.clear();
        }
    }
    cout << res.size() << endl;
    for(auto x : res){
        for(int it : x){
            cout << it <<" ";
        }
        cout << endl;
    }
}
