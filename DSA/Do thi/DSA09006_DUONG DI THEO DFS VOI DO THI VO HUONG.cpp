#include<bits/stdc++.h>

using namespace std;

int n, m, s, t;
vector<int> adj[10005];
bool visited[10005];
int parent[10005];

void nhap(){
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        visited[i] = false;
        parent[i] = -1;
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            DFS(x);
            parent[x] = u;
        }
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        vector<int> res;
        nhap();
        DFS(s);
        if(!visited[t]){
            cout << "-1\n";
            break;
        }
        else{
            int cur = t;
            while(s != cur){
                res.push_back(cur);
                cur = parent[cur];
            }
            res.push_back(s);
            reverse(res.begin(), res.end());
            for(int it : res){
                cout << it << " ";
            }
            cout << endl;
        }
    }
}