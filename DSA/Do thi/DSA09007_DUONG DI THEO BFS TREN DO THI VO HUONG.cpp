#include<bits/stdc++.h>

using namespace std;

int n, m, s, t;
vector<int> adj[10005];
int parent[10005];
bool visited[10005];

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

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                parent[x] = v;
                visited[x] = true;
            }
        }
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        nhap();
        BFS(s);
        if(!visited[t]) cout << "-1\n";
        else{
            vector<int> res;
            while(s != t){
                res.push_back(t);
                t = parent[t];
            }
            res.push_back(s);
            reverse(res.begin(), res.end());
            for(int it : res){
                cout << it << ' ';
            }
            cout << endl;
        }
    }
}