#include<bits/stdc++.h>

using namespace std;

const int maxn = 105;
int a[maxn][maxn];
int n, u, v;
vector<bool> visited(maxn, false);
vector<int> adj[maxn];
int parent[maxn];

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int tmp = q.front(); q.pop();
        for(int v : adj[tmp]){
            if(!visited[v]){
                parent[v] = tmp;
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int pathLen2(int u, int v){
    int cnt = 0;
    for(int x : adj[u]){
        for(int y : adj[x]){
            if(y == v){
                ++cnt;
                break;
            }
        }
    }
    return cnt;
}
int main(){
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);

    int test; cin >> test;
    cin >> n >> u >> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                adj[i].push_back(j);
            }
        }
    }
    if(test == 1){
        cout << pathLen2(u, v) << "\n";
    }
    else if(test == 2){
        BFS(u);
        if(!visited[v]){
            cout << "0\n";
        }
        else{
            vector<int> res;
            while(u != v){
                res.push_back(v);
                v = parent[v];
            }
            res.push_back(u);
            reverse(res.begin(), res.end());
            for(int it : res){
                cout << it << " ";
            }
        }
    }
}