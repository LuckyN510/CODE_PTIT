#include<bits/stdc++.h>

using namespace std;

int n, m, s;
set<int> adj[101];
bool visited[101];
int a[101][101];
vector<int> path;
vector<vector<int>> res;
bool check = false;

void DFS(int u, int cnt){       
    path.push_back(u);
    visited[u] = true;
    if(cnt == n){
        if(adj[u].count(s)){
            path.push_back(s);
            res.push_back(path);
            path.pop_back();
        }
        visited[u] = false;
        path.pop_back();
        return;
    }
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v, cnt + 1);
        }
    }
    visited[u] = false;
    path.pop_back();
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].insert(j);
            }
        }
    }
    DFS(s, 1);
    if(!res.empty()){
        for(auto it : res){
            for(auto x : it){
                cout << x << " ";
            }
            cout << endl;
        }
        cout << res.size();
    }
    else{
        cout << "0\n";
    }

}