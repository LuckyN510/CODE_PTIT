#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
int n, m;
int parent[10005];
bool visited[10005];
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : adj[x]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                parent[v] = x;
            }
        }
    }
}

int tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            bfs(i);
            ++cnt;
        }
    }
    return cnt;
}

void dinhTru(){
    vector<int> res;
    int cc  = tplt();
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if(cc < tplt()){
            res.push_back(i);
        }
    }
    cout << res.size() << endl;
    for(int it : res){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    int test; cin >> test;
    while(test--){
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            adj[i].clear(); 
            visited[i] = false;
            parent[i] = -1;
        }
        for (int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        
        dinhTru();
    }
}