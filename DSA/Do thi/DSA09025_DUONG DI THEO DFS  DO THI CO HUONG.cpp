#include<bits/stdc++.h>

using namespace std;

int n, m, s, t;
vector<int> adj[10005];
bool visited[10005];
int parent[10005];

void DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            DFS(x);
        }
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        cin >> n >> m >> s >> t;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            visited[i] = false;
            parent[i] = 0;
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        DFS(s);
        if(!visited[t]){
            cout << "-1" << endl;
            continue;
        }
        else{
            vector<int> res;
            while(s != t){
                res.push_back(t);
                t = parent[t];
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
