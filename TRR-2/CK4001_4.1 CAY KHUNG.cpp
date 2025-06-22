#include<bits/stdc++.h>

using namespace std;

int n, s;
set<int> adj[101];
bool visited[101];
int a[101][101];
vector<vector<int>> res;

void DFS(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            res.push_back({u, v});
            DFS(v);
        }
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : adj[x]){
            if(!visited[v]){
                res.push_back({x, v});
                visited[v] = true;
                q.push(v); 
            }
        }
    }
}

int main(){
    int test;
    cin >> test;
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].insert(j);
            }
        }
    }
    if(test == 1){
        DFS(s);
    } 
    else if(test == 2){
        BFS(s);
    }
    if(res.size() == n - 1){
        cout << res.size() << endl;
        for(auto v : res){
            cout << v[0] << " " << v[1] << endl;
        }
    }
    else{
        cout << "0\n";
    }

}