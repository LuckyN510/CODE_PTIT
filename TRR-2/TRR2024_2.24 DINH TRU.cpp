#include<bits/stdc++.h>

using namespace std;

int n;
int a[101][101];
bool visited[101];
vector<int> adj[101];

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v : adj[x]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}


int tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++cnt;
            BFS(i);
        }
    }
    return cnt;
}
vector<int> res;

void DinhTru(){
    int cc = tplt();
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if(cc < tplt()){
            res.push_back(i);
        }
    }
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for(int it : res){
        cout << it << " ";
    }
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
            }
        }
    }
    DinhTru();
}