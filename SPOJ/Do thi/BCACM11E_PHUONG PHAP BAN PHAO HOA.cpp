#include<bits/stdc++.h>

using namespace std;
vector<int> adj[10005];
int visited[10005];
int n;
int maxVal;
int a[1005][1005];
int ans;
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
            }
        }
    }
}

int tplt(){
    int cnt = 0 ;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++cnt;
            bfs(i);
        }
    }
    return cnt;
}

void dinhTru(){
    int cc = tplt();    
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        int dem = tplt();
        if(cc < dem){
            cc = dem;
            ans = i;             
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            adj[i].clear(); 
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j]){
                    adj[i].push_back(j);
                }
            }
        }
        ans = 0;
        memset(visited, false, sizeof(visited));
        maxVal = 0;
        dinhTru();
        cout << ans << endl;
    }
}