#include <bits/stdc++.h>
using namespace std;

int n;
int a[101][101];
bool visited[101];
set<int> adj[101];
set<pair<int, int>> dsCanh; 

void DFS(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int tplt(){
    int cnt = 0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++cnt;
            DFS(i);
        }
    }
    return cnt;
}

vector<pair<int, int>> res;

void CanhCau(){
    int cc = tplt();
    for(auto it : dsCanh){
        int x = it.first, y = it.second;
        adj[x].erase(y);
        adj[y].erase(x);
        if(tplt() > cc){ 
            res.push_back({x, y});
        }
        adj[x].insert(y);
        adj[y].insert(x);
    }

    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for(auto edge : res){
        cout << edge.first << " " << edge.second << endl;
    }
}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    // freopen("TK.INP", "r", stdin);
    // freopen("TK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] && i < j){ 
                adj[i].insert(j);
                adj[j].insert(i);
                dsCanh.insert({i, j});
            }
        }
    }
    CanhCau();
}
