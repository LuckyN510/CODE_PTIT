#include<bits/stdc++.h>

using namespace std;

bool visited[101];
vector<int> adj[101];
int n, m, x, y;
int cnt;

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        cin >> n >> m >> x >> y;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        cnt = 0;
        // ta thấy điểm nghẽn là điểm di tu x đi den đc y, cach kiem tra la bo dinh hien tại ra khỏi đồ thị nếu đi từ x ko đến đc y thì không phải điểm nghẽn 
        for(int i = 1; i <= n; i++){
            memset(visited, false, sizeof(visited));
            visited[i] = true;
            dfs(x);
            if(!visited[y]){
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
 }